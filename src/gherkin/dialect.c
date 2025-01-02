#include "dialect.h"

static const DialectLabel af_prefix_raw[] = {111,111,114,98,101,101,108,100,66,101,115,105,103,104,101,105,100,32,66,101,104,111,101,102,116,101,114,109,111,235,68,97,110,32,85,105,116,101,101,110,115,101,116,116,105,110,103,70,117,110,107,115,105,101,65,103,116,101,114,103,114,111,110,100,69,110,32,71,101,103,101,119,101,32,77,97,97,114,32,82,101,103,101,108,83,105,116,117,97,115,105,101,86,87,97,110,110,101,101,114,32};
static const DialectSize af_prefix_indexes[] = {54,8,30,64,47,67,74,79,84,92,93,33,25,0,4};
static const DialectSize af_prefix_sizes[] = {10,18,4,3,7,7,5,5,8,1,8,14,5,8,1};
static const DialectSize af_i_p1s[] = {0,0,0,0,0,0,0,0,12,13,0,0,0,15,0};
static const DialectSize af_sizes[] = {0,0,0,0,0,0,0,0,1,2,0,0,0,1,0};
static const DialectValue af_values[] = {2,5,10,1,5,6,3,7,8,0,11,9,5,8,4};
static const DialectSize af_root_size = 11;

static const Dialect af_dialect = {af_prefix_raw, af_prefix_indexes, af_prefix_sizes, af_i_p1s, af_sizes, af_values, af_root_size};

static const DialectLabel am_prefix_raw[] = {1387,32,1391,1377,1404,1400,1410,1409,1406,1377,1409,1412,1384,1344,1377,1407,1391,1400,1410,1385,1397,1400,1410,1398,1381,1408,1357,1409,1381,1398,1377,1408,1378,32,82,117,108,101,1329,1402,1377,32,1330,1377,1397,1409,32,1332,1387,1409,1400,1410,1412,32,1333,1343,1400,1398,1407,1381,1412,1405,1407,1365,1408,1387,1398,1377,1391,1366,1400,1410,1398,1391,1409,1387,1400,1398,1377,1388,1400,1410,1385,1397,1400,1410,1398,1385,1381,32,1406,32};
static const DialectSize am_prefix_indexes[] = {34,38,42,47,54,55,13,26,63,69,87,90,31,0,23};
static const DialectSize am_prefix_sizes[] = {4,4,5,7,1,8,11,6,6,18,3,2,3,13,3};
static const DialectSize am_i_p1s[] = {0,0,0,0,11,0,0,14,15,0,0,0,0,0,0};
static const DialectSize am_sizes[] = {0,0,0,0,3,0,0,1,1,0,0,0,0,0,0};
static const DialectValue am_values[] = {7,10,3,6,0,2,5,8,8,5,11,1,11,9,4};
static const DialectSize am_root_size = 10;

static const Dialect am_dialect = {am_prefix_raw, am_prefix_indexes, am_prefix_sizes, am_i_p1s, am_sizes, am_values, am_root_size};

static const DialectLabel an_prefix_raw[] = {100,97,118,101,122,32,117,97,110,32,82,117,108,101,99,101,100,101,110,116,115,113,117,101,109,97,32,100,101,108,32,99,97,115,111,110,99,101,115,32,65,67,69,108,110,116,114,97,99,116,101,114,105,115,116,105,99,97,105,120,101,109,112,108,111,114,97,32,68,97,80,101,114,111,32,89,32};
static const DialectSize an_prefix_indexes[] = {40,41,68,42,70,10,75,12,18,1,6,0,6,5,58,20,1,63,13,34,46,33,5,38,5,38,20};
static const DialectSize an_prefix_sizes[] = {1,1,2,1,5,4,2,1,2,1,4,2,1,1,7,15,5,5,8,6,12,2,1,2,1,2,1};
static const DialectSize an_i_p1s[] = {8,10,12,14,0,0,0,17,19,21,0,23,25,0,27,0,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize an_sizes[] = {2,2,2,3,0,0,0,2,2,2,0,2,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue an_values[] = {0,0,0,0,3,7,1,0,0,0,11,0,0,1,8,9,10,10,2,10,5,8,6,6,6,6,4};
static const DialectSize an_root_size = 7;

static const Dialect an_dialect = {an_prefix_raw, an_prefix_indexes, an_prefix_sizes, an_i_p1s, an_sizes, an_values, an_root_size};

static const DialectLabel ar_prefix_raw[] = {1576,1601,1585,1590,32,1605,1582,1591,1591,1587,1610,1606,1575,1585,1610,1608,32,1605,1579,1604,1577,1579,1575,1604,1603,1606,32,82,117,108,101,1575,1579,1605,32,1582,1575,1589,1610,1577,1593,1606,1583,1605,1575,32,1584,1575,1611,32,1604,1582,1604,1601,1610,1577,1578,1609,32};
static const DialectSize ar_prefix_indexes[] = {27,12,0,32,35,9,40,23,5,15,46,50,17,4,56,21};
static const DialectSize ar_prefix_sizes[] = {4,1,5,3,5,7,6,4,1,2,4,6,4,5,3,3};
static const DialectSize ar_i_p1s[] = {0,11,0,0,0,14,0,0,15,0,0,0,0,0,0,0};
static const DialectSize ar_sizes[] = {0,3,0,0,0,1,0,0,2,0,0,0,0,0,0,0};
static const DialectValue ar_values[] = {7,0,6,10,5,8,11,3,0,1,10,2,4,9,11,8};
static const DialectSize ar_root_size = 10;

static const Dialect ar_dialect = {ar_prefix_raw, ar_prefix_indexes, ar_prefix_sizes, ar_i_p1s, ar_sizes, ar_values, ar_root_size};

static const DialectLabel ast_prefix_raw[] = {120,101,109,112,108,111,115,32,114,97,117,116,101,114,237,115,116,105,99,97,115,98,111,122,117,32,100,101,108,32,99,97,115,117,97,110,100,111,32,67,68,69,82,117,108,101,89,225,117,32,110,116,243,115,32,65,110,116,101,99,101,100,101,110,116,101,115,32,100,97,32,80,101,114,117,32};
static const DialectSize ast_prefix_indexes[] = {55,39,40,41,71,42,46,9,33,9,47,50,20,0,7,69,8,32,68,65,5,6};
static const DialectSize ast_prefix_sizes[] = {12,1,1,1,5,4,1,1,6,1,3,5,14,6,1,2,12,2,3,3,3,1};
static const DialectSize ast_i_p1s[] = {0,8,10,12,0,0,15,17,0,19,0,0,0,22,0,0,0,0,0,0,0,0};
static const DialectSize ast_sizes[] = {0,2,2,3,0,0,2,2,0,3,0,0,0,1,0,0,0,0,0,0,0,0};
static const DialectValue ast_values[] = {2,0,0,0,3,7,0,0,11,0,6,10,9,8,1,1,5,8,6,6,6,4};
static const DialectSize ast_root_size = 7;

static const Dialect ast_dialect = {ast_prefix_raw, ast_prefix_indexes, ast_prefix_sizes, ast_i_p1s, ast_sizes, ast_values, ast_root_size};

static const DialectLabel az_prefix_raw[] = {79,32,104,97,108,100,97,32,83,115,101,110,97,114,105,84,117,116,97,113,32,107,105,32,86,214,122,601,108,108,105,107,399,103,601,114,32,109,109,97,32,110,99,97,113,32,111,110,116,101,107,115,116,110,105,110,32,115,116,114,117,107,116,117,114,117,101,114,105,108,105,114,32,108,601,114,82,117,108,101,231,109,105,351,252,109,117,110,601,32,118,97,120,116,32,107,105,32,65,72,601,109,32,75,78};
static const DialectSize az_prefix_indexes[] = {98,99,103,104,0,76,8,15,24,25,32,37,41,79,46,84,88,53,66,88,73};
static const DialectSize az_prefix_sizes[] = {1,4,1,1,8,4,7,9,1,7,5,4,5,5,7,5,10,13,7,2,3};
static const DialectSize az_i_p1s[] = {12,0,14,16,0,0,18,0,19,0,0,0,0,0,0,21,0,0,0,0,0};
static const DialectSize az_sizes[] = {2,0,2,2,0,0,1,0,2,0,0,0,0,0,0,1,0,0,0,0,0};
static const DialectValue az_values[] = {0,1,0,0,10,7,8,6,0,5,11,3,3,2,2,8,11,9,6,1,4};
static const DialectSize az_root_size = 11;

static const Dialect az_dialect = {az_prefix_raw, az_prefix_indexes, az_prefix_sizes, az_i_p1s, az_sizes, az_values, az_root_size};

static const DialectLabel be_prefix_raw[] = {1044,1053,1103,1093,1072,1081,32,1055,1088,1057,1094,1101,1085,1072,1088,1099,1081,1059,1079,1086,1088,32,1089,1094,1101,1085,1072,1088,1072,1060,1064,1072,1073,1083,1086,1085,32,1089,1094,1101,1085,1072,1088,1099,1103,1083,1110,32,1085,1090,1101,1082,1089,1090,1082,1089,1072,1084,1072,32,1091,1085,1082,1094,1099,1103,1085,1072,1083,1100,1085,1072,1089,1094,1100,1110,1095,1072,1050,1072,1076,1079,1077,1085,1072,32,1058,1072,1074,1110,1083,1099,1082,1083,1072,1076,1099,32,67,1094,1101,1085,1072,1088,73,32,1030,1085,1072,1082,1096,32,1040,1083,1077,32};
static const DialectSize be_prefix_indexes[] = {98,104,106,112,0,78,1,7,9,86,17,29,30,79,96,45,48,87,91,95,54,60,75};
static const DialectSize be_prefix_sizes[] = {6,2,6,4,1,2,6,2,8,2,12,1,15,7,2,3,6,5,6,3,6,15,3};
static const DialectSize be_i_p1s[] = {0,0,0,0,14,16,0,18,0,20,0,22,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize be_sizes[] = {0,0,0,0,2,2,0,2,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue be_values[] = {8,1,3,3,0,0,6,0,8,0,9,0,9,6,1,11,2,7,4,10,1,5,5};
static const DialectSize be_root_size = 13;

static const Dialect be_dialect = {be_prefix_raw, be_prefix_indexes, be_prefix_sizes, be_i_p1s, be_sizes, be_values, be_root_size};

static const DialectLabel bg_prefix_raw[] = {1060,1091,1085,1082,1094,1080,1086,1085,1072,1083,1085,1086,1089,1090,1072,1074,1080,1083,1086,1077,1076,1080,1089,1090,1086,1088,1080,1103,1080,1084,1077,1088,1044,1072,1076,1077,1085,1086,32,1048,32,1050,1086,1075,1072,1090,1086,32,1053,1086,32,1055,1088,1056,1072,1084,1082,1072,32,1085,1072,32,1089,1094,1077,1085,1072,1088,1080,1081,1057,1094,1077,1085,1072,1088,1080,1081,1058,1086,32};
static const DialectSize bg_prefix_indexes[] = {32,39,41,48,51,53,70,78,0,14,19,28,5};
static const DialectSize bg_prefix_sizes[] = {7,2,7,3,2,17,8,3,14,5,9,4,1};
static const DialectSize bg_i_p1s[] = {0,0,0,0,10,0,0,0,0,0,0,13,0};
static const DialectSize bg_sizes[] = {0,0,0,0,3,0,0,0,0,0,0,1,0};
static const DialectValue bg_values[] = {6,1,11,3,0,9,8,10,5,7,2,8,4};
static const DialectSize bg_root_size = 9;

static const Dialect bg_dialect = {bg_prefix_raw, bg_prefix_indexes, bg_prefix_sizes, bg_i_p1s, bg_sizes, bg_values, bg_root_size};

static const DialectLabel bm_prefix_raw[] = {83,65,112,97,98,105,108,97,32,66,97,103,105,32,67,111,110,116,111,104,68,76,97,116,97,114,32,66,101,108,97,107,97,110,103,77,97,107,97,32,84,114,97,110,103,107,97,32,105,116,117,97,115,105,71,97,114,105,115,32,80,97,110,100,117,97,110,32,83,101,110,97,114,105,111,109,117,100,105,97,110,32,75,101,97,100,97,97,110,70,117,110,103,115,105,98,101,114,105,32,82,117,108,101,116,97,112,105,32};
static const DialectSize bm_prefix_indexes[] = {1,9,14,20,89,54,82,21,35,100,0,40,65,94,84,75,41,69,48,105,103,82,0,69,48};
static const DialectSize bm_prefix_sizes[] = {8,5,6,1,6,21,2,14,5,4,1,1,3,6,5,7,7,6,6,4,6,7,1,6,6};
static const DialectSize bm_i_p1s[] = {0,0,0,13,0,0,15,0,0,0,18,20,0,0,0,0,22,0,0,0,0,0,24,0,0};
static const DialectSize bm_sizes[] = {0,0,0,2,0,0,3,0,0,0,2,2,0,0,0,0,2,0,0,0,0,0,2,0,0};
static const DialectValue bm_values[] = {11,6,4,0,5,9,0,2,10,7,0,0,1,6,8,10,0,8,8,3,3,9,0,9,9};
static const DialectSize bm_root_size = 12;

static const Dialect bm_dialect = {bm_prefix_raw, bm_prefix_indexes, bm_prefix_sizes, bm_i_p1s, bm_sizes, bm_values, bm_root_size};

static const DialectLabel bs_prefix_raw[] = {83,99,101,110,97,114,105,109,106,101,114,97,107,116,101,114,105,115,116,105,107,97,65,73,32,75,97,80,82,117,108,101,90,97,116,105,109,32,108,105,32,100,97,32,106,117,105,45,111,98,114,105,115,45,111,117,116,108,105,110,101,68,97,116,111,32,111,122,97,100,105,110,97};
static const DialectSize bs_prefix_indexes[] = {22,61,23,25,27,28,0,32,24,38,41,10,66,5,44,48,6,47,53};
static const DialectSize bs_prefix_sizes[] = {1,5,2,2,1,4,7,6,1,3,3,12,7,6,2,1,1,6,8};
static const DialectSize bs_i_p1s[] = {9,0,0,11,13,0,15,0,0,0,0,0,0,17,18,19,0,0,0};
static const DialectSize bs_sizes[] = {2,0,0,2,2,0,2,0,0,0,0,0,0,1,1,1,0,0,0};
static const DialectValue bs_values[] = {0,6,1,0,0,7,0,10,1,3,11,5,2,8,8,8,4,9,9};
static const DialectSize bs_root_size = 8;

static const Dialect bs_dialect = {bs_prefix_raw, bs_prefix_indexes, bs_prefix_sizes, bs_i_p1s, bs_sizes, bs_values, bs_root_size};

static const DialectLabel ca_prefix_raw[] = {73,32,80,101,114,242,32,81,117,97,110,32,82,108,32,114,97,99,116,101,114,237,115,116,105,99,97,100,97,32,232,115,32,113,117,101,109,97,32,100,101,32,108,39,101,115,99,101,110,97,114,105,120,101,109,112,108,101,115,104,111,114,101,115,32,110,116,101,99,101,100,101,110,116,115,101,114,101,102,111,110,115,117,108,101,115,97,32,70,117,110,99,105,111,110,97,108,105,116,97,116,32,65,67,97,68,111,110,97,69};
static const DialectSize ca_prefix_indexes[] = {102,103,105,109,88,0,2,7,12,56,65,18,13,15,27,100,22,52,75,82,84,30,46,33,22};
static const DialectSize ca_prefix_sizes[] = {1,2,4,1,13,2,5,5,1,9,10,1,2,12,3,2,1,6,7,3,4,3,6,19,1};
static const DialectSize ca_i_p1s[] = {10,13,15,17,0,0,0,0,19,0,0,21,0,0,0,0,23,25,0,0,0,0,0,0,0};
static const DialectSize ca_sizes[] = {3,2,2,2,0,0,0,0,2,0,0,2,0,0,0,0,2,1,0,0,0,0,0,0,0};
static const DialectValue ca_values[] = {0,0,0,0,5,1,3,11,0,10,2,0,10,5,6,6,0,8,2,7,6,6,8,9,4};
static const DialectSize ca_root_size = 9;

static const Dialect ca_dialect = {ca_prefix_raw, ca_prefix_indexes, ca_prefix_sizes, ca_i_p1s, ca_sizes, ca_values, ca_root_size};

static const DialectLabel cs_prefix_raw[] = {114,97,118,105,100,108,111,110,116,101,120,116,97,107,233,32,382,97,100,97,118,101,107,117,100,32,83,99,233,110,225,345,237,107,108,97,100,121,382,32,65,75,78,225,269,114,116,32,83,99,233,110,225,345,101,79,115,110,111,118,97,32,115,99,233,110,225,345,101,80,108,101,32,97,107,32,122,97,100,237,121,90,97,32,112,345,101,100,112,111,107,108,97,100,117,32};
static const DialectSize cs_prefix_indexes[] = {40,41,42,55,69,26,81,15,70,36,6,73,6,0,31,11,22,76,16,37};
static const DialectSize cs_prefix_sizes[] = {1,1,13,14,1,6,15,1,3,4,6,3,1,7,6,5,4,4,7,1};
static const DialectSize cs_i_p1s[] = {8,10,0,0,12,0,0,16,0,0,0,0,17,0,20,0,0,0,0,0};
static const DialectSize cs_sizes[] = {2,2,0,0,4,0,0,1,0,0,0,0,3,0,1,0,0,0,0,0};
static const DialectValue cs_values[] = {0,0,9,9,0,8,6,1,3,11,2,10,0,7,8,1,6,2,5,4};
static const DialectSize cs_root_size = 7;

static const Dialect cs_dialect = {cs_prefix_raw, cs_prefix_indexes, cs_prefix_sizes, cs_i_p1s, cs_sizes, cs_values, cs_root_size};

static const DialectLabel cy_GB_prefix_raw[] = {110,114,104,101,103,101,100,105,103,32,97,32,97,105,102,102,116,67,101,102,110,100,105,114,119,101,100,100,79,110,100,32,80,114,121,100,32,65,109,108,105,110,101,108,108,111,108,82,117,108,101,105,102,102,116,105,97,117,65,69,110,103,104,114,83,99,101,110,97,114,105,111,89,110,97,32};
static const DialectSize cy_GB_prefix_indexes[] = {37,17,59,28,32,47,64,72,9,0,23,12,50,36};
static const DialectSize cy_GB_prefix_sizes[] = {1,7,5,4,5,4,8,4,1,12,5,5,8,11};
static const DialectSize cy_GB_i_p1s[] = {9,0,12,0,0,0,14,0,0,0,0,0,0,0};
static const DialectSize cy_GB_sizes[] = {3,0,2,0,0,0,1,0,0,0,0,0,0,0};
static const DialectValue cy_GB_values[] = {0,2,0,3,11,7,8,10,1,6,5,8,4,9};
static const DialectSize cy_GB_root_size = 8;

static const Dialect cy_GB_dialect = {cy_GB_prefix_raw, cy_GB_prefix_indexes, cy_GB_prefix_sizes, cy_GB_i_p1s, cy_GB_sizes, cy_GB_values, cy_GB_root_size};

static const DialectLabel da_prefix_raw[] = {99,101,110,97,114,105,101,229,32,82,101,103,101,108,101,114,65,98,115,116,114,97,107,116,32,83,99,101,110,97,114,105,111,66,97,103,103,114,117,110,100,69,71,105,118,101,116,32,77,101,110,32,78,229,114,32,79,103,32,83,103,101,110,115,107,97,98,107,115,101,109,112};
static const DialectSize da_prefix_indexes[] = {16,33,41,42,48,52,56,9,25,60,67,0,7,12,13};
static const DialectSize da_prefix_sizes[] = {17,8,1,6,4,4,3,5,1,7,5,7,2,2,3};
static const DialectSize da_i_p1s[] = {0,0,10,0,0,0,0,0,12,0,14,0,0,0,0};
static const DialectSize da_sizes[] = {0,0,2,0,0,0,0,0,2,0,2,0,0,0,0};
static const DialectValue da_values[] = {9,2,0,6,3,11,1,7,0,5,0,8,10,8,4};
static const DialectSize da_root_size = 9;

static const Dialect da_dialect = {da_prefix_raw, da_prefix_indexes, da_prefix_sizes, da_i_p1s, da_sizes, da_values, da_root_size};

static const DialectLabel de_prefix_raw[] = {70,117,110,107,116,105,111,110,71,82,83,122,101,110,97,114,105,85,110,100,32,87,101,110,110,32,98,101,114,32,97,108,105,116,228,116,111,72,105,110,116,101,114,103,114,117,110,100,114,105,115,115,97,117,115,115,101,116,122,117,110,103,101,110,111,109,109,101,110,32,98,101,100,105,110,103,117,110,103,101,110,68,97,110,110,32,117,108,101,103,101,108,86,111,114,117,110,100,108,97,103,101,103,101,98,101,110,32,115,101,105,65,66,101,105,115,112,105,101,108};
static const DialectSize de_prefix_indexes[] = {111,112,81,0,8,37,9,10,17,92,21,26,60,12,30,101,94,88,86,12,6,52,70,20,67,43};
static const DialectSize de_prefix_sizes[] = {1,8,5,8,1,11,1,7,4,3,5,4,10,1,6,10,8,4,3,2,1,12,11,1,3,9};
static const DialectSize de_i_p1s[] = {12,14,0,15,16,0,18,20,0,22,0,0,0,0,0,24,0,0,0,0,26,0,0,0,0,0};
static const DialectSize de_sizes[] = {2,1,0,1,2,0,2,2,0,2,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0};
static const DialectValue de_values[] = {0,8,10,5,0,2,0,0,1,0,11,3,6,4,5,0,2,7,7,9,8,2,2,6,6,9};
static const DialectSize de_root_size = 11;

static const Dialect de_dialect = {de_prefix_raw, de_prefix_indexes, de_prefix_sizes, de_i_p1s, de_sizes, de_values, de_root_size};

static const DialectLabel el_prefix_raw[] = {940,948,949,953,947,956,945,948,949,943,947,956,945,964,945,943,947,961,945,956,956,945,32,931,949,957,945,961,943,959,965,957,945,964,972,964,951,964,945,82,117,108,101,908,964,945,957,32,913,955,955,940,32,916,922,945,953,32,928,932,972,964,949,32,949,948,959,956,941,957,959,965,32,949,961,923,949,953,964,959,965,961,947,943,945,961,931,949,957,940,961,953,947,961,945,966,942,32,931,949,957,945,961,943,959,965,933,960,972,946,945,952,961,959};
static const DialectSize el_prefix_indexes[] = {39,43,48,53,54,75,58,86,59,106,64,30,26,73,6,29,0,6,15,91};
static const DialectSize el_prefix_sizes[] = {4,5,5,1,4,10,1,6,5,8,9,9,2,2,1,1,7,9,16,15};
static const DialectSize el_i_p1s[] = {0,0,0,11,0,0,13,15,0,0,0,0,17,19,0,0,0,0,0,0};
static const DialectSize el_sizes[] = {0,0,0,2,0,0,2,2,0,0,0,0,2,2,0,0,0,0,0,0};
static const DialectValue el_values[] = {7,11,3,0,1,5,0,0,10,2,6,5,0,0,4,8,8,4,9,9};
static const DialectSize el_root_size = 10;

static const Dialect el_dialect = {el_prefix_raw, el_prefix_indexes, el_prefix_sizes, el_i_p1s, el_sizes, el_values, el_root_size};

static const DialectLabel em_prefix_raw[] = {128528,128532,128591,129362,82,117,108,101,127916,128164,128211,128213,128214,128218,128514};
static const DialectSize em_prefix_indexes[] = {4,8,9,10,11,12,13,14,0,1,2,3};
static const DialectSize em_prefix_sizes[] = {4,1,1,1,1,1,1,1,1,1,1,1};
static const DialectSize em_i_p1s[] = {0,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize em_sizes[] = {0,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue em_values[] = {7,11,2,4,8,9,5,1,6,3,10,8};
static const DialectSize em_root_size = 12;

static const Dialect em_dialect = {em_prefix_raw, em_prefix_indexes, em_prefix_sizes, em_i_p1s, em_sizes, em_values, em_root_size};

static const DialectLabel en_prefix_raw[] = {65,66,69,120,97,109,112,108,101,70,101,97,116,117,114,101,82,117,108,101,83,99,101,110,97,114,105,111,84,104,101,110,32,87,104,101,110,32,98,105,108,105,116,121,117,116,32,79,117,116,108,105,110,101,84,101,109,112,108,97,116,101,97,99,107,103,114,111,117,110,100,32,71,105,118,101,110,32,115,105,110,101,115,115,32,78,101,101,100};
static const DialectSize en_prefix_indexes[] = {0,1,2,9,72,16,20,28,33,38,69,62,13,78,32,78,78,45,47,54};
static const DialectSize en_prefix_sizes[] = {1,1,7,7,6,4,8,5,5,6,3,9,1,1,1,1,11,2,7,8};
static const DialectSize en_i_p1s[] = {10,12,14,0,0,0,15,0,0,0,0,0,17,0,19,0,0,0,0,0};
static const DialectSize en_sizes[] = {2,2,1,0,0,0,2,0,0,0,0,0,2,0,2,0,0,0,0,0};
static const DialectValue en_values[] = {0,0,8,5,6,7,8,10,11,5,1,2,0,4,0,4,5,3,9,9};
static const DialectSize en_root_size = 9;

static const Dialect en_dialect = {en_prefix_raw, en_prefix_indexes, en_prefix_sizes, en_i_p1s, en_sizes, en_values, en_root_size};

static const DialectLabel en_Scouse_prefix_raw[] = {108,105,107,101,32,119,104,101,110,32,121,111,117,115,101,32,103,111,116,32,71,105,118,117,110,32,84,104,101,32,116,104,105,110,103,32,111,102,32,105,116,32,105,115,32,105,115,32,119,104,97,116,32,119,101,110,116,32,100,111,119,110,70,101,97,116,117,114,101,110,32,121,111,117,115,101,32,103,111,116,116,97,32,65,110,32,66,117,104,32,68,69,120,97,109,112,108,101,115,82,117,108,101,87,89,111,117,115,101,32,107,110,111,119,32,104,97,114,114,105,109,101,97,110,32,105,115};
static const DialectSize en_Scouse_prefix_indexes[] = {83,86,90,91,62,20,99,26,103,104,68,42,23,115,23,0,5};
static const DialectSize en_Scouse_prefix_sizes[] = {3,4,1,8,7,6,4,18,1,11,15,20,3,12,3,10,15};
static const DialectSize en_Scouse_i_p1s[] = {0,0,11,0,0,0,0,0,14,16,0,0,0,0,0,0,0};
static const DialectSize en_Scouse_sizes[] = {0,0,3,0,0,0,0,0,2,2,0,0,0,0,0,0,0};
static const DialectValue en_Scouse_values[] = {1,3,0,4,5,6,7,8,0,0,10,2,10,9,11,11,6};
static const DialectSize en_Scouse_root_size = 10;

static const Dialect en_Scouse_dialect = {en_Scouse_prefix_raw, en_Scouse_prefix_indexes, en_Scouse_prefix_sizes, en_Scouse_i_p1s, en_Scouse_sizes, en_Scouse_values, en_Scouse_root_size};

static const DialectLabel en_au_prefix_raw[] = {117,108,101,39,107,110,111,119,32,111,117,39,108,108,32,119,97,110,110,97,66,117,116,32,97,116,32,116,104,101,32,101,110,100,32,111,102,32,116,104,101,32,100,97,121,32,73,32,114,101,99,107,111,110,32,105,116,39,115,32,108,105,107,101,65,119,119,119,44,32,108,111,111,107,32,109,97,116,101,97,104,32,110,97,104,32,70,105,114,115,116,32,111,102,102,73,116,39,115,32,106,117,115,116,32,117,110,98,101,108,105,101,118,97,98,108,101,32,80,114,101,116,116,121,32,109,117,99,104,82,84,111,111,32,114,105,103,104,116,32,89};
static const DialectSize en_au_prefix_indexes[] = {64,20,86,95,118,129,130,140,49,0,3,78,9};
static const DialectSize en_au_prefix_sizes[] = {15,35,9,23,11,1,10,1,15,3,6,8,11};
static const DialectSize en_au_i_p1s[] = {0,0,0,0,0,9,0,11,0,0,0,0,0};
static const DialectSize en_au_sizes[] = {0,0,0,0,0,2,0,3,0,0,0,0,0};
static const DialectValue en_au_values[] = {8,10,2,11,5,0,1,0,9,7,6,3,4};
static const DialectSize en_au_root_size = 8;

static const Dialect en_au_dialect = {en_au_prefix_raw, en_au_prefix_indexes, en_au_prefix_sizes, en_au_i_p1s, en_au_sizes, en_au_values, en_au_root_size};

static const DialectLabel en_lol_prefix_raw[] = {82,117,108,101,87,69,78,32,52,85,84,32,65,78,32,83,82,83,76,89,79,72,32,72,65,73,32,67,65,78,32,72,65,90,32,66,68,69,78,32,69,88,65,77,80,76,90,77,73,83,72,85,78};
static const DialectSize en_lol_prefix_indexes[] = {12,35,36,40,25,47,20,0,4,8,9,14};
static const DialectSize en_lol_prefix_sizes[] = {3,1,4,7,10,6,6,4,4,1,3,6};
static const DialectSize en_lol_i_p1s[] = {0,10,0,0,0,12,0,0,0,0,0,0};
static const DialectSize en_lol_sizes[] = {0,2,0,0,0,1,0,0,0,0,0,0};
static const DialectValue en_lol_values[] = {1,0,10,4,6,8,5,7,11,2,3,9};
static const DialectSize en_lol_root_size = 9;

static const Dialect en_lol_dialect = {en_lol_prefix_raw, en_lol_prefix_indexes, en_lol_prefix_sizes, en_lol_i_p1s, en_lol_sizes, en_lol_values, en_lol_root_size};

static const DialectLabel en_old_prefix_raw[] = {198,114,208,222,230,116,117,114,104,32,240,101,32,254,101,32,55,32,79,110,100,32,82,117,108,101,114,99,32,104,119,97,101,116,104,101,32,230,114,32,115,119,97,101,114,32,115,119,97,32,65,66,230,254,115,101,97,108,102,67,105,114,105,99,230,119,72,119,83,84,104};
static const DialectSize en_old_prefix_indexes[] = {16,50,51,59,66,18,22,68,69,0,2,3,27,25,9,48,11,9,48,11,31,4,11,30,48,6,48,6,48,6,33,10,13,28,33,10,13,42,37};
static const DialectSize en_old_prefix_sizes[] = {2,1,8,7,2,4,4,1,2,2,1,1,2,2,1,2,2,1,2,2,3,2,2,2,2,4,2,4,2,4,3,2,2,3,4,3,3,7,6};
static const DialectSize en_old_i_p1s[] = {0,13,15,18,21,0,0,23,25,0,27,29,0,0,0,0,0,0,0,0,0,0,31,34,35,0,36,0,37,0,0,0,0,38,0,0,0,0,0};
static const DialectSize en_old_sizes[] = {0,2,3,3,2,0,0,2,2,0,2,2,0,0,0,0,0,0,0,0,0,0,3,1,1,0,1,0,1,0,0,0,0,2,0,0,0,0,0};
static const DialectValue en_old_values[] = {1,0,0,0,0,1,7,0,0,2,0,0,3,2,11,11,11,11,11,11,5,5,0,8,10,6,10,6,10,6,4,4,4,0,10,10,10,9,9};
static const DialectSize en_old_root_size = 12;

static const Dialect en_old_dialect = {en_old_prefix_raw, en_old_prefix_indexes, en_old_prefix_sizes, en_old_i_p1s, en_old_sizes, en_old_values, en_old_root_size};

static const DialectLabel en_pirate_prefix_raw[] = {82,117,108,101,83,104,105,118,101,114,32,109,101,32,116,105,109,98,101,114,115,118,97,115,116,33,32,121,101,32,89,111,45,104,111,45,104,111,121,32,109,97,116,101,121,33,65,66,108,105,109,101,121,33,32,68,101,97,100,32,109,101,110,32,116,101,108,108,32,110,111,32,116,97,108,101,115,71,97,110,103,119,97,121,33,32,72,101,97,118,101,32,116,111,76,101,116,32,103,111,32,97,110,100,32,104,97,117,108,32};
static const DialectSize en_pirate_prefix_indexes[] = {46,47,55,77,86,94,0,4,30,36,21,27};
static const DialectSize en_pirate_prefix_sizes[] = {1,8,22,9,8,16,4,17,8,10,6,3};
static const DialectSize en_pirate_i_p1s[] = {10,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize en_pirate_sizes[] = {3,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue en_pirate_values[] = {0,11,4,6,8,10,7,9,2,5,3,1};
static const DialectSize en_pirate_root_size = 9;

static const Dialect en_pirate_dialect = {en_pirate_prefix_raw, en_pirate_prefix_indexes, en_pirate_prefix_sizes, en_pirate_i_p1s, en_pirate_sizes, en_pirate_values, en_pirate_root_size};

static const DialectLabel en_tx_prefix_raw[] = {87,101,108,108,32,110,111,119,32,104,111,108,100,32,111,110,44,32,73,39,108,108,32,121,111,117,32,119,104,97,116,32,97,110,100,32,110,111,32,99,97,116,116,108,101,83,101,114,105,111,117,115,32,97,115,32,97,32,115,110,97,107,101,32,98,105,116,101,114,101,8217,115,32,110,111,32,116,114,101,101,32,98,117,116,32,98,101,97,114,115,32,115,111,109,101,32,102,114,117,105,116,32,111,117,116,32,65,108,108,32,66,117,115,121,32,97,115,32,97,32,104,111,117,110,100,32,105,110,32,102,108,101,97,32,115,101,97,115,111,110,67,111,109,101,32,104,101,108,108,32,111,114,32,104,105,103,104,32,119,97,116,101,114,32,70,105,120,105,110,39,32,116,111,32,76,101,109,109,101,32,116,101,108,108,32,121,39,97,108,108,32,97,32,115,116,111,114,121,78,111,119,32,116,104,97,116,39,115,32,97,32,115,116,111,114,121,32,108,111,110,103,101,114,32,116,104,97,110,32,97,32,99,97,116,116,108,101,32,100,114,105,118,101,32,105,110,32,74,117,108,121,81,117,105,99,107,32,111,117,116,32,111,102,32,116,104,101,32,99,104,117,116,101,32,82,117,108,101,32,84,104,103,105,115,32,97,105,110,8217,116,32,109,121,32,102,105,114,115,116,32,114,111,100,101,111,117,115,115,105,101,100,32,117,112};
static const DialectSize en_tx_prefix_indexes[] = {106,110,140,164,174,198,251,18,45,23,0,155,28,67,26,99,49};
static const DialectSize en_tx_prefix_sizes[] = {4,30,24,10,24,53,23,5,23,2,32,1,17,35,23,7,9};
static const DialectSize en_tx_i_p1s[] = {12,0,0,0,0,0,0,0,0,14,0,16,0,0,0,0,0};
static const DialectSize en_tx_sizes[] = {2,0,0,0,0,0,0,0,0,2,0,2,0,0,0,0,0};
static const DialectValue en_tx_values[] = {0,9,1,6,2,4,11,7,9,0,3,0,8,10,5,6,5};
static const DialectSize en_tx_root_size = 11;

static const Dialect en_tx_dialect = {en_tx_prefix_raw, en_tx_prefix_indexes, en_tx_prefix_sizes, en_tx_i_p1s, en_tx_sizes, en_tx_values, en_tx_root_size};

static const DialectLabel eo_prefix_raw[] = {106,32,69,107,122,101,109,112,108,111,70,111,110,111,75,82,101,103,117,108,111,83,84,114,97,106,116,111,97,101,109,101,110,99,101,32,100,32,110,116,117,114,111,32,100,101,32,108,97,32,115,99,101,110,97,114,111,45,115,107,105,122,111,68,111,110,105,116,97,309,111,32};
static const DialectSize eo_prefix_indexes[] = {63,2,10,14,15,21,22,1,65,0,24,9,51,5,59,0,61,30,38,1,36,57};
static const DialectSize eo_prefix_sizes[] = {2,8,4,1,6,1,6,1,7,1,1,1,6,1,4,2,2,6,19,1,2,6};
static const DialectSize eo_i_p1s[] = {8,10,0,11,0,13,0,0,0,0,16,18,0,20,0,0,22,0,0,0,0,0};
static const DialectSize eo_sizes[] = {2,1,0,2,0,3,0,0,0,0,2,2,0,2,0,0,1,0,0,0,0,0};
static const DialectValue eo_values[] = {0,8,2,0,7,0,5,10,6,4,0,0,8,0,9,1,8,6,9,11,3,9};
static const DialectSize eo_root_size = 7;

static const Dialect eo_dialect = {eo_prefix_raw, eo_prefix_indexes, eo_prefix_sizes, eo_i_p1s, eo_sizes, eo_values, eo_root_size};

static const DialectLabel es_prefix_raw[] = {110,116,111,110,99,101,115,32,100,101,32,110,101,103,111,99,105,111,65,110,116,101,99,101,100,101,110,116,101,115,67,68,97,100,69,82,101,106,101,109,112,108,111,113,117,105,115,105,116,111,113,117,101,109,97,32,100,101,108,32,101,115,99,101,110,97,114,105,111,78,101,99,101,115,105,100,97,100,32,100,101,108,32,110,101,103,111,99,105,111,80,101,114,111,32,89,32,117,97,110,100,111,32,103,108,97,114,97,99,116,101,114,237,115,116,105,99,97};
static const DialectSize es_prefix_indexes[] = {18,30,31,34,69,90,35,95,105,97,32,2,7,37,0,6,103,43,7,6,7,6,6,62,50,7};
static const DialectSize es_prefix_sizes[] = {12,1,3,1,21,5,2,2,13,6,1,1,1,6,8,1,3,7,1,2,1,2,1,7,19,11};
static const DialectSize es_i_p1s[] = {0,9,11,13,0,0,17,0,0,0,19,21,0,23,0,24,26,0,0,0,0,0,0,0,0,0};
static const DialectSize es_sizes[] = {0,2,2,4,0,0,2,0,0,0,2,2,0,1,0,2,1,0,0,0,0,0,0,0,0,0};
static const DialectValue es_values[] = {2,0,0,0,5,3,0,1,5,11,0,0,1,8,10,0,7,5,6,6,6,6,4,8,9,7};
static const DialectSize es_root_size = 8;

static const Dialect es_dialect = {es_prefix_raw, es_prefix_indexes, es_prefix_sizes, es_i_p1s, es_sizes, es_values, es_root_size};

static const DialectLabel et_prefix_raw[] = {84,97,117,115,116,115,101,110,97,97,114,105,117,109,69,101,108,100,97,100,101,115,32,75,117,105,105,115,32,105,100,32,74,79,109,97,100,117,115,82,83,97,32,97,97,109,101,101,103,101,108,106,117,104,116,117,109};
static const DialectSize et_prefix_indexes[] = {14,32,23,33,39,40,0,41,52,22,30,43,46,25,4,29,51,3};
static const DialectSize et_prefix_sizes[] = {9,1,3,6,1,1,5,2,5,1,2,3,5,4,10,2,6,11};
static const DialectSize et_i_p1s[] = {0,8,10,0,12,14,0,0,16,0,0,17,0,0,0,0,0,0};
static const DialectSize et_sizes[] = {0,2,2,0,2,2,0,0,1,0,0,2,0,0,0,0,0,0};
static const DialectValue et_values[] = {6,0,0,5,0,0,2,1,8,11,3,0,7,10,8,4,9,9};
static const DialectSize et_root_size = 7;

static const Dialect et_dialect = {et_prefix_raw, et_prefix_indexes, et_prefix_sizes, et_i_p1s, et_sizes, et_values, et_root_size};

static const DialectLabel fa_prefix_raw[] = {82,117,108,101,1576,1575,32,1601,1585,1590,32,1605,1575,32,1616,1740,1688,1711,1740,1570,1606,1711,1575,1607,32,1586,1605,1740,1606,1607,1606,1711,1575,1605,1740,32,1606,1605,1608,1606,1607,32,1607,1575,1605,1579,1575,1604,1711,1608,1740,32,1587,1606,1575,1585,1740,1608};
static const DialectSize fa_prefix_indexes[] = {0,19,5,4,25,52,44,36,29,38,47,11,6,14};
static const DialectSize fa_prefix_sizes[] = {4,6,1,7,5,6,4,8,7,1,11,3,1,5};
static const DialectSize fa_i_p1s[] = {0,0,11,0,0,0,0,0,0,13,0,0,0,0};
static const DialectSize fa_sizes[] = {0,0,2,0,0,0,0,0,0,2,0,0,0,0};
static const DialectValue fa_values[] = {7,10,0,6,2,8,8,4,11,0,9,3,1,5};
static const DialectSize fa_root_size = 10;

static const Dialect fa_dialect = {fa_prefix_raw, fa_prefix_indexes, fa_prefix_sizes, fa_i_p1s, fa_sizes, fa_values, fa_root_size};

static const DialectLabel fi_prefix_raw[] = {107,115,101,116,115,82,117,108,101,116,101,116,97,97,110,32,109,105,110,97,105,115,117,117,115,116,97,84,97,105,104,105,111,74,97,32,75,117,110,32,77,117,116,116,97,32,78,105,105,110,32,79,112,97,117};
static const DialectSize fi_prefix_indexes[] = {33,36,40,46,51,5,27,7,16,52,23,0,1,28};
static const DialectSize fi_prefix_sizes[] = {3,4,6,5,1,4,2,9,9,3,4,4,1,5};
static const DialectSize fi_i_p1s[] = {0,0,0,0,8,0,10,0,0,12,0,0,14,0};
static const DialectSize fi_sizes[] = {0,0,0,0,2,0,2,0,0,2,0,0,1,0};
static const DialectValue fi_values[] = {1,11,3,10,0,7,0,6,5,0,2,4,8,9};
static const DialectSize fi_root_size = 7;

static const Dialect fi_dialect = {fi_prefix_raw, fi_prefix_indexes, fi_prefix_sizes, fi_i_p1s, fi_sizes, fi_values, fi_root_size};

static const DialectLabel fr_prefix_raw[] = {116,201,116,97,110,116,32,100,111,110,110,233,65,108,111,114,115,32,76,111,114,115,113,117,67,111,110,116,101,120,116,101,68,111,110,99,32,80,108,97,110,32,100,117,32,81,117,97,110,100,32,82,232,103,108,101,83,99,233,110,97,114,105,111,120,101,109,112,108,101,32,97,99,104,97,110,116,32,115,99,233,110,97,114,105,111,105,116,32,77,97,105,115,32,39,69,70,111,110,99,116,105,111,110,110,97,108,105,116,233};
static const DialectSize fr_prefix_indexes[] = {12,24,32,95,96,18,89,37,45,51,56,1,0,64,94,69,22,56,78,71,57,85,6,28,16,6,3,16,94,69,22,22,6,16,22,6,28,16,94,69,94,69,94,69,22,6,16,94,69};
static const DialectSize fr_prefix_sizes[] = {6,8,5,1,14,6,5,8,6,5,1,11,1,6,1,2,2,8,8,7,7,4,1,1,2,1,9,1,1,2,2,2,1,2,2,1,1,2,1,2,1,2,1,2,2,1,2,1,2};
static const DialectSize fr_i_p1s[] = {0,0,0,13,0,15,17,18,0,0,20,23,26,28,0,0,29,0,0,31,0,0,32,33,0,35,36,0,0,0,39,41,0,0,43,45,46,0,0,0,0,0,0,0,48,0,0,0,0};
static const DialectSize fr_sizes[] = {0,0,0,2,0,2,1,2,0,0,3,3,2,1,0,0,2,0,0,1,0,0,1,2,0,1,3,0,0,0,2,2,0,0,2,1,2,0,0,0,0,0,0,0,2,0,0,0,0};
static const DialectValue fr_values[] = {10,2,10,0,5,0,3,0,11,7,0,0,0,8,11,11,0,9,9,6,8,6,6,0,6,1,0,4,3,3,0,0,6,6,0,6,0,6,6,6,6,6,1,1,0,6,6,6,6};
static const DialectSize fr_root_size = 12;

static const Dialect fr_dialect = {fr_prefix_raw, fr_prefix_indexes, fr_prefix_sizes, fr_i_p1s, fr_sizes, fr_values, fr_root_size};

static const DialectLabel ga_prefix_raw[] = {65,67,71,110,233,82,105,97,105,108,117,105,114,32,105,32,103,99,225,115,32,225,115,250,108,114,97,237,111,32,117,114,32,225,114,32,98,97,32,78,117,97,105,114,32,65,99,104,111,109,97,105,114,83,97,109,112,108,97,99,104,32,103,117,115,32,110,115,105,110,32};
static const DialectSize ga_prefix_indexes[] = {0,1,2,39,5,53,59,62,66,10,18,23,37,36,3,27,16,3,44,58,33,28,30,58,33};
static const DialectSize ga_prefix_sizes[] = {1,1,3,6,5,6,3,4,5,11,2,4,2,3,1,1,1,1,9,4,3,2,3,4,3};
static const DialectSize ga_i_p1s[] = {7,10,0,13,0,16,0,0,0,17,19,0,0,0,20,0,22,24,0,0,0,0,0,0,0};
static const DialectSize ga_sizes[] = {3,3,0,3,0,1,0,0,0,2,1,0,0,0,2,0,2,2,0,0,0,0,0,0,0};
static const DialectValue ga_values[] = {0,0,5,0,7,8,3,1,10,0,8,2,11,11,0,4,0,0,9,11,11,6,6,6,6};
static const DialectSize ga_root_size = 6;

static const Dialect ga_dialect = {ga_prefix_raw, ga_prefix_indexes, ga_prefix_sizes, ga_i_p1s, ga_sizes, ga_values, ga_root_size};

static const DialectLabel gj_prefix_raw[] = {2722,2750,2690,2714,2763,2693,2728,2759,32,2694,2730,2759,2738,32,2715,2759,32,2709,2765,2728,2751,2735,2734,2730,2732,2759,2709,2711,2765,2736,2750,2697,2728,2765,2721,2738,2709,2765,2743,2723,2744,2765,2725,2751,2724,2751,2735,2750,2736,2759,32,2743,2734,2724,2750,2715,2752,32,2736,2754,2730,2736,2759,2710,2750,2697,2726,2750,2745,2736,2723,32,2741,2765,2735,2750,2730,2750,2736,32,2716,2736,2754,2736,2751,2726,2765,2726,2742,2765,2735,32};
static const DialectSize gj_prefix_indexes[] = {5,9,65,17,19,10,24,35,72,40,4,46,51,55,70,83,0,58};
static const DialectSize gj_prefix_sizes[] = {4,8,6,2,4,1,11,5,12,6,1,5,4,3,2,9,5,7};
static const DialectSize gj_i_p1s[] = {0,0,11,12,0,14,0,0,0,0,0,0,0,0,0,17,0,0};
static const DialectSize gj_sizes[] = {0,0,1,2,0,3,0,0,0,0,0,0,0,0,0,2,0,0};
static const DialectValue gj_values[] = {1,6,8,0,7,0,2,5,5,8,4,11,5,10,3,0,9,9};
static const DialectSize gj_root_size = 10;

static const Dialect gj_dialect = {gj_prefix_raw, gj_prefix_indexes, gj_prefix_sizes, gj_i_p1s, gj_sizes, gj_values, gj_root_size};

static const DialectLabel gl_prefix_raw[] = {115,120,101,109,112,108,111,110,116,101,120,116,111,114,97,99,116,101,114,237,115,116,105,99,97,67,68,97,100,69,82,117,108,101,110,100,111,32,98,111,122,111,32,100,111,32,101,115,99,101,110,97,114,105,111,77,97,105,115,32,76,111,103,111,32,80,101,114,111,32,110,116,243,110,32};
static const DialectSize gl_prefix_indexes[] = {25,26,29,60,55,65,30,14,6,14,6,37,70,0,1,34,13,37,58,37,58,38,48,0};
static const DialectSize gl_prefix_sizes[] = {1,3,1,5,5,5,4,1,7,1,1,1,5,1,6,4,12,1,2,1,2,17,7,1};
static const DialectSize gl_i_p1s[] = {8,10,12,0,0,0,0,16,0,18,20,0,0,22,24,0,0,0,0,0,0,0,0,0};
static const DialectSize gl_sizes[] = {2,2,4,0,0,0,0,2,0,2,2,0,0,2,1,0,0,0,0,0,0,0,0,0};
static const DialectValue gl_values[] = {0,0,0,10,3,3,7,0,2,0,0,1,10,0,8,11,5,6,6,6,6,9,8,4};
static const DialectSize gl_root_size = 7;

static const Dialect gl_dialect = {gl_prefix_raw, gl_prefix_indexes, gl_prefix_sizes, gl_i_p1s, gl_sizes, gl_values, gl_root_size};

static const DialectLabel he_prefix_raw[] = {1489,1504,1497,1514,32,1514,1512,1495,1497,1513,1489,1492,1497,1504,1514,1503,32,1491,1493,1490,1502,1488,1513,1512,32,1499,1493,1504,1492,1493,1514,1493,1490,1501,32,1512,1511,1506,1489,1500,32,1494,1500,1500,1497,32};
static const DialectSize he_prefix_indexes[] = {21,10,17,31,25,35,3,38,41,29,21,42,0,25,6,4,44};
static const DialectSize he_prefix_sizes[] = {1,7,5,4,1,3,1,3,1,2,4,2,10,4,4,1,2};
static const DialectSize he_i_p1s[] = {8,0,10,0,11,0,13,0,16,0,0,0,0,0,0,0,0};
static const DialectSize he_sizes[] = {2,0,1,0,2,0,3,0,2,0,0,0,0,0,0,0,0};
static const DialectValue he_values[] = {0,6,8,1,0,2,0,3,0,4,11,7,9,5,8,10,10};
static const DialectSize he_root_size = 7;

static const Dialect he_dialect = {he_prefix_raw, he_prefix_indexes, he_prefix_sizes, he_i_p1s, he_sizes, he_values, he_root_size};

static const DialectLabel hi_prefix_raw[] = {2352,2370,2346,32,2354,2375,2326,2371,2359,2381,2336,2349,2370,2350,2367,2342,2371,2358,2381,2351,2342,2367,32,2313,2342,2366,2361,2352,2339,2325,2330,2370,2306,2325,2367,32,2340,2344,2367,2351,2350,2346,2341,2366,32,2367,2344,2381,2340,2369,32,2342,2366,32,2332,2348,32,2309,2327,2352,32,2324,2352,32,2352,2370,2346,2352,2375,2326,2366};
static const DialectSize hi_prefix_indexes[] = {57,23,61,29,30,54,36,37,2,19,0,51,45,42,51,55,0,7,3,46,14,63};
static const DialectSize hi_prefix_sizes[] = {4,6,3,1,6,3,1,4,1,4,7,3,6,3,3,2,1,8,1,5,6,8};
static const DialectSize hi_i_p1s[] = {0,0,0,12,0,0,14,0,17,0,0,0,0,0,0,0,19,0,0,0,22,0};
static const DialectSize hi_sizes[] = {0,0,0,2,0,0,3,0,2,0,0,0,0,0,0,0,3,0,0,0,1,0};
static const DialectValue hi_values[] = {6,4,1,0,6,11,0,7,0,6,5,11,3,1,10,10,0,2,3,3,8,9};
static const DialectSize hi_root_size = 11;

static const Dialect hi_dialect = {hi_prefix_raw, hi_prefix_indexes, hi_prefix_sizes, hi_i_p1s, hi_sizes, hi_values, hi_root_size};

static const DialectLabel hr_prefix_raw[] = {111,110,99,101,112,116,99,110,111,115,116,263,110,111,115,116,111,122,97,100,105,110,97,114,105,109,106,101,114,99,101,110,97,114,105,106,107,105,99,97,85,107,111,108,105,107,111,32,73,32,90,97,100,97,110,100,97,32,115,111,98,105,110,97,100,105,65,108,105,32,75,77,111,103,117,79,80,82,117,108,101,83};
static const DialectSize hr_prefix_indexes[] = {66,48,70,71,75,76,77,81,40,50,18,0,6,11,54,58,16,23,29,36,47,68,46,47,56,20,20};
static const DialectSize hr_prefix_sizes[] = {4,2,1,4,1,1,4,1,8,5,2,6,5,5,4,6,7,6,7,4,1,2,2,1,2,1,1};
static const DialectSize hr_i_p1s[] = {0,0,11,13,15,17,0,19,0,21,24,0,0,0,0,0,0,26,27,0,0,0,0,0,0,0,0};
static const DialectSize hr_sizes[] = {0,0,2,2,2,2,0,2,0,3,2,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0};
static const DialectValue hr_values[] = {3,1,0,0,0,0,7,0,6,0,0,9,5,5,10,5,2,8,8,9,6,6,6,11,11,4,4};
static const DialectSize hr_root_size = 10;

static const Dialect hr_dialect = {hr_prefix_raw, hr_prefix_indexes, hr_prefix_sizes, hr_i_p1s, hr_sizes, hr_values, hr_root_size};

static const DialectLabel ht_prefix_raw[] = {232,32,97,107,100,101,115,107,114,105,112,115,121,111,110,115,97,32,97,32,105,112,111,122,101,32,65,107,32,68,121,97,103,114,97,109,32,70,111,110,107,115,121,111,110,97,108,105,116,101,110,32,73,115,116,111,114,105,107,101,32,75,101,32,83,101,110,97,114,121,111,103,122,97,110,112,105,32,68,101,115,107,114,105,112,115,121,111,110,116,232,107,115,101,110,97,114,121,111,69,76,77,80,108,97,110,32,82,117,108,101,97,114,97,107,116,101,114,105,115,116,105,107};
static const DialectSize ht_prefix_indexes[] = {26,29,99,37,52,61,100,101,102,107,64,64,92,1,71,75,111,87,24,0,2,49,64,92,65,20,15,15,1,61,58,78,4};
static const DialectSize ht_prefix_sizes[] = {3,8,1,13,7,1,1,1,5,4,1,7,7,1,5,3,12,6,2,2,2,3,7,7,6,6,5,5,1,3,3,11,11};
static const DialectSize ht_i_p1s[] = {0,12,14,0,0,17,19,21,23,0,25,0,0,0,0,0,0,0,27,28,0,0,0,0,29,30,0,0,32,0,0,0,0};
static const DialectSize ht_sizes[] = {0,2,3,0,0,2,2,2,2,0,2,0,0,0,0,0,0,0,1,1,0,0,0,0,1,2,0,0,2,0,0,0,0};
static const DialectValue ht_values[] = {1,0,0,5,2,0,0,0,0,7,0,9,9,1,4,1,5,2,11,11,5,3,9,9,8,6,10,10,0,6,6,9,9};
static const DialectSize ht_root_size = 11;

static const Dialect ht_dialect = {ht_prefix_raw, ht_prefix_indexes, ht_prefix_sizes, ht_i_p1s, ht_sizes, ht_values, ht_root_size};

static const DialectLabel hu_prefix_raw[] = {225,107,107,111,114,32,65,70,111,114,103,97,116,243,107,246,110,121,118,72,74,101,108,108,101,109,122,337,77,97,106,100,32,83,122,97,98,225,108,121,201,115,32,109,225,116,116,233,114,101,110,110,121,105,98,101,110,32,105,107,111,114,32,68,101,32,118,225,122,108,97,116,80,233,108,100,111,116,116,32,97,32};
static const DialectSize hu_prefix_indexes[] = {6,63,7,19,20,28,72,33,40,75,1,25,65,80,44,11,0,49,58};
static const DialectSize hu_prefix_sizes[] = {1,3,12,1,8,5,4,7,3,5,5,1,7,2,5,1,2,9,5};
static const DialectSize hu_i_p1s[] = {10,0,13,14,0,0,16,0,0,0,0,18,0,0,0,0,0,0,0};
static const DialectSize hu_sizes[] = {3,0,1,2,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0};
static const DialectValue hu_values[] = {0,3,8,0,5,11,0,7,1,6,10,0,9,11,2,8,4,6,11};
static const DialectSize hu_root_size = 9;

static const Dialect hu_dialect = {hu_prefix_raw, hu_prefix_indexes, hu_prefix_sizes, hu_i_p1s, hu_sizes, hu_values, hu_root_size};

static const DialectLabel id_prefix_raw[] = {77,84,109,117,100,105,97,110,32,116,105,107,97,32,115,97,114,97,115,117,109,115,105,107,97,110,32,107,101,116,97,104,117,105,32,71,97,114,105,115,45,66,101,115,97,114,32,83,107,101,110,97,114,105,111,66,105,108,97,32,107,111,110,115,101,112,75,101,116,97,112,105,32,82,117,108,101,110,103,97,110,32,97,107,97,32,105,115,97,108,65,116,117,114,97,110,67,111,110,116,111,104,68,70,105,116,117,114,74,105,107,97,32,76,97,116,97,114,32,66,101,108,97,107,97,110,103};
static const DialectSize id_prefix_indexes[] = {90,55,96,102,103,35,108,66,113,0,73,47,1,6,76,5,2,9,82,86,59,69,67,7,14,17,27};
static const DialectSize id_prefix_sizes[] = {6,5,6,1,5,20,5,2,14,1,4,8,1,1,6,1,7,5,4,4,7,4,6,2,3,10,8};
static const DialectSize id_i_p1s[] = {0,0,0,14,0,0,0,17,0,19,0,21,22,24,0,26,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize id_sizes[] = {0,0,0,3,0,0,0,2,0,2,0,1,2,2,0,2,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue id_values[] = {7,6,4,0,5,9,6,0,2,0,7,8,0,0,6,0,10,11,10,4,9,3,3,1,2,6,6};
static const DialectSize id_root_size = 13;

static const Dialect id_dialect = {id_prefix_raw, id_prefix_indexes, id_prefix_sizes, id_i_p1s, id_sizes, id_values, id_root_size};

static const DialectLabel is_prefix_raw[] = {65,116,98,117,114,240,97,114,225,115,97,114,68,230,109,105,114,82,117,108,101,103,97,114,32,66,97,107,103,114,117,110,110,117,114,69,76,253,115,105,110,103,32,79,103,32,222,102,32,105,103,105,110,108,101,105,107,105,110,32,68,230,109,97,225,32};
static const DialectSize is_prefix_indexes[] = {0,25,12,35,36,43,17,46,15,47,49,58,0,60,20,64};
static const DialectSize is_prefix_sizes[] = {10,10,4,1,7,3,4,1,2,2,9,2,12,4,5,2};
static const DialectSize is_i_p1s[] = {9,0,0,10,13,0,0,15,0,0,0,0,0,0,0,0};
static const DialectSize is_sizes[] = {1,0,0,3,2,0,0,2,0,0,0,0,0,0,0,0};
static const DialectValue is_values[] = {8,2,4,0,0,1,7,0,4,6,5,3,9,9,11,10};
static const DialectSize is_root_size = 8;

static const Dialect is_dialect = {is_prefix_raw, is_prefix_indexes, is_prefix_sizes, is_i_p1s, is_sizes, is_values, is_root_size};

static const DialectLabel it_prefix_raw[] = {65,68,97,116,69,70,117,110,122,105,111,110,97,108,105,116,224,82,101,103,111,108,97,83,99,98,105,108,105,116,224,101,32,100,32,104,101,109,97,32,100,101,108,108,111,32,115,99,101,110,97,114,105,111,77,97,32,81,117,97,110,100,111,32,67,111,110,116,101,115,116,111,108,108,111,114,97,32,101,109,112,105,32,105,103,101,110,122,97,32,100,105,32,66,117,115,105,110,101,115,115};
static const DialectSize it_prefix_indexes[] = {0,64,1,4,5,54,57,17,23,25,72,38,31,81,44,32,33,46,48,35,78,83,10};
static const DialectSize it_prefix_sizes[] = {1,8,3,1,12,3,7,6,2,6,6,2,2,2,2,1,2,1,6,19,4,18,1};
static const DialectSize it_i_p1s[] = {10,0,12,16,0,0,0,0,19,0,0,0,0,0,0,0,0,21,0,0,23,0,0};
static const DialectSize it_sizes[] = {2,0,4,3,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,1,0,0};
static const DialectValue it_values[] = {0,2,0,0,5,3,11,7,0,5,10,6,6,6,6,1,1,0,8,9,4,5,8};
static const DialectSize it_root_size = 9;

static const Dialect it_dialect = {it_prefix_raw, it_prefix_indexes, it_prefix_sizes, it_i_p1s, it_sizes, it_values, it_root_size};

static const DialectLabel ja_prefix_raw[] = {12418,12375,12471,12490,12522,12458,12501,12451,12540,12481,12515,19988,12388,20294,12375,20363,21069,25552,27231,33021,28982,12375,32972,26223,12450,12454,12488,12521,12452,12531,12540,12488,12486,12531,12503,12524,12383,12384,12375,12363,12375,12469,12531,12503,12523,12540,12523,12363,12388,12394,12425,12400};
static const DialectSize ja_prefix_indexes[] = {47,38,36,49,0,41,2,32,6,44,11,13,15,16,18,20,22,24,32,30};
static const DialectSize ja_prefix_sizes[] = {2,3,3,3,2,4,4,4,5,3,2,2,1,2,2,2,2,6,4,2};
static const DialectSize ja_i_p1s[] = {0,0,0,0,0,0,18,0,0,0,0,0,0,0,0,0,0,0,20,0};
static const DialectSize ja_sizes[] = {0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,1,0};
static const DialectValue ja_values[] = {1,3,3,10,11,4,8,9,5,7,1,3,4,6,5,3,2,9,9,9};
static const DialectSize ja_root_size = 17;

static const Dialect ja_dialect = {ja_prefix_raw, ja_prefix_indexes, ja_prefix_sizes, ja_i_p1s, ja_sizes, ja_values, ja_root_size};

static const DialectLabel jv_prefix_raw[] = {67,111,110,116,111,68,97,115,97,114,70,105,116,117,114,75,111,110,115,101,112,32,115,107,101,110,97,114,105,111,76,97,110,32,77,78,83,107,101,110,97,114,105,111,84,97,112,105,32,110,101,106,117,107,32,110,105,110,103,32,65,110,97,110,103,105,110,103,32,66,97,110,106,117,114,32,82,117,108,101,110,97,119,97,32,108,105,107,97,110,97,119,97,32};
static const DialectSize jv_prefix_indexes[] = {60,69,0,5,10,15,30,34,35,76,36,44,49,88,79,6,51,85,63,21,55};
static const DialectSize jv_prefix_sizes[] = {9,7,5,5,5,15,4,1,1,4,8,5,2,6,6,1,4,4,6,1,5};
static const DialectSize jv_i_p1s[] = {0,0,13,0,0,0,0,14,16,0,0,0,0,0,0,18,0,20,0,0,0};
static const DialectSize jv_sizes[] = {0,0,1,0,0,0,0,2,2,0,0,0,0,0,0,2,0,2,0,0,0};
static const DialectValue jv_values[] = {3,10,4,2,5,9,1,0,0,7,8,3,4,11,11,0,10,0,3,6,6};
static const DialectSize jv_root_size = 12;

static const Dialect jv_dialect = {jv_prefix_raw, jv_prefix_indexes, jv_prefix_sizes, jv_i_p1s, jv_sizes, jv_values, jv_root_size};

static const DialectLabel ka_prefix_raw[] = {4321,32,4330,4308,4315,4323,4314,4312,4306,4320,4304,4315,32,4308,4305,4312,4307,4304,32,4328,4304,4305,4314,4317,4316,4312,4315,4323,4328,4312,4316,32,4309,4311,4325,4309,4304,4311,32,4313,4317,4316,4322,4308,4325,4321,4322,4312,4315,4330,4304,32,4320,4317,4304,4307,4308,4321,4304,4330,32,4309,4312,4321,4308,4305,4304,4321,4308,4309,4308,32,4304,4314,4312,4311,4334,4317,4309,4316,4304,4306,4317,4320,4330,32,4313,4312,32,4321,4330,4308,4316,4304,4320,4312,4332,4308,4321,4312,4323};
static const DialectSize ka_prefix_indexes[] = {66,16,32,33,39,4,24,52,89,19,96,61,5,0,23,81,55,49,0,1,48,10,80,75,2,24,19,8,28,1,17,72,9,54,13,7};
static const DialectSize ka_prefix_sizes[] = {6,3,7,1,9,1,6,2,7,7,4,6,1,0,1,8,6,3,2,1,4,1,2,6,6,6,7,1,4,1,2,4,4,2,3,1};
static const DialectSize ka_i_p1s[] = {0,0,0,12,0,14,0,16,19,0,0,0,20,22,24,0,0,0,26,0,0,28,0,0,30,0,0,32,0,0,0,34,0,0,0,0};
static const DialectSize ka_sizes[] = {0,0,0,2,0,2,0,3,1,0,0,0,2,2,2,0,0,0,2,0,0,2,0,0,2,0,0,2,0,0,0,3,0,0,0,0};
static const DialectValue ka_values[] = {1,1,6,0,2,0,9,0,8,9,7,5,0,0,0,11,11,11,0,11,3,0,8,5,0,9,9,0,10,6,6,0,3,8,4,8};
static const DialectSize ka_root_size = 11;

static const Dialect ka_dialect = {ka_prefix_raw, ka_prefix_indexes, ka_prefix_sizes, ka_i_p1s, ka_sizes, ka_values, ka_root_size};

static const DialectLabel kn_prefix_raw[] = {3263,3285,3233,3263,3238,32,3263,3240,3277,3240,3270,3250,3270,3209,3238,3262,3257,3248,3235,3270,3226,3277,3226,3251,82,117,108,101,3206,3238,3248,3270,32,3221,3237,3262,3256,3262,3248,3262,3202,3254,3240,3246,3236,3277,3236,3265,32,3253,3263,3253,3248,3235,3270,3256,3277,3237,3263,3236,3263,3247,3240,3277,3240,3265,32,3257,3223,3251,3265,3202,3236,3248,32};
static const DialectSize kn_prefix_indexes[] = {24,28,13,33,7,43,49,55,16,68,71,0,6,19};
static const DialectSize kn_prefix_sizes[] = {4,5,7,9,1,6,6,12,1,3,4,6,7,5};
static const DialectSize kn_i_p1s[] = {0,0,10,0,11,0,0,0,13,0,0,0,0,0};
static const DialectSize kn_sizes[] = {0,0,1,0,2,0,0,0,2,0,0,0,0,0};
static const DialectValue kn_values[] = {7,3,8,8,0,1,9,11,0,4,10,6,2,5};
static const DialectSize kn_root_size = 9;

static const Dialect kn_dialect = {kn_prefix_raw, kn_prefix_indexes, kn_prefix_sizes, kn_i_p1s, kn_sizes, kn_values, kn_root_size};

static const DialectLabel ko_prefix_raw[] = {45800,32,44060,50836,82,117,108,101,44536,44592,45733,47564,47676,51200,32,48176,44221,49884,45208,47532,50724,50696,51312,44148,32,54616,51648,47564,32,47084,47732,32,47532,44256,32,50557,32,51068,32};
static const DialectSize ko_prefix_indexes[] = {4,8,9,0,11,12,15,17,21,22,25,29,32,35,37,1};
static const DialectSize ko_prefix_sizes[] = {4,1,2,2,1,3,2,4,1,3,4,3,3,2,2,3};
static const DialectSize ko_i_p1s[] = {0,12,0,0,14,0,0,16,0,0,0,0,0,0,0,0};
static const DialectSize ko_sizes[] = {0,2,0,0,2,0,0,1,0,0,0,0,0,0,0,0};
static const DialectValue ko_values[] = {7,0,5,3,0,6,2,8,4,6,3,10,1,11,11,9};
static const DialectSize ko_root_size = 11;

static const Dialect ko_dialect = {ko_prefix_raw, ko_prefix_indexes, ko_prefix_sizes, ko_i_p1s, ko_sizes, ko_values, ko_root_size};

static const DialectLabel lt_prefix_raw[] = {97,118,121,98,279,66,101,116,32,68,117,111,116,97,32,73,114,32,75,80,97,118,121,122,100,82,117,108,101,83,84,97,100,97,32,111,110,116,101,107,115,116,97,115,121,115,99,101,110,97,114,105,106,86,97,114,105,97,110,116,97,105,32,117,115,32,353,97,98,108,111,110,97,115,382,105,97,105};
static const DialectSize lt_prefix_indexes[] = {5,9,15,18,19,25,29,30,53,60,35,44,74,0,46,0,63,51,63};
static const DialectSize lt_prefix_sizes[] = {4,6,3,1,6,4,1,5,9,3,9,2,4,5,7,1,2,1,11};
static const DialectSize lt_i_p1s[] = {0,0,0,10,12,0,14,0,0,0,0,0,0,0,16,18,0,0,0};
static const DialectSize lt_sizes[] = {0,0,0,2,2,0,2,0,0,0,0,0,0,0,2,2,0,0,0};
static const DialectValue lt_values[] = {3,6,1,0,0,7,0,10,4,11,2,8,4,5,0,0,8,4,9};
static const DialectSize lt_root_size = 9;

static const Dialect lt_dialect = {lt_prefix_raw, lt_prefix_indexes, lt_prefix_sizes, lt_i_p1s, lt_sizes, lt_values, lt_root_size};

static const DialectLabel lu_prefix_raw[] = {119,97,110,110,32,119,101,114,32,80,108,97,110,103,32,118,117,109,32,83,122,101,110,97,114,105,111,72,97,110,110,101,114,103,114,111,110,100,97,110,110,32,82,117,108,101,114,109,228,32,66,101,105,115,112,105,108,108,70,117,110,107,116,105,111,110,97,108,105,116,233,105,116,97,117,103,101,104,111,108,108,32};
static const DialectSize lu_prefix_indexes[] = {50,58,27,9,42,19,1,37,47,74,0,6,4,3,5};
static const DialectSize lu_prefix_sizes[] = {8,15,11,18,4,8,1,5,3,8,5,2,1,2,4};
static const DialectSize lu_i_p1s[] = {12,0,0,0,0,0,13,0,0,0,0,0,0,0,0};
static const DialectSize lu_sizes[] = {1,0,0,0,0,0,3,0,0,0,0,0,0,0,0};
static const DialectValue lu_values[] = {8,5,2,9,7,8,0,10,3,6,11,4,1,1,3};
static const DialectSize lu_root_size = 11;

static const Dialect lu_dialect = {lu_prefix_raw, lu_prefix_indexes, lu_prefix_sizes, lu_i_p1s, lu_sizes, lu_values, lu_root_size};

static const DialectLabel lv_prefix_raw[] = {105,101,109,275,114,70,74,97,32,75,80,82,117,108,101,83,85,110,32,117,110,107,99,105,111,110,97,108,105,116,257,116,101,99,101,110,257,114,105,106,115,105,116,117,257,99,105,106,97,84,97,100,32,66,101,116,32,112,275,99,32,112,97,114,97,117,103,97,299,269,97,114,97,117,103,115,111,110,116,101,107,115,116,115};
static const DialectSize lv_prefix_indexes[] = {53,5,6,9,10,11,15,49,16,19,68,50,76,70,0,33,41,0,40,56};
static const DialectSize lv_prefix_sizes[] = {4,1,3,1,1,4,1,4,3,14,3,3,8,6,5,8,8,1,1,12};
static const DialectSize lv_i_p1s[] = {0,10,0,12,14,0,16,0,0,0,0,0,0,0,18,20,0,0,0,0};
static const DialectSize lv_sizes[] = {0,2,0,2,2,0,2,0,0,0,0,0,0,0,2,1,0,0,0,0};
static const DialectValue lv_values[] = {3,0,11,0,0,7,0,10,1,5,5,6,2,4,0,8,2,4,8,9};
static const DialectSize lv_root_size = 9;

static const Dialect lv_dialect = {lv_prefix_raw, lv_prefix_indexes, lv_prefix_sizes, lv_i_p1s, lv_sizes, lv_values, lv_root_size};

static const DialectLabel mk_Cyrl_prefix_raw[] = {1048,32,1053,1055,1088,1057,1058,1086,1075,1072,1096,32,1060,1091,1085,1082,1094,1080,1086,1085,1072,1083,1085,1086,1089,1090,1082,1080,1094,1072,1094,1077,1087,1090,1075,1072,32,1087,1088,1080,1084,1077,1088,1077,1075,1083,1077,1076,32,1085,1072,32,1089,1094,1077,1085,1072,1088,1080,1112,1072,1044,1072,1076,1077,1085,1050,1086,1076,1088,1078,1080,1085,1072,1052,1086,1078,1085,1086,1089,1090,1077,1082,1089,1090,1094,1077,1085,1072,1088,1080,1086,32,82,117,108,101,1041,1080,1079,1085,1080,1089,32,1087,1086,1090,1088,1077,1073,1072};
static const DialectSize mk_Cyrl_prefix_indexes[] = {93,97,61,0,66,74,2,3,5,6,12,35,91,34,14,35,91,43,39,26,67,53,80,30,17,7,59};
static const DialectSize mk_Cyrl_prefix_sizes[] = {4,14,5,2,2,7,1,2,1,6,14,2,2,3,1,8,2,18,4,4,7,6,5,4,1,1,2};
static const DialectSize mk_Cyrl_i_p1s[] = {0,0,12,0,14,0,16,18,20,0,0,0,0,0,23,0,0,0,25,0,0,26,0,0,0,0,0};
static const DialectSize mk_Cyrl_sizes[] = {0,0,2,0,2,0,2,2,3,0,0,0,0,0,2,0,0,0,1,0,0,2,0,0,0,0,0};
static const DialectValue mk_Cyrl_values[] = {7,5,0,1,0,5,0,0,0,10,5,6,6,11,0,8,3,9,8,9,2,0,2,9,4,8,4};
static const DialectSize mk_Cyrl_root_size = 11;

static const Dialect mk_Cyrl_dialect = {mk_Cyrl_prefix_raw, mk_Cyrl_prefix_indexes, mk_Cyrl_prefix_sizes, mk_Cyrl_i_p1s, mk_Cyrl_sizes, mk_Cyrl_values, mk_Cyrl_root_size};

static const DialectLabel mk_Latn_prefix_raw[] = {73,32,77,111,122,104,110,111,115,116,78,80,114,83,84,111,103,97,115,104,32,99,101,110,97,114,105,107,105,99,97,99,101,112,116,103,97,32,112,114,105,109,101,114,105,66,105,122,110,105,115,32,112,111,116,114,101,98,97,68,97,100,101,110,70,117,110,107,99,105,111,110,97,108,110,111,115,116,101,107,115,116,75,111,100,114,122,104,105,110,97,82,117,108,101,103,108,101,100,32,110,97,32,115,99,101,110,97,114,105,106,97,111,32};
static const DialectSize mk_Latn_prefix_indexes[] = {45,59,64,0,82,2,10,11,91,13,14,36,112,35,6,36,112,94,40,21,27,83,31,77,17,3};
static const DialectSize mk_Latn_prefix_sizes[] = {14,5,14,2,2,8,1,2,4,1,7,2,2,3,1,8,2,18,5,6,4,8,4,5,1,1};
static const DialectSize mk_Latn_i_p1s[] = {0,12,0,0,14,0,16,18,0,20,0,0,0,0,23,0,0,0,0,25,0,0,0,0,0,0};
static const DialectSize mk_Latn_sizes[] = {0,2,0,0,2,0,2,2,0,3,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0};
static const DialectValue mk_Latn_values[] = {5,0,5,1,0,5,0,0,7,0,10,6,6,11,0,8,3,9,4,0,9,2,9,2,4,8};
static const DialectSize mk_Latn_root_size = 11;

static const Dialect mk_Latn_dialect = {mk_Latn_prefix_raw, mk_Latn_prefix_indexes, mk_Latn_prefix_sizes, mk_Latn_i_p1s, mk_Latn_sizes, mk_Latn_values, mk_Latn_root_size};

static const DialectLabel mn_prefix_raw[] = {1043,1101,1093,1076,1101,1101,32,1052,1257,1085,32,1058,1060,1091,1085,1082,1094,1061,1198,1199,1085,1080,1081,32,1076,1072,1088,1072,1072,32,1256,1075,1257,1075,1076,1089,1257,1085,32,1085,1100,32,1075,1091,1091,1083,1075,1072,1085,1093,32,1099,1085,32,1090,1257,1083,1257,1074,1083,1257,1075,1257,1257,1091,1093,1072,1081,1083,1073,1072,1083,1080,1086,1085,1072,1083,1093,1101,1076,32,1057,1094,1077,1085,1072,1088,1080,1085,32,1101,1075,1101,1088,1101,1074,32,82,117,108,101,1040};
static const DialectSize mn_prefix_indexes[] = {97,101,0,7,81,11,12,17,18,30,42,48,51,64,90,72,85,92,77,78};
static const DialectSize mn_prefix_sizes[] = {4,1,7,4,6,1,5,1,12,12,6,3,13,8,3,5,5,5,4,3};
static const DialectSize mn_i_p1s[] = {0,11,0,0,13,14,16,17,0,0,0,0,0,0,19,0,0,0,0,0};
static const DialectSize mn_sizes[] = {0,2,0,0,1,2,1,2,0,0,0,0,0,0,2,0,0,0,0,0};
static const DialectValue mn_values[] = {7,0,3,1,8,0,5,0,10,6,2,6,9,4,0,5,3,11,10,1};
static const DialectSize mn_root_size = 10;

static const Dialect mn_dialect = {mn_prefix_raw, mn_prefix_indexes, mn_prefix_sizes, mn_i_p1s, mn_sizes, mn_values, mn_root_size};

static const DialectLabel ne_prefix_raw[] = {2332,2348,32,2352,2370,2346,2352,2375,2326,2366,2371,2359,2381,2336,2349,2370,2350,2368,32,2313,2342,2366,2361,2352,2339,2340,2342,2367,2346,2357,2367,2358,2375,2359,2340,2366,2360,2369,2357,2367,2343,2366,2361,2352,2369,2311,2319,2325,2379,32,2351,2342,2367,32,2352,32,2352,2367,2342,2371,2358,2381,2351,2360,2346,2331,2367,32,2309,2344,2367,2351,2350};
static const DialectSize ne_prefix_indexes[] = {68,19,0,25,26,69,5,50,54,29,36,52,17,42,54,61,45,46,56,10,2};
static const DialectSize ne_prefix_sizes[] = {2,6,3,1,2,4,1,4,2,7,6,2,2,3,2,7,5,4,7,8,8};
static const DialectSize ne_i_p1s[] = {12,14,0,15,17,0,19,0,0,0,0,0,0,0,0,0,0,0,21,0,0};
static const DialectSize ne_sizes[] = {2,1,0,2,2,0,2,0,0,0,0,0,0,0,0,0,0,0,1,0,0};
static const DialectValue ne_values[] = {0,4,11,0,0,7,0,6,1,5,5,1,10,4,3,10,6,6,8,2,9};
static const DialectSize ne_root_size = 11;

static const Dialect ne_dialect = {ne_prefix_raw, ne_prefix_indexes, ne_prefix_sizes, ne_i_p1s, ne_sizes, ne_values, ne_root_size};

static const DialectLabel nl_prefix_raw[] = {98,115,116,114,97,99,116,32,83,99,101,110,97,114,105,111,70,117,110,99,116,105,111,110,97,108,105,116,101,105,116,101,108,32,82,101,103,101,108,115,32,65,68,97,110,32,69,110,32,71,101,103,101,118,101,110,32,77,97,97,114,32,83,86,111,111,114,98,101,101,108,100,87,97,110,110,101,101,114,32,99,104,116,101,114,103,114,111,110,100,101,110};
static const DialectSize nl_prefix_indexes[] = {41,42,46,16,49,57,34,8,63,72,0,80,38,9,30,10};
static const DialectSize nl_prefix_sizes[] = {1,4,3,15,8,5,5,1,9,8,16,10,3,7,4,2};
static const DialectSize nl_i_p1s[] = {11,0,0,0,0,0,0,14,16,0,0,0,0,0,0,0};
static const DialectSize nl_sizes[] = {3,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0};
static const DialectValue nl_values[] = {0,10,1,5,6,3,7,0,8,11,9,2,11,8,6,4};
static const DialectSize nl_root_size = 10;

static const Dialect nl_dialect = {nl_prefix_raw, nl_prefix_indexes, nl_prefix_sizes, nl_i_p1s, nl_sizes, nl_values, nl_root_size};

static const DialectLabel no_prefix_raw[] = {65,98,115,116,114,97,107,116,32,83,99,101,110,97,114,105,111,82,101,103,101,108,109,97,108,101,114,66,97,107,103,114,117,110,110,69,71,105,116,116,32,77,101,110,32,78,229,114,32,79,103,32,83,103,101,110,115,107,97,112,107,115,101,109,112,229,32};
static const DialectSize no_prefix_indexes[] = {0,27,35,36,41,45,49,17,9,53,60,10,65,20,24,22};
static const DialectSize no_prefix_sizes[] = {17,8,1,5,4,4,3,5,1,7,5,7,2,2,3,3};
static const DialectSize no_i_p1s[] = {0,0,10,0,0,0,0,0,12,0,14,16,0,0,0,0};
static const DialectSize no_sizes[] = {0,0,2,0,0,0,0,0,2,0,2,1,0,0,0,0};
static const DialectValue no_values[] = {9,2,0,6,3,11,1,7,0,5,0,8,10,8,4,9};
static const DialectSize no_root_size = 9;

static const Dialect no_dialect = {no_prefix_raw, no_prefix_indexes, no_prefix_sizes, no_i_p1s, no_sizes, no_values, no_root_size};

static const DialectLabel pa_prefix_raw[] = {2631,2581,2608,32,2596,2598,32,2606,2625,2617,2622,2562,2598,2608,2622,2562,2569,2598,2622,2617,2608,2600,2581,2614,32,2600,2625,2617,2622,2608,2626,2602,32,2608,2631,2582,2622,2616,2624,2565,2596,2631,32,82,117,108,101,2588,2602,2598,2635,2562,32,2623,2613,2631,2562,32,2581,2623,32,2591,2581,2597,2622,2623,2587,2635,2581,2652,2594,2622,2562,2586,2622};
static const DialectSize pa_prefix_indexes[] = {43,39,16,35,47,4,21,31,7,10,49,53,0,61,2,65,3,70,29};
static const DialectSize pa_prefix_sizes[] = {4,4,6,6,1,3,9,1,8,2,4,8,4,4,2,5,1,5,8};
static const DialectSize pa_i_p1s[] = {0,0,10,0,11,0,0,14,0,0,0,0,0,17,0,0,18,0,0};
static const DialectSize pa_sizes[] = {0,0,1,0,3,0,0,3,0,0,0,0,0,1,0,0,2,0,0};
static const DialectValue pa_values[] = {7,1,8,5,0,10,5,0,5,4,11,6,6,8,3,2,0,9,9};
static const DialectSize pa_root_size = 9;

static const Dialect pa_dialect = {pa_prefix_raw, pa_prefix_indexes, pa_prefix_sizes, pa_i_p1s, pa_sizes, pa_values, pa_root_size};

static const DialectLabel pl_prefix_raw[] = {111,116,114,122,101,98,97,32,98,105,122,110,101,115,111,119,97,115,97,100,97,322,111,380,101,110,105,97,121,44,32,380,101,32,82,101,103,117,322,97,347,99,105,119,111,347,263,71,100,121,32,115,112,101,107,116,101,100,121,32,114,122,121,107,322,97,100,97,106,261,99,101,110,97,114,105,117,115,122,97,98,108,111,110,32,115,99,101,110,97,114,105,117,115,122,97,65,70,117,110,107,99,106,97,73,32,74,101,75,105,101,100,121,32,77,97,106,261,99,32,79,114,97,122,32,80,83,87,90,97,108,101,32,347,108,105,32,380,101,108,105,32};
static const DialectSize pl_prefix_indexes[] = {96,97,47,104,106,108,114,120,125,34,126,127,128,130,51,133,137,0,60,70,78,55,38,63,17,21,28,7,29};
static const DialectSize pl_prefix_sizes[] = {1,7,4,2,2,6,6,5,1,6,1,1,2,3,5,4,5,17,7,9,18,5,9,8,4,7,1,1,5};
static const DialectSize pl_i_p1s[] = {14,0,0,0,16,0,0,0,18,0,20,22,24,0,0,0,0,0,27,0,0,0,0,28,0,0,0,0,0};
static const DialectSize pl_sizes[] = {2,0,0,0,2,0,0,0,2,0,2,2,3,0,0,0,0,0,1,0,0,0,0,2,0,0,0,0,0};
static const DialectValue pl_values[] = {0,5,11,1,0,11,6,1,0,7,0,0,0,3,5,11,11,5,8,8,9,10,5,0,7,2,4,6,6};
static const DialectSize pl_root_size = 13;

static const Dialect pl_dialect = {pl_prefix_raw, pl_prefix_indexes, pl_prefix_sizes, pl_i_p1s, pl_sizes, pl_values, pl_root_size};

static const DialectLabel pt_prefix_raw[] = {67,68,69,231,227,111,32,100,111,32,67,101,110,225,114,105,111,105,115,116,105,99,97,111,32,100,111,32,67,101,110,97,114,105,111,70,117,110,116,81,117,97,110,100,111,32,82,101,103,114,97,114,97,99,116,101,114,120,101,109,112,108,111,110,116,101,120,116,111,99,105,111,110,97,108,105,100,97,100,101,108,105,110,101,97,100,227,111,32,77,97,115,32,100,101,32,70,117,110,100,111,237,115,116,105,99,97,111,32,115,113,117,101,109,97,32,100,111,32,67,101,110};
static const DialectSize pt_prefix_indexes[] = {0,1,2,35,89,39,46,50,11,62,77,79,6,37,109,57,69,7,17,101,0,0,22,5,21,3,22,4,31,13,18,31,31,13,13,6,91,6,91,92,18,92,18};
static const DialectSize pt_prefix_sizes[] = {1,1,1,3,4,7,5,7,2,7,2,6,1,2,13,6,11,2,6,6,0,0,1,1,14,14,3,3,4,4,1,4,4,4,4,1,2,1,2,9,1,9,1};
static const DialectSize pt_i_p1s[] = {8,11,13,17,0,0,0,19,21,0,23,25,0,27,29,31,0,0,0,0,32,34,36,38,0,0,0,0,0,0,0,40,0,42,0,0,0,0,0,0,0,0,0};
static const DialectSize pt_sizes[] = {3,2,4,2,0,0,0,2,2,0,2,2,0,2,2,1,0,0,0,0,2,2,2,2,0,0,0,0,0,0,0,2,0,2,0,0,0,0,0,0,0,0,0};
static const DialectValue pt_values[] = {0,0,0,0,3,11,7,0,0,2,0,0,1,0,0,8,5,2,5,5,0,0,0,0,9,9,10,10,9,9,4,0,8,0,8,6,6,6,6,2,4,2,4};
static const DialectSize pt_root_size = 7;

static const Dialect pt_dialect = {pt_prefix_raw, pt_prefix_indexes, pt_prefix_sizes, pt_i_p1s, pt_sizes, pt_values, pt_root_size};

static const DialectLabel ro_prefix_raw[] = {226,110,100,32,355,105,111,110,97,108,105,116,97,116,101,539,105,111,110,97,108,105,116,97,116,101,259,32,102,105,105,110,100,355,105,32,102,105,105,110,100,32,539,105,32,102,105,105,110,100,32,97,32,115,99,101,110,97,114,105,117,65,116,117,110,99,105,32,68,97,110,100,32,82,117,108,101,116,114,117,99,116,117,114,32,259,32,115,99,101,110,97,114,105,117,111,110,116,101,120,116,105,111,110,97,108,105,116,97,116,101,32,102,105,105,110,100,32,67,69,120,101,109,112,108,70,117,110,99,83,350,105,32,536,105,32};
static const DialectSize ro_prefix_indexes[] = {61,118,68,119,125,73,129,130,133,69,95,0,83,11,33,42,14,60,100,4,15,54,34,77,35,110,34,26,51,85};
static const DialectSize ro_prefix_sizes[] = {7,1,2,6,4,4,1,3,3,4,6,4,2,1,9,9,1,1,11,11,11,7,2,7,7,8,8,7,10,10};
static const DialectSize ro_i_p1s[] = {0,10,13,17,19,0,22,0,0,0,0,0,0,25,0,0,0,0,0,0,0,0,0,29,0,0,0,0,0,0};
static const DialectSize ro_sizes[] = {0,3,4,2,3,0,3,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0};
static const DialectValue ro_values[] = {10,0,0,0,0,7,0,1,1,11,2,11,3,0,6,6,4,8,5,5,5,8,1,0,6,6,6,6,9,9};
static const DialectSize ro_root_size = 9;

static const Dialect ro_dialect = {ro_prefix_raw, ro_prefix_indexes, ro_prefix_sizes, ro_i_p1s, ro_sizes, ro_values, ro_root_size};

static const DialectLabel ru_prefix_raw[] = {1047,1072,1090,1077,1084,32,1064,1072,1073,1083,1086,1085,32,1089,1094,1077,1085,1072,1088,1080,1103,1080,1095,1072,1085,1086,32,1085,1090,1077,1082,1089,1090,1088,1091,1082,1090,1091,1088,1072,32,1089,1094,1077,1085,1072,1088,1080,1103,1072,1074,1080,1083,1086,1085,1072,1083,1074,1086,1081,1089,1090,1074,1086,1087,1091,1089,1090,1080,1084,32,1091,1085,1082,1094,1080,1084,1077,1088,1044,1048,1050,1053,1086,32,1055,1057,1058,1060,1085,1072,1095,1077,32,1091,1089,1090,1100,32,1094,1077,1085,1072,1088,1080,1081,1072,1082,1078,1077,32,1077,1076,1099,1089,1090,1086,1088,1080,1103,1099,1100,1085,1086,1089,1090,1100,1075,1076,1072,32,1040,32,1045,1089,1083,1080,32,1090,1086,1084,1091,32,1078,1077,32};
static const DialectSize ru_prefix_indexes[] = {131,79,133,0,80,81,82,85,86,87,88,6,23,63,5,89,137,10,18,94,57,32,99,106,10,21,71,127,27,49,111,75,5,127,53,20,113,121};
static const DialectSize ru_prefix_sizes[] = {2,1,5,6,1,1,3,1,1,1,1,15,4,8,1,5,9,1,1,5,7,17,7,5,1,3,5,4,6,5,9,4,1,4,4,1,1,6};
static const DialectSize ru_i_p1s[] = {0,13,0,0,15,17,0,19,21,24,26,0,0,0,0,0,0,28,30,0,0,0,0,0,33,0,35,0,0,0,0,37,0,0,38,0,0,0};
static const DialectSize ru_sizes[] = {0,2,0,0,2,2,0,2,3,2,2,0,0,0,0,0,0,2,3,0,0,0,0,0,2,0,2,0,0,0,0,1,0,0,1,0,0,0};
static const DialectValue ru_values[] = {3,0,11,10,0,0,3,0,0,0,0,9,6,6,1,3,1,0,0,6,5,9,8,1,0,5,0,11,2,7,2,8,10,10,5,5,4,5};
static const DialectSize ru_root_size = 12;

static const Dialect ru_dialect = {ru_prefix_raw, ru_prefix_indexes, ru_prefix_sizes, ru_i_p1s, ru_sizes, ru_values, ru_root_size};

static const DialectLabel sk_prefix_raw[] = {117,111,122,225,114,111,118,101,328,32,107,105,97,318,32,122,97,100,105,101,382,105,97,100,97,118,107,97,121,82,117,108,101,32,84,97,107,32,70,117,110,107,99,105,97,75,101,271,32,79,115,110,111,118,97,32,83,99,101,110,225,114,97,107,116,105,101,382,32,116,111,109,32,78,225,269,114,116,32,83,99,101,110,225,114,237,107,108,97,100,65,80,86,108,97,115,116,110,111,115,357,90,97,32,112,114,101,100,112,111,107,108,97,100,117,32};
static const DialectSize sk_prefix_indexes[] = {90,38,45,73,49,91,29,56,34,92,101,9,36,31,12,0,1,84,64,2,10,69,15,20,28,62,65};
static const DialectSize sk_prefix_sizes[] = {1,7,4,12,14,1,4,6,4,9,15,1,2,3,1,1,1,6,1,8,5,4,5,8,1,7,4};
static const DialectSize sk_i_p1s[] = {12,0,0,15,0,17,0,0,0,0,0,19,0,0,0,0,21,25,26,0,0,0,0,0,0,0,0};
static const DialectSize sk_sizes[] = {3,0,0,2,0,2,0,0,0,0,0,2,0,0,0,0,4,1,2,0,0,0,0,0,0,0,0};
static const DialectValue sk_values[] = {0,5,11,0,9,0,7,8,10,5,6,1,11,3,9,9,0,8,0,1,6,10,2,5,4,1,1};
static const DialectSize sk_root_size = 11;

static const Dialect sk_dialect = {sk_prefix_raw, sk_prefix_indexes, sk_prefix_sizes, sk_i_p1s, sk_sizes, sk_values, sk_root_size};

static const DialectLabel sl_prefix_raw[] = {67,101,32,68,97,110,111,32,73,110,32,75,78,97,116,111,32,79,80,82,117,108,101,83,84,86,101,110,100,97,114,32,90,268,101,32,382,110,111,115,116,105,122,97,100,106,101,99,101,110,97,114,105,106,110,100,97,110,111,32,118,122,101,116,111,32,117,116,101,107,115,116,109,101,114,32,65,109,112,97,107,32,70,117,110,107,99,105,76,97,115,116,110,111,115,116,114,117,107,116,117,114,97,32,115,99,101,110,97,114,105,106,97,77,111,110,97,108,110,111,115,116,122,110,111,115,116,105,115,110,97,269,105,108,110,111,115,116,107,105,99,97,100,97,114,32,111,118,97,107,114,97,116,32,99,101,112,116,101,109,32,114,105,115,32,115,99,101,110,97,114,105,106,97,114,97,100,105,32,111,100,97,32};
static const DialectSize sl_prefix_indexes[] = {76,0,3,82,8,11,88,113,12,17,18,19,23,24,25,32,33,111,114,141,6,122,36,161,128,42,6,51,47,138,95,148,73,179,173,129,2,5,146,66,55,157,72,60,41,154,67,41};
static const DialectSize sl_prefix_sizes[] = {6,3,5,6,3,1,8,2,5,1,1,4,1,1,7,1,3,2,8,5,1,6,6,13,2,5,1,2,7,4,18,6,3,4,6,9,1,1,3,4,5,4,3,6,1,4,5,1};
static const DialectSize sl_i_p1s[] = {0,0,0,18,0,20,0,22,0,24,27,0,29,32,0,35,0,0,0,0,37,0,0,0,39,0,41,43,45,0,0,0,0,0,0,0,0,46,0,0,0,0,48,0,0,0,0,0};
static const DialectSize sl_sizes[] = {0,0,0,2,0,2,0,2,0,3,2,0,3,3,0,2,0,0,0,0,2,0,0,0,2,0,2,2,1,0,0,0,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0};
static const DialectValue sl_values[] = {3,11,6,0,1,0,5,0,10,0,0,7,0,0,3,0,11,5,5,11,0,5,5,9,0,2,0,0,8,9,9,10,1,3,6,5,11,0,2,9,6,10,8,6,4,9,2,4};
static const DialectSize sl_root_size = 17;

static const Dialect sl_dialect = {sl_prefix_raw, sl_prefix_indexes, sl_prefix_sizes, sl_i_p1s, sl_sizes, sl_values, sl_root_size};

static const DialectLabel sr_Cyrl_prefix_raw[] = {1089,1094,1077,1087,1090,1040,1083,1080,32,1085,1076,1072,32,1047,1072,32,1076,1072,1090,1088,1091,1082,1090,1091,1088,1072,32,1089,1094,1077,1085,1072,1088,1080,1112,1072,1048,32,1052,1086,1075,1091,1115,1085,1086,1089,1090,1077,1082,1089,1090,1086,1085,1086,1074,1072,1086,1079,1072,1076,1080,1085,1072,1076,1086,32,1112,1080,1082,1080,1094,1072,1074,1080,1083,1086,1073,1080,1085,1072,1094,1077,1085,1072,1088,1080,1084,1077,1088,1050,1054,1055,1057,1060,1091,1085,1082,1094,1080,1086,1085,1072,1083,1085,1086,1089,1090,1077,32};
static const DialectSize sr_Cyrl_prefix_indexes[] = {5,13,36,89,38,90,91,92,93,107,7,64,58,51,9,0,56,19,68,18,28,8,11,46,1,52,75,71,85,39,66,7};
static const DialectSize sr_Cyrl_prefix_sizes[] = {4,6,2,1,9,1,1,1,14,2,2,2,2,2,4,1,7,1,4,18,6,1,2,5,4,4,5,5,4,1,2,1};
static const DialectSize sr_Cyrl_i_p1s[] = {0,10,0,13,0,15,17,19,0,0,0,0,22,24,0,26,0,28,0,0,30,0,0,0,0,0,0,0,32,0,0,0};
static const DialectSize sr_Cyrl_sizes[] = {0,3,0,2,0,2,2,3,0,0,0,0,2,2,0,2,0,2,0,0,2,0,0,0,0,0,0,0,1,0,0,0};
static const DialectValue sr_Cyrl_values[] = {3,0,1,0,5,0,0,0,5,6,6,6,0,0,10,0,2,0,9,9,0,11,11,2,9,2,5,7,8,8,4,4};
static const DialectSize sr_Cyrl_root_size = 9;

static const Dialect sr_Cyrl_dialect = {sr_Cyrl_prefix_raw, sr_Cyrl_prefix_indexes, sr_Cyrl_prefix_sizes, sr_Cyrl_i_p1s, sr_Cyrl_sizes, sr_Cyrl_values, sr_Cyrl_root_size};

static const DialectLabel sr_Latn_prefix_raw[] = {65,108,105,32,110,100,97,32,70,117,110,107,99,105,111,110,97,108,110,111,115,116,114,117,107,116,117,114,97,32,115,99,101,110,97,114,105,106,97,73,32,90,97,32,100,97,116,101,107,115,116,111,110,111,118,97,111,122,97,100,105,110,97,100,106,105,111,32,99,101,110,97,114,105,109,101,114,107,105,99,97,118,105,108,111,98,105,110,97,75,77,111,103,117,79,80,83,99,110,111,115,116,263,110,111,115,116,115,101,32,99,101,112,116};
static const DialectSize sr_Latn_prefix_indexes[] = {0,8,39,89,90,94,95,96,41,58,14,97,102,4,20,56,22,31,77,21,108,2,66,3,6,110,46,52,84,80,73,64,14,2};
static const DialectSize sr_Latn_prefix_sizes[] = {4,14,2,1,4,1,1,1,6,2,2,5,5,4,1,7,1,6,4,18,2,2,2,1,2,4,5,4,5,5,4,2,1,1};
static const DialectSize sr_Latn_i_p1s[] = {0,0,0,10,12,14,16,18,21,24,26,0,0,0,28,0,30,32,0,0,0,0,0,0,0,0,0,0,0,0,34,0,0,0};
static const DialectSize sr_Latn_sizes[] = {0,0,0,2,2,2,2,3,3,2,2,0,0,0,2,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0};
static const DialectValue sr_Latn_values[] = {3,5,1,0,0,0,0,0,0,0,0,5,5,10,0,2,0,0,9,9,6,6,6,11,11,9,2,2,5,7,8,4,8,4};
static const DialectSize sr_Latn_root_size = 9;

static const Dialect sr_Latn_dialect = {sr_Latn_prefix_raw, sr_Latn_prefix_indexes, sr_Latn_prefix_sizes, sr_Latn_i_p1s, sr_Latn_sizes, sr_Latn_values, sr_Latn_root_size};

static const DialectLabel sv_prefix_raw[] = {229,32,109,97,108,108,65,98,115,116,114,97,107,116,32,83,99,101,110,97,114,105,111,66,97,107,103,114,117,110,100,69,71,105,118,101,116,32,77,101,110,32,78,228,114,32,79,99,104,32,82,101,103,101,108,83,103,101,110,115,107,97,112,120,101,109,112,101,108};
static const DialectSize sv_prefix_indexes[] = {6,23,31,32,38,42,46,50,15,56,63,16,0,2};
static const DialectSize sv_prefix_sizes[] = {17,8,1,6,4,4,4,5,1,7,6,7,2,4};
static const DialectSize sv_i_p1s[] = {0,0,10,0,0,0,0,0,12,0,0,14,0,0};
static const DialectSize sv_sizes[] = {0,0,2,0,0,0,0,0,2,0,0,1,0,0};
static const DialectValue sv_values[] = {9,2,0,6,3,11,1,7,0,5,4,8,10,9};
static const DialectSize sv_root_size = 9;

static const Dialect sv_dialect = {sv_prefix_raw, sv_prefix_indexes, sv_prefix_sizes, sv_i_p1s, sv_sizes, sv_values, sv_root_size};

static const DialectLabel ta_prefix_raw[] = {2990,2997,2979,3007,2965,32,2980,3015,2997,3016,2986,3021,2986,3014,3006,2996,3009,2980,3009,32,2986,3021,2986,3015,3006,2980,3009,32,3006,2975,3021,2970,3007,3014,3006,2975,3009,2965,3021,2965,2986,3021,2986,2975,3021,2975,32,2993,3021,2993,3009,2990,3021,32,3015,2994,3009,2990,3021,32,2997,3006,2992,3021,2986,3021,2986,3009,2992,3009,2975,3009,2980,3021,2980,3009,2965,3021,2965,3006,2975,3021,2975,3009,2965,2995,3021,2970,3009,2992,3009,2965,3021,2965,2990,3021,2970,2990,3021,2950,2985,3006,2994,3021,32,2953,2980,3006,2992,2979,2990,3006,2965,82,117,108,101,2949,2958,2980,3007,2993,2985,3021,2984,3007,2994,3016,2990,3016,2965,2995,3007,2994,3021,2986,3007,2985,3021,2985,2979,3007};
static const DialectSize ta_prefix_indexes[] = {113,117,99,105,118,4,119,124,135,0,1,10,94,70,20,28,33,47,54,5,84,87,60};
static const DialectSize ta_prefix_sizes[] = {4,1,6,8,1,1,5,11,7,1,9,10,5,17,8,5,14,7,6,1,3,9,10};
static const DialectSize ta_i_p1s[] = {0,12,0,0,14,16,0,0,0,18,0,0,0,0,0,20,0,0,0,22,0,0,0};
static const DialectSize ta_sizes[] = {0,2,0,0,2,2,0,0,0,2,0,0,0,0,0,2,0,0,0,2,0,0,0};
static const DialectValue ta_values[] = {7,0,3,8,0,0,5,4,2,0,5,10,5,4,11,8,6,1,1,0,4,9,9};
static const DialectSize ta_root_size = 11;

static const Dialect ta_dialect = {ta_prefix_raw, ta_prefix_indexes, ta_prefix_sizes, ta_i_p1s, ta_sizes, ta_values, ta_root_size};

static const DialectLabel th_prefix_raw[] = {3627,3621,3633,3585,3635,3627,3609,3604,3651,3627,3657,32,82,117,108,101,3594,3640,3604,3586,3629,3591,3648,3649,3650,3588,3619,3591,3605,3657,3629,3591,3585,3634,3619,3607,3634,3591,3608,3640,3619,3585,3636,3592,3626,3634,3617,3634,3619,3606,3605,3633,3623,3629,3618,3656,3634,3591,3605,3656,32,3621,3632,32,3626,3619,3640,3611,3648,3627,3605,3640,3585,3634,3619,3603,3660,3626,3619,3657,3634,3591,3586,3629,3591,3648,3627,3605,3640,3585,3634,3619,3603,3660,3588,3623,3634,3617,3639,3656,3629,32,3609,3623,3588,3636,3604,3633,3591,3609,3633,3657,3609,32};
static const DialectSize th_prefix_indexes[] = {12,3,94,16,106,64,22,23,24,28,44,50,68,97,69,58,102,61,77,0};
static const DialectSize th_prefix_sizes[] = {4,9,4,6,8,13,1,1,4,16,6,8,9,5,8,3,5,3,17,4};
static const DialectSize th_i_p1s[] = {0,0,10,12,0,0,14,16,19,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize th_sizes[] = {0,0,2,2,0,0,2,3,2,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue th_values[] = {7,6,0,0,10,9,0,0,0,5,5,4,4,11,8,3,2,1,9,5};
static const DialectSize th_root_size = 9;

static const Dialect th_dialect = {th_prefix_raw, th_prefix_indexes, th_prefix_sizes, th_i_p1s, th_sizes, th_values, th_root_size};

static const DialectLabel te_prefix_raw[] = {3122,3137,3109,3112,3074,3134,3112,3135,32,82,117,108,101,3077,3114,3149,3114,3137,3105,3137,32,3080,32,3114,3120,3135,3128,3149,3109,3135,3108,3135,3122,3147,32,3081,3110,3134,3129,3120,3107,3093,3095,3137,3107,3118,3137,3098,3142,3114,3149,3114,3116,3105,3135,3112,3110,3135,32,3112,3143,3114,3109,3149,3119,3074,3118,3120,3135,3119,3137,32,3128,3112,3149,3112,3135,3125,3143,3126,3074};
static const DialectSize te_prefix_indexes[] = {9,13,21,35,41,42,47,59,66,72,0,2,5};
static const DialectSize te_prefix_sizes[] = {4,8,14,6,1,5,12,7,6,9,2,3,4};
static const DialectSize te_i_p1s[] = {0,0,0,11,12,0,0,0,0,0,0,0,0};
static const DialectSize te_sizes[] = {0,0,0,1,2,0,0,0,0,0,0,0,0};
static const DialectValue te_values[] = {7,10,11,8,0,5,6,2,1,8,4,9,3};
static const DialectSize te_root_size = 10;

static const Dialect te_dialect = {te_prefix_raw, te_prefix_indexes, te_prefix_sizes, te_i_p1s, te_sizes, te_values, te_root_size};

static const DialectLabel tlh_prefix_raw[] = {97,110,116,111,72,97,112,81,108,111,81,98,111,103,104,32,109,97,108,106,97,39,99,104,32,109,101,121,68,97,72,32,103,104,117,39,32,98,101,106,108,117,39,32,110,111,98,108,117,39,32,117,39,109,101,72,32,39,117,116,101,114,98,111,103,104,82,117,108,101,106,32,109,111,39,113,97,83,68,73,39,32,118,97,106,32,99,104,111,118,110,97,116,108,104,32};
static const DialectSize tlh_prefix_indexes[] = {21,28,7,66,13,8,72,6,75,82,0,69,5,51,0,41,0,58,60,9,15,22,4,92,85,25};
static const DialectSize tlh_prefix_sizes[] = {1,16,1,4,2,1,3,1,7,4,1,3,2,9,5,10,1,2,6,13,1,3,1,4,10,3};
static const DialectSize tlh_i_p1s[] = {11,0,13,0,15,17,0,19,0,0,21,0,0,0,0,0,23,25,0,0,0,0,0,0,0,0};
static const DialectSize tlh_sizes[] = {2,0,2,0,2,2,0,2,0,0,2,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0};
static const DialectValue tlh_values[] = {0,6,0,7,0,0,2,0,11,10,0,1,5,5,4,6,0,8,5,5,3,3,5,1,9,4};
static const DialectSize tlh_root_size = 10;

static const Dialect tlh_dialect = {tlh_prefix_raw, tlh_prefix_indexes, tlh_prefix_sizes, tlh_i_p1s, tlh_sizes, tlh_values, tlh_root_size};

static const DialectLabel tr_prefix_raw[] = {86,101,32,214,122,101,108,108,105,107,65,109,97,32,116,97,115,108,97,287,305,75,117,114,97,108,101,114,110,101,107,68,105,121,101,108,105,109,32,107,105,32,69,287,101,114,32,107,105,32,70,97,107,97,116,32,71,101,231,109,105,351,79,32,122,97,109,97,110,32,83,101,110,97,114,121,111};
static const DialectSize tr_prefix_indexes[] = {10,31,42,50,56,21,62,70,0,3,13,27,4,25};
static const DialectSize tr_prefix_sizes[] = {4,11,8,6,6,5,8,7,3,1,8,4,6,3};
static const DialectSize tr_i_p1s[] = {0,0,0,0,0,0,0,11,0,12,0,14,0,0};
static const DialectSize tr_sizes[] = {0,0,0,0,0,0,0,1,0,2,0,1,0,0};
static const DialectValue tr_values[] = {3,6,11,3,2,7,10,8,1,0,9,8,5,4};
static const DialectSize tr_root_size = 10;

static const Dialect tr_dialect = {tr_prefix_raw, tr_prefix_indexes, tr_prefix_sizes, tr_i_p1s, tr_sizes, tr_values, tr_root_size};

static const DialectLabel tt_prefix_raw[] = {82,117,108,101,1042,1241,32,1050,1077,1088,1077,1096,1051,1241,1082,1080,1085,32,1052,1053,1241,1090,1080,1175,1241,1076,1241,32,1198,1210,1241,1084,32,1240,1257,1084,1082,1080,1085,1083,1077,1082,1085,1099,1187,32,1090,1257,1079,1077,1083,1077,1096,1077,1079,1077,1085,1095,1241,1083,1077,1082,1083,1077,1083,1077,1082,1075,1241,1088,32,1084,1084,1072,32,1057,1094,1077,1085,1072,1088,1080,1081,1090,1080,1082,32,1080,1089,1072,1083,1083,1072,1088,1085,1241,1082,1083,1241,1088};
static const DialectSize tt_prefix_indexes[] = {0,4,7,12,18,19,75,28,29,33,87,34,42,54,93,67,82,71};
static const DialectSize tt_prefix_sizes[] = {4,3,5,6,1,9,8,1,4,1,7,8,12,13,7,4,5,4};
static const DialectSize tt_i_p1s[] = {0,0,0,0,11,0,13,14,0,16,0,0,0,0,0,0,0,0};
static const DialectSize tt_sizes[] = {0,0,0,0,2,0,1,2,0,3,0,0,0,0,0,0,0,0};
static const DialectValue tt_values[] = {7,1,2,3,0,10,8,0,1,0,4,5,9,5,4,11,6,3};
static const DialectSize tt_root_size = 10;

static const Dialect tt_dialect = {tt_prefix_raw, tt_prefix_indexes, tt_prefix_sizes, tt_i_p1s, tt_sizes, tt_values, tt_root_size};

static const DialectLabel uk_prefix_raw[] = {1057,1058,1071,1082,1097,1086,32,1090,1088,1091,1082,1090,1091,1088,1072,32,1089,1094,1077,1085,1072,1088,1110,1102,1094,1077,1085,1072,1088,1110,1081,44,32,1097,1086,32,1030,32,1090,1072,1082,1086,1078,32,1044,1072,1085,1086,32,1050,1086,1083,1080,32,1060,1091,1085,1082,1094,1110,1086,1085,1072,1083,1077,32,1077,1088,1077,1076,1091,1084,1086,1074,1072,32,1088,1080,1082,1083,1072,1076,1110,32,1087,1091,1089,1090,1080,1084,1086,82,117,108,101,1040,1053,1077,1093,1072,1081,32,1055};
static const DialectSize uk_prefix_indexes[] = {91,36,95,44,49,96,102,0,1,54,2,37,63,66,76,7,24,14,5,78,84,6,81,52,6,31};
static const DialectSize uk_prefix_sizes[] = {4,2,1,5,5,6,1,1,1,10,5,7,3,9,2,17,7,2,1,4,7,1,3,1,1,5};
static const DialectSize uk_i_p1s[] = {0,0,12,0,0,0,14,16,18,0,0,0,0,0,20,0,0,0,22,24,25,0,0,0,0,0};
static const DialectSize uk_sizes[] = {0,0,2,0,0,0,2,2,2,0,0,0,0,0,2,0,0,0,2,1,2,0,0,0,0,0};
static const DialectValue uk_values[] = {7,1,0,6,11,6,0,0,0,5,11,1,3,2,0,9,8,1,0,8,0,10,10,4,6,6};
static const DialectSize uk_root_size = 11;

static const Dialect uk_dialect = {uk_prefix_raw, uk_prefix_indexes, uk_prefix_sizes, uk_i_p1s, uk_sizes, uk_values, uk_root_size};

static const DialectLabel ur_prefix_raw[] = {82,117,108,101,1575,1580,1576,32,1589,1604,1575,1581,1740,1578,1604,1740,1705,1606,32,1605,1662,1705,1575,1585,1608,1576,1575,1585,32,1705,1740,32,1590,1585,1608,1585,1578,1608,1585,32,1711,1585,32,1579,1575,1604,1740,1722,1726,1585,32,1606,1575,1605,1729,1576,1575,1604,1601,1585,1590,32,1705,1740,1575,32,1587,32,1605,1606,1592,1585,1582,1589,1608,1589,1740,1578,1576,32,1606,1575,1605,1746,32,1705,1575,32,1582,1575,1705,1729};
static const DialectSize ur_prefix_indexes[] = {0,4,55,77,5,72,8,58,14,19,20,21,37,40,43,69,66,48,79,51};
static const DialectSize ur_prefix_sizes[] = {4,1,7,3,3,6,6,8,5,1,1,16,3,3,5,3,6,3,13,4};
static const DialectSize ur_i_p1s[] = {0,13,0,0,0,0,0,0,0,15,17,0,0,0,0,19,0,0,0,0};
static const DialectSize ur_sizes[] = {0,2,0,0,0,0,0,0,0,2,2,0,0,0,0,2,0,0,0,0};
static const DialectValue ur_values[] = {7,0,6,10,11,5,5,6,3,0,0,5,1,6,4,0,2,10,9,8};
static const DialectSize ur_root_size = 12;

static const Dialect ur_dialect = {ur_prefix_raw, ur_prefix_indexes, ur_prefix_sizes, ur_i_p1s, ur_sizes, ur_values, ur_root_size};

static const DialectLabel uz_prefix_raw[] = {1075,1072,1088,32,1084,1084,1086,32,66,101,108,103,105,108,97,110,103,97,110,32,1089,1090,1088,1091,1082,1090,1091,1088,1072,1089,1080,82,117,108,101,1040,1041,1080,1088,1086,1082,32,1042,1072,32,1051,1077,1082,1080,1085,32,1052,1080,1089,1086,1083,1083,1072,1088,1057,1094,1077,1085,1072,1088,1080,1081,1058,1072,1088,1080,1093,1059,1085,1076,1072,32,1060,1091,1085,1082,1094,1080,1086,1085,1072,1083};
static const DialectSize uz_prefix_indexes[] = {8,31,35,36,42,45,51,59,67,72,77,0,4,19};
static const DialectSize uz_prefix_sizes[] = {12,4,1,6,3,6,8,8,5,5,10,4,4,12};
static const DialectSize uz_i_p1s[] = {0,0,12,0,0,0,0,14,0,0,0,0,0,0};
static const DialectSize uz_sizes[] = {0,0,2,0,0,0,0,1,0,0,0,0,0,0};
static const DialectValue uz_values[] = {6,7,0,3,1,3,4,8,2,10,5,11,3,9};
static const DialectSize uz_root_size = 11;

static const Dialect uz_dialect = {uz_prefix_raw, uz_prefix_indexes, uz_prefix_sizes, uz_i_p1s, uz_sizes, uz_values, uz_root_size};

static const DialectLabel vi_prefix_raw[] = {68,7919,32,108,105,7879,117,110,103,32,7889,105,32,99,7843,110,104,236,32,66,67,104,111,32,75,78,104,432,110,103,32,81,117,121,32,116,7855,99,84,86,224,32,105,7871,116,32,237,110,104,32,110,259,110,103,105,32,116,236,110,104,32,104,117,7889,110,103,107,7883,99,104,32,98,7843,110};
static const DialectSize vi_prefix_indexes[] = {19,20,0,24,25,31,38,39,42,10,16,67,16,57,46,11,6,66,56};
static const DialectSize vi_prefix_sizes[] = {1,4,7,1,6,7,1,3,4,7,1,7,3,9,8,2,4,8,10};
static const DialectSize vi_i_p1s[] = {9,0,0,11,0,0,13,0,0,0,16,0,0,0,0,0,18,0,0};
static const DialectSize vi_sizes[] = {2,0,0,2,0,0,3,0,0,0,2,0,0,0,0,0,2,0,0};
static const DialectValue vi_values[] = {0,6,4,0,3,7,0,1,6,2,0,8,10,8,5,11,0,9,9};
static const DialectSize vi_root_size = 8;

static const Dialect vi_dialect = {vi_prefix_raw, vi_prefix_indexes, vi_prefix_sizes, vi_i_p1s, vi_sizes, vi_values, vi_root_size};

static const DialectLabel zh_CN_prefix_raw[] = {21095,26412,21151,33021,21516,26102,22330,26223,24182,19988,24403,32780,19988,32972,26223,35268,21017,37027,20040,22914,23450,35774,22823,32434,82,117,108,101,20294,26159,20363,23376,20551};
static const DialectSize zh_CN_prefix_indexes[] = {24,28,30,32,0,2,4,6,8,10,11,13,15,17,19,20,21,22,22};
static const DialectSize zh_CN_prefix_sizes[] = {4,2,2,1,2,2,2,2,2,1,2,2,2,2,1,1,1,2,2};
static const DialectSize zh_CN_i_p1s[] = {0,0,0,15,18,0,0,19,0,0,0,0,0,0,0,0,0,0,0};
static const DialectSize zh_CN_sizes[] = {0,0,0,3,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
static const DialectValue zh_CN_values[] = {7,3,4,0,8,5,1,8,1,11,1,2,7,10,6,6,6,9,9};
static const DialectSize zh_CN_root_size = 14;

static const Dialect zh_CN_dialect = {zh_CN_prefix_raw, zh_CN_prefix_indexes, zh_CN_prefix_sizes, zh_CN_i_p1s, zh_CN_sizes, zh_CN_values, zh_CN_root_size};

static const DialectLabel ml_prefix_raw[] = {3381,3391,3382,3399,3383,3364,3390,3385,3354,3376,3405,3375,3364,3405,3364,3391,3368,3405,3377,3398,32,3376,3394,3370,3376,3399,3350,3337,3366,3390,3385,3376,3363,3353,3405,3353,3454,3342,3370,3405,3370,3399,3390,3454,3346,3370,3405,3370,3330,3368,3370,3376,3330,3351,3330,3384,3391,3375,3374,3330,3453,3349,3391,3375,3364,3405,3349,3405,3383,3399,3382,3405,3354,3390,3364,3405,3364,3378,3330,3391,3368,3405,3368,3398};
static const DialectSize ml_prefix_indexes[] = {27,37,44,16,23,51,55,56,60,66,70,79,0,6};
static const DialectSize ml_prefix_sizes[] = {10,7,5,1,1,4,1,4,6,4,9,5,6,21};
static const DialectSize ml_i_p1s[] = {0,0,0,8,10,0,13,0,0,0,0,0,0,0};
static const DialectSize ml_sizes[] = {0,0,0,2,3,0,2,0,0,0,0,0,0,0};
static const DialectValue ml_values[] = {4,11,1,0,0,8,0,7,6,3,2,10,5,9};
static const DialectSize ml_root_size = 7;

static const Dialect ml_dialect = {ml_prefix_raw, ml_prefix_indexes, ml_prefix_sizes, ml_i_p1s, ml_sizes, ml_values, ml_root_size};

static const DialectLabel zh_TW_prefix_raw[] = {20294,26159,20363,23376,20551,21127,26412,21151,33021,21516,26178,22580,26223,30070,32780,19988,32972,26223,37027,40636,22914,23450,35373,22823,32177,82,117,108,101,20006,19988};
static const DialectSize zh_TW_prefix_indexes[] = {25,29,0,2,4,5,7,9,11,13,14,16,18,20,21,22,23,23};
static const DialectSize zh_TW_prefix_sizes[] = {4,2,2,2,1,2,2,2,2,1,2,2,2,1,1,1,2,2};
static const DialectSize zh_TW_i_p1s[] = {0,0,0,0,14,17,0,0,18,0,0,0,0,0,0,0,0,0};
static const DialectSize zh_TW_sizes[] = {0,0,0,0,3,1,0,0,1,0,0,0,0,0,0,0,0,0};
static const DialectValue zh_TW_values[] = {7,1,3,4,0,8,5,1,8,11,1,2,10,6,6,6,9,9};
static const DialectSize zh_TW_root_size = 13;

static const Dialect zh_TW_dialect = {zh_TW_prefix_raw, zh_TW_prefix_indexes, zh_TW_prefix_sizes, zh_TW_i_p1s, zh_TW_sizes, zh_TW_values, zh_TW_root_size};

static const DialectLabel mr_prefix_raw[] = {2360,2369,2357,2367,2343,2366,2352,2381,2358,2381,2357,2349,2370,2350,2368,2352,2332,2340,2342,2367,2354,2375,2354,2381,2351,2366,32,2346,2381,2352,2350,2366,2339,2375,32,2346,2357,2376,2358,2367,2359,2381,2335,2381,2351,2360,2375,2330,32,2306,2340,2369,32,2367,2342,2371,2358,2381,2351,2375,2357,2381,2361,2366,32,2310,2339,2367,32,2352,2370,2346,2352,2375,2326,2366,2313,2342,2366,2361,2352,2339,32,2344,2367,2351,2350,2327,32};
static const DialectSize mr_prefix_indexes[] = {65,76,16,17,18,83,27,86,36,0,6,59,45,59,81,6,5,49,53,68};
static const DialectSize mr_prefix_sizes[] = {4,6,1,1,17,4,1,3,9,6,1,6,4,6,2,1,10,4,6,8};
static const DialectSize mr_i_p1s[] = {0,0,11,13,0,0,15,0,0,0,0,0,0,0,0,18,0,0,20,0};
static const DialectSize mr_sizes[] = {0,0,2,2,0,0,3,0,0,0,0,0,0,0,0,2,0,0,1,0};
static const DialectValue mr_values[] = {1,4,0,0,6,7,0,10,5,5,6,11,1,10,3,0,2,3,8,9};
static const DialectSize mr_root_size = 10;

static const Dialect mr_dialect = {mr_prefix_raw, mr_prefix_indexes, mr_prefix_sizes, mr_i_p1s, mr_sizes, mr_values, mr_root_size};

static const DialectLabel amh_prefix_raw[] = {4637,4659,4620,4677,4853,4632,32,4609,4756,4723,4840,4732,32,4752,4667,4634,4936,4616,4872,4813,32,4853,4653,4874,4725,4720,4768,4709,4752,4725,4829,4653,4829,4653,4656,4896,32,4814,4733,4936,4616,4872,4813,32,4661,4651,4613,4877,4757,32,4773,4755,32,4776,4826,4843,32,4608,4659,4709,4609,4755,4724,4632};
static const DialectSize amh_prefix_indexes[] = {60,46,5,0,44,3,50,53,10,47,6,37,11,13,37,15,25,26,30,56,34,39};
static const DialectSize amh_prefix_sizes[] = {3,2,1,3,2,7,3,4,1,3,1,2,2,2,2,10,1,4,4,4,3,7};
static const DialectSize amh_i_p1s[] = {11,0,13,15,0,0,0,0,16,0,18,0,0,20,0,0,21,0,0,0,0,0};
static const DialectSize amh_sizes[] = {2,0,2,1,0,0,0,0,2,0,2,0,0,1,0,0,2,0,0,0,0,0};
static const DialectValue amh_values[] = {8,7,0,8,5,2,1,10,0,3,0,4,11,2,4,5,0,9,9,2,6,5};
static const DialectSize amh_root_size = 10;

static const Dialect amh_dialect = {amh_prefix_raw, amh_prefix_indexes, amh_prefix_sizes, amh_i_p1s, amh_sizes, amh_values, amh_root_size};

static const LanguageLabel language_trie_prefix_raw[] = {116,107,45,83,99,111,117,115,101,67,121,114,108,111,108,100,76,97,116,110,114,45,115,116,120,118,105,97,117,108,104,98,99,121,45,71,66,67,78,84,87,102,103,106,109,112,105,114,97,116,101,122,104,45,111};
static const LanguageSize language_trie_prefix_indexes[] = {17,31,4,15,8,41,42,30,26,43,1,12,44,19,45,11,7,0,6,25,51,41,44,19,11,22,51,8,42,44,7,17,7,33,17,8,12,44,19,5,7,0,17,26,11,17,43,12,8,26,11,0,6,15,7,0,17,25,17,19,5,0,6,25,1,12,19,11,8,12,5,17,12,0,5,6,1,12,20,25,17,8,30,29,11,0,1,11,51,37,39,30,2,9,16,9,16,3,27,12,13,45,23};
static const LanguageSize language_trie_prefix_sizes[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,2,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2,1,1,1,1,1,2,2,1,1,4,4,4,4,6,2,3,3,6,2};
static const LanguageSize language_trie_i_p1s[] = {22,28,32,35,37,43,46,49,54,57,59,62,65,69,72,75,77,81,87,0,90,0,92,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,93,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,0,0,0,98,0,0,0,0,0,0,0,0,0,0};
static const LanguageSize language_trie_sizes[] = {6,4,3,2,6,3,3,5,3,2,3,3,4,3,3,2,4,6,3,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0};
static const LanguageValue language_trie_values[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,0,77,52,79,53,54,55,56,57,58,59,60,61,62,0,65,66,68,67,69,70,71,72,73,74,76,78,80,0,50,51,63,64,19,20,21,22,23,24};
static const LanguageSize language_trie_root_size = 21;

static const Language language = {language_trie_prefix_raw, language_trie_prefix_indexes, language_trie_prefix_sizes, language_trie_i_p1s, language_trie_sizes, language_trie_values, language_trie_root_size};

const Dialect *Dialect_for(LanguageValue language) {
  switch (language) {
  case 1: return &af_dialect;
  case 2: return &am_dialect;
  case 3: return &an_dialect;
  case 4: return &ar_dialect;
  case 5: return &ast_dialect;
  case 6: return &az_dialect;
  case 7: return &be_dialect;
  case 8: return &bg_dialect;
  case 9: return &bm_dialect;
  case 10: return &bs_dialect;
  case 11: return &ca_dialect;
  case 12: return &cs_dialect;
  case 13: return &cy_GB_dialect;
  case 14: return &da_dialect;
  case 15: return &de_dialect;
  case 16: return &el_dialect;
  case 17: return &em_dialect;
  case 18: return &en_dialect;
  case 19: return &en_Scouse_dialect;
  case 20: return &en_au_dialect;
  case 21: return &en_lol_dialect;
  case 22: return &en_old_dialect;
  case 23: return &en_pirate_dialect;
  case 24: return &en_tx_dialect;
  case 25: return &eo_dialect;
  case 26: return &es_dialect;
  case 27: return &et_dialect;
  case 28: return &fa_dialect;
  case 29: return &fi_dialect;
  case 30: return &fr_dialect;
  case 31: return &ga_dialect;
  case 32: return &gj_dialect;
  case 33: return &gl_dialect;
  case 34: return &he_dialect;
  case 35: return &hi_dialect;
  case 36: return &hr_dialect;
  case 37: return &ht_dialect;
  case 38: return &hu_dialect;
  case 39: return &id_dialect;
  case 40: return &is_dialect;
  case 41: return &it_dialect;
  case 42: return &ja_dialect;
  case 43: return &jv_dialect;
  case 44: return &ka_dialect;
  case 45: return &kn_dialect;
  case 46: return &ko_dialect;
  case 47: return &lt_dialect;
  case 48: return &lu_dialect;
  case 49: return &lv_dialect;
  case 50: return &mk_Cyrl_dialect;
  case 51: return &mk_Latn_dialect;
  case 52: return &mn_dialect;
  case 53: return &ne_dialect;
  case 54: return &nl_dialect;
  case 55: return &no_dialect;
  case 56: return &pa_dialect;
  case 57: return &pl_dialect;
  case 58: return &pt_dialect;
  case 59: return &ro_dialect;
  case 60: return &ru_dialect;
  case 61: return &sk_dialect;
  case 62: return &sl_dialect;
  case 63: return &sr_Cyrl_dialect;
  case 64: return &sr_Latn_dialect;
  case 65: return &sv_dialect;
  case 66: return &ta_dialect;
  case 67: return &th_dialect;
  case 68: return &te_dialect;
  case 69: return &tlh_dialect;
  case 70: return &tr_dialect;
  case 71: return &tt_dialect;
  case 72: return &uk_dialect;
  case 73: return &ur_dialect;
  case 74: return &uz_dialect;
  case 75: return &vi_dialect;
  case 76: return &zh_CN_dialect;
  case 77: return &ml_dialect;
  case 78: return &zh_TW_dialect;
  case 79: return &mr_dialect;
  case 80: return &amh_dialect;
  default: return &en_dialect;
  }
}

IMPL_ARRAY_TRIE(Dialect, DialectLabel, DialectSize, DialectValue);

IMPL_ARRAY_TRIE(Language, LanguageLabel, LanguageSize, LanguageValue);