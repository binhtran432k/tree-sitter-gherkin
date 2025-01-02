#ifndef ARRAY_TRIE_H_
#define ARRAY_TRIE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define DECL_ARRAY_TRIE(Name, T, S, V)                                         \
  _DECL_ARRAY_TRIE__STRUCT(Name, T, S, V)                                      \
  _DECL_ARRAY_TRIE_STATE__STRUCT(Name, T, S, V)                                \
  _DECL_ARRAY_TRIE__GET_I_P1(Name, T, S, V)                                    \
  _DECL_ARRAY_TRIE_STATE__ADVANCE(Name, T, S, V)

#define IMPL_ARRAY_TRIE(Name, T, S, V)                                         \
  _IMPL_ARRAY_TRIE__GET_I_P1(Name, T, S, V)                                    \
  _IMPL_ARRAY_TRIE_STATE__ADVANCE(Name, T, S, V)

#define _DECL_ARRAY_TRIE__STRUCT(Name, T, S, V)                                \
  typedef struct {                                                             \
    const T *prefix_raw;                                                       \
    const S *prefix_indexes;                                                   \
    const S *prefix_sizes;                                                     \
    const S *i_p1s;                                                            \
    const S *sizes;                                                            \
    const V *values;                                                           \
    const S root_size;                                                         \
  } Name;

#define _DECL_ARRAY_TRIE_STATE__STRUCT(Name, T, S, V)                          \
  typedef struct {                                                             \
    S i_p1;                                                                    \
    S step;                                                                    \
    const V *value;                                                            \
    bool stopped;                                                              \
  } Name##State;

#define _DECL_ARRAY_TRIE__GET_I_P1(Name, T, S, V)                              \
  static S Name##_get_i_p1(const Name *self, S i_p1, int32_t label);

#define _DECL_ARRAY_TRIE_STATE__ADVANCE(Name, T, S, V)                         \
  static void Name##State_advance(Name##State *self, const Name *data,         \
                                  int32_t label);

#define _IMPL_ARRAY_TRIE__GET_I_P1(Name, T, S, V)                              \
  S Name##_get_i_p1(const Name *self, S i_p1, int32_t label) {                 \
    S left, right;                                                             \
    if (i_p1 == 0) {                                                           \
      left = 0;                                                                \
      right = self->root_size;                                                 \
    } else {                                                                   \
      left = self->i_p1s[i_p1 - 1] - 1;                                        \
      right = left + self->sizes[i_p1 - 1];                                    \
    }                                                                          \
    while (left < right) {                                                     \
      S mid = (left + right) / 2;                                              \
      if ((self->prefix_raw[self->prefix_indexes[mid]]) >= label)              \
        right = mid;                                                           \
      else                                                                     \
        left = mid + 1;                                                        \
    }                                                                          \
    return self->prefix_raw[self->prefix_indexes[left]] == label ? left + 1    \
                                                                 : 0;          \
  }

#define _IMPL_ARRAY_TRIE_STATE__ADVANCE(Name, T, S, V)                         \
  void Name##State_advance(Name##State *self, const Name *data,                \
                           int32_t label) {                                    \
    if (self->step == 0) {                                                     \
      self->i_p1 = Name##_get_i_p1(data, self->i_p1, label);                   \
      if (self->i_p1 == 0) {                                                   \
        self->value = NULL;                                                    \
        self->stopped = true;                                                  \
        return;                                                                \
      }                                                                        \
      self->step = data->prefix_sizes[self->i_p1 - 1];                         \
    }                                                                          \
                                                                               \
    S prefix_size = data->prefix_sizes[self->i_p1 - 1];                        \
    S prefix_idx =                                                             \
        prefix_size - self->step + data->prefix_indexes[self->i_p1 - 1];       \
                                                                               \
    if (data->prefix_raw[prefix_idx] == label) {                               \
      self->step -= 1;                                                         \
    } else {                                                                   \
      self->value = NULL;                                                      \
      self->stopped = true;                                                    \
      return;                                                                  \
    }                                                                          \
                                                                               \
    V *value = (V *)&data->values[self->i_p1 - 1];                             \
    self->value = self->step == 0 && *value > 0 ? value : NULL;                \
  }

#define TrieState_new() {0, 0, NULL, false}

#define TrieState_reset(Self)                                                  \
  ((Self)->i_p1 = 0, (Self)->step = 0, (Self)->value = NULL,                   \
   (Self)->stopped = false)

#ifdef __cplusplus
}
#endif

#endif // !ARRAY_TRIE_H_
