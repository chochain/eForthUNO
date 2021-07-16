///
/// @file eforth_rom.c
/// @brief eForth ROM (loaded in Arduino Flash Memory)
/// @attention 8K max ROM before changing FORTH_ROM_SZ in eforth_core.h 
///
#include "eforth_core.h"

const U32 forth_rom[] PROGMEM = {
0x000fcc06,0x48030000,0x0004444c,0x04000620,0x4e415053,0x0f200204,0x493e0300,0x2004044e, // 0000 ___..._HLD_. _._SPAN__ _._>IN__ 
0x23040019,0x04424954,0x00222006,0x49542704,0x20100442,0x4204002c,0x04455341,0x00362012, // 0020 _._#TIB__ "._'TIB__ ,._BASE__ 6.
0x04504302,0x00402014,0x4e4f4307,0x54584554,0x48201604,0x414c0400,0x18045453,0x05005520, // 0040 _CP__ @._CONTEXT__ H._LAST__ U._
0x41564527,0x201a044c,0x2706005f,0x524f4241,0x201c0454,0x7403006a,0x1e04706d,0x02007620, // 0060 'EVAL__ _._'ABORT__ j._tmp__ v._
0x20044c42,0x04007f00,0x4c4c4543,0x87000204,0x4f4e0300,0x00910050,0x45594203,0x03009801, // 0080 BL_ ._._CELL__._._NOP._._BYE__._
0x0258523f,0x5403009f,0xa6032158,0x6f640500,0x044e4f43,0x640500ad,0x54494c6f,0x0600b605, // 00a0 ?RX__._TX!__._doCON__._doLIT__._
0x494c6f64,0xbf065453,0x4e450500,0x06524554,0x450400c9,0x07544958,0x450700d2,0x55434558, // 00c0 doLIST__._ENTER__._EXIT__._EXECU
0xda084554,0x6f640600,0x5458454e,0x0700e509,0x6172623f,0x0a68636e,0x620600ef,0x636e6172, // 00e0 TE__._doNEXT__._?branch__._branc
0x00fa0b68,0x040c2101,0x0d400101,0x43020109,0x010e0e21,0x0f404302,0x31020114,0x011a102b, // 0100 h__._!____@____C!____C@____1+___
0x112d3102,0x52020120,0x0126123e,0x13405202,0x3e02012c,0x01321452,0x4f524404,0x01381750, // 0120 _1-_ __R>_&__R@_,__>R_2__DROP_8_
0x50554403,0x04014018,0x50415753,0x04014719,0x5245564f,0x02014f1a,0x571b3c30,0x4e410301, // 0140 _DUP_@__SWAP_G__OVER_O__0<_W__AN
0x015d1c44,0x1d524f02,0x58030164,0x6a1e524f,0x4d550301,0x01711f2b,0x50454405,0x78204854, // 0160 D_]__OR_d__XOR_j__UM+_q__DEPTH x
0x443f0401,0x81215055,0x4f520301,0x01892254,0x233c3c02,0x3e020190,0x0196243e,0x9c252b01, // 0180 __?DUP!___ROT"___<<#___>>$___+%_
0x4e490601,0x54524556,0x0601a126,0x4147454e,0xab274554,0x283e0101,0x2d0101b5,0x0301ba29, // 01a0 __INVERT&___NEGATE'___>(___-)___
0x2a534241,0x3d0101bf,0x0201c62b,0xcb2c3c55,0x2d3c0101,0x550601d1,0x4f4d2f4d,0x01d62e44, // 01c0 ABS*___=+___U<,___<-___UM/MOD.__
0x444f4d03,0x0101e031,0x01e7322f,0x2a4d5503,0x0101ec33,0x01f3342a,0x352a4d02,0x500401f8, // 01e0 _MOD1___/2___UM*3___*4___M*5___P
0x384b4349,0x2b0201fe,0x02063921,0x454e4407,0x45544147,0x05020c3c,0x41564f44,0x02173d52, // 0200 ICK8___+!9___DNEGATE<___DOVAR=__
0x3e2b4402,0x44020220,0x02263f2d,0x52454804,0x00430645,0x00d7010b,0x5003022c,0x31064441, // 0220 _D+> __D-?&__HERE_C.___.,__PAD_1
0x2000bc02,0xd7019e00,0x05023a00,0x4c4c4543,0x008c062b,0x00d7019e,0x4305024b,0x2d4c4c45, // 0240 __. .___.:__CELL+__.___.K__CELL-
0xbc008c06,0x5a00d701,0x45430502,0x06534c4c,0x01f5008c,0x026900d7,0x55443204,0x01540650, // 0260 __.___.Z__CELLS__.___.i__2DUP_T_
0x00d70154,0x32050278,0x504f5244,0x3d013d06,0x8600d701,0x4d2f0402,0x7d06444f,0x3501e902, // 0280 T__.x__2DROP_=_=__.___/MOD_}___5
0x2901e401,0x9500d701,0x2f2a0502,0x06444f4d,0x01fb0135,0x01dd0129,0x02a900d7,0x062f2a02, // 02a0 ___)__.___*/MOD_5___)____.___*/_
0x014c02af,0x00d7013d,0x320202bc,0x01440621,0x008c0135,0x0106019e,0x01060129,0x02ca00d7, // 02c0 __L_=__.___2!_D_5__.____)____.__
0x06403202,0x01350144,0x0129010b,0x019e008c,0x00d7010b,0x570602e0,0x49485449,0x0154064e, // 02e0 _2@_D_5___)__._____.___WITHIN_T_
0x013501bc,0x012901bc,0x00d701ce,0x430502f6,0x544e554f,0x1d014406,0x17014c01,0x0e00d701, // 0300 __5___)____.___COUNT_D___L____._
0x414d0303,0x027d0658,0x00f701d3,0x014c0330,0x00d7013d,0x4d030321,0x7d064e49,0xf701b702, // 0320 __MAX_}____.0_L_=__.!__MIN_}____
0x4c034500,0xd7013d01,0x05033600,0x564f4d43,0x01350645,0x03680101,0x01170154,0x01110154, // 0340 .E_L_=__.6__CMOVE_5___h_T___T___
0x011d0135,0x011d0129,0x035800ec,0x00d7028c,0x4d04034b,0x0645564f,0x01e9008c,0x01010135, // 0360 5___)____.X____.K__MOVE__.__5___
0x01540392,0x0154010b,0x01350106,0x01290251,0x00ec0251,0x028c0382,0x037200d7,0x4c494604, // 0380 __T___T___5_Q_)_Q__._____.r__FIL
0x014c064c,0x014c0135,0x03b20101,0x0111027d,0x00ec011d,0x028c03ac,0x039c00d7,0x58454803, // 03a0 L_L_5_L_____}______._____.___HEX
0x1000bc06,0x06003b00,0xbc00d701,0x45440703,0x414d4943,0x00bc064c,0x003b000a,0x00d70106, // 03c0 __._.;.___.___DECIMAL__._.;.___.
0x440503cd,0x54494749,0x0900bc06,0xd3015400,0x0700bc01,0x9e016100,0x3000bc01,0xd7019e00, // 03e0 ___DIGIT__._.T____._.a____.0.___
0x0703e200,0x52545845,0x06544341,0x000000bc,0x01dd014c,0x03e8014c,0x040300d7,0x06233c02, // 0400 .___EXTRACT__...L___L____.___<#_
0x000a023e,0x00d70106,0x4804041c,0x06444c4f,0x010b000a,0x01440123,0x0106000a,0x00d70111, // 0420 >__.___.___HOLD__.__#_D__._____.
0x2301042a,0x0b003b06,0x2f040b01,0x4200d704,0x53230204,0x44044406,0x6100f701,0x55010104, // 0440 *__#_;.____/__.B__#S_D_D__.a___U
0x5100d704,0x49530404,0x5a064e47,0x7700f701,0x2d00bc04,0xd7042f00,0x02046500,0x3d063e23, // 0460 __.Q__SIGN_Z__.w__.-./__.e__#>_=
0x0b000a01,0x54023e01,0xd701bc01,0x03047b00,0x06727473,0x01350144,0x041f01c3,0x01290454, // 0480 __.__>_T____.{__str_D_5_____T_)_
0x047e046a,0x048f00d7,0x70757706,0x06726570,0x5f5f00bc,0x00d70161,0x3e0604a8,0x65707075, // 04a0 j_~__.___wupper__.__a__.___>uppe
0x01440672,0x006100bc,0x007b00bc,0x00f702fd,0x00bc04d8,0x0161005f,0x04ba00d7,0x47494406, // 04c0 r_D__.a._.{.___.___._.a__.___DIG
0x063f5449,0x04c10135,0x003000bc,0x00bc01bc,0x01540009,0x00f701d3,0x00bc050a,0x01bc0007, // 04e0 IT?_5____.0.___._.T____.___._.__
0x00bc0144,0x01d3000a,0x01440167,0x01ce0129,0x04dc00d7,0x4d554e07,0x3f524542,0x0b003b06, // 0500 D__._.__g_D_)____.___NUMBER?_;._
0xbc013501,0x54000000,0x54031401,0xbc011701,0xc8002400,0x4300f701,0x4c03c005,0x4c011d01, // 0520 _5__...T___T____.$.___.C___L___L
0x54012301,0xbc011701,0xc8002d00,0x4c013501,0xbc012f01,0x2f014c01,0x86019e01,0xa500f701, // 0540 _#_T____.-.__5_L_/___L_/______._
0x35012305,0x35014401,0x3b011701,0xe3010b00,0x9700f704,0x3b014c05,0xf5010b00,0x29019e01, // 0560 _#_5_D_5___;._____.__L_;.______)
0xec011d01,0x3d056500,0xf7012f01,0xb2059100,0x01014c01,0x2905a301,0x8c012901,0xbc028c02, // 0580 ____.e_=_/__.____L_____)_)______
0x44000000,0x8c012901,0x3b012902,0xd7010600,0x03051400,0x06424954,0x010b0031,0x05b300d7, // 05a0 ...D_)___)_;.___.___TIB_1.___.__
0x454b3f04,0x00a30659,0x05c000d7,0x59454b03,0xf705c506,0xd705d100,0x0405cc00,0x54494d45, // 05c0 _?KEY__._.___KEY____.___.___EMIT
0xd700aa06,0x0205db00,0x3506485e,0x29015401,0x54014c01,0xf7016e01,0xbc060d00,0xe0000800, // 05e0 __._.___^H_5_T_)_L_T_n__.___._._
0x82012305,0xbc05e000,0xe0000800,0xe700d705,0x50530505,0x06454341,0x05e00082,0x061100d7, // 0600 _#__.___._.___.___SPACE__.___.__
0x41484305,0x4c065352,0x0000bc01,0x35032500,0x39010101,0xe0014406,0x3500ec05,0xd7013d06, // 0620 _CHARS_L__...%_5___9_D____.5_=__
0x05062000,0x4148433e,0x00bc0652,0x0161007f,0x00bc0144,0x0082007f,0x00f702fd,0x013d0664, // 0640 . __>CHAR__._.a_D__._._.___.d_=_
0x005f00bc,0x064300d7,0x41505306,0x06534543,0x06260082,0x066800d7,0x50595404,0x01350645, // 0660 _._._.C__SPACES__.&__.h__TYPE_5_
0x068a0101,0x06490314,0x00ec05e0,0x013d0684,0x067800d7,0x06524302,0x000a00bc,0x000d00bc, // 0680 ______I____.__=__.x__CR__._._._.
0x05e005e0,0x069400d7,0x246f6403,0x2f012906,0x14012901,0x35019e03,0x35014c01,0xa800d701, // 06a0 _____.___do$_)_/_)_____5_L_5__._
0x22240306,0x06ac067c,0x06c100d7,0x7c222e03,0x1406ac06,0xd7067d03,0x0206cc00,0x3506522e, // 06c0 __$"|____.___."|_____}__.___.R_5
0x29049301,0xbc015401,0x7d066f01,0xdb00d706,0x2e550306,0x01350652,0x0454041f,0x0129047e, // 06e0 ___)_T___o_}__.___U.R_5___T_~_)_
0x01bc0154,0x067d066f,0x06f100d7,0x062e5502,0x0454041f,0x0617047e,0x00d7067d,0x2e01070c, // 0700 T___o_}__.___U.___T_~___}__.___.
0x0b003b06,0x0a00bc01,0xf7016e00,0x0f073300,0x9300d707,0x7d061704,0x1e00d706,0x063f0107, // 0720 _;.___._.n__.3____.____}__.___?_
0x0720010b,0x073d00d7,0x61702807,0x29657372,0x11007a06,0x35015401,0xf7014401,0x2307d900, // 0740 __ __.=__(parse)_z.__T_5_D__.__#
0x17007a01,0xc8008201,0x9300f701,0x82013507,0x17015400,0x5a01bc01,0xf701a801,0x1d079100, // 0760 _z.___.___.__5__.T_____Z____.___
0x6f00ec01,0x3d012907,0x0000bc01,0xd7014400,0x54012900,0x35014c01,0x17007a01,0x17015401, // 0780 __.o_)_=__...D__.)_T_L_5_z.__T__
0x7a01bc01,0x82011700,0xf701c800,0x5a07b100,0xc300f701,0xec011d07,0x44079900,0x01013501, // 07a0 ___z.___.___.__Z__._____.__D_5__
0x2907cd01,0x44013d01,0x35011d01,0xbc015401,0x29012901,0xd701bc01,0x29015400,0xd701bc01, // 07c0 ___)_=_D___5_T___)_)____.T_)____
0x05074800,0x4b434150,0x01440624,0x027d0135,0x011d0111,0x0351014c,0x00d70129,0x500507e3, // 07e0 .H__PACK$_D_5_}_____L_Q_)__.___P
0x45535241,0xb7013506,0x0b001d05,0x27019e01,0x1d010b00,0xbc010b00,0x50012901,0x09001d07, // 0800 ARSE_5____.____'.___.____)_P__._
0xfe00d702,0x4f540507,0x064e454b,0x08040082,0x001f00bc,0x0231033a,0x07e90251,0x082500d7, // 0820 __.___TOKEN__.___._.:_1_Q____.%_
0x524f5704,0x08040644,0x02510231,0x00d707e9,0x4e050840,0x3e454d41,0xbc031406,0x61001f00, // 0840 _WORD___1_Q____.@__NAME>____._.a
0xd7019e01,0x05085200,0x454d4153,0x0135063f,0x0101027d,0x014408a6,0x04c10117,0x011d0135, // 0860 ____.R__SAME?_5_}_____D_____5___
0x0144014c,0x04c10117,0x011d0135,0x0129014c,0x01bc0129,0x00f70186,0x012908a6,0x0135013d, // 0880 L_D_____5___L_)_)______.__)_=_5_
0x0129028c,0x00ec00d7,0x028c0876,0x000000bc,0x086700d7,0x6e696604,0x014c0664,0x01170144, // 08a0 __)__._.v____..._.g__find_L_D___
0x0106007a,0x010b0144,0x02510135,0x010b014c,0x00f70144,0x0144090a,0x00bc010b,0x0161ff3f, // 08c0 z.__D___5_Q_L___D__.__D____.?_a_
0x012f04af,0x016e04af,0x08f600f7,0x00bc0251,0x0101ffff,0x02510906,0x010b007a,0x01440123, // 08e0 __/___n__.__Q__.______Q_z.__#_D_
0x090600f7,0x0101086d,0x01290916,0x014c013d,0x014c0260,0x00f700d7,0x02600922,0x01010260, // 0900 _.__m_____)_=_L_`_L__._."_`_`___
0x012908ce,0x014c013d,0x0260013d,0x08580144,0x00d7014c,0x4e0508b4,0x3f454d41,0xb9005006, // 0920 __)_=_L_=_`_D_X_L__.___NAME?_P._
0x3600d708,0x41540309,0x01440650,0x015405e0,0x011d0111,0x094500d7,0x41546b04,0x01440650, // 0940 __.6__TAP_D___T______.E__kTAP_D_
0x000d00bc,0x0154016e,0x000a00bc,0x0161016e,0x098a00f7,0x000800bc,0x00f7016e,0x00820986, // 0960 _._.n_T__._.n_a__.___._.n__.___.
0x01010949,0x05ea0988,0x013d00d7,0x013d014c,0x00d70144,0x61060958,0x70656363,0x01540674, // 0980 I________.=_L_=_D__.X__accept_T_
0x0154019e,0x016e027d,0x09ca00f7,0x014405d0,0x01bc0082,0x005f00bc,0x00f701ce,0x094909c4, // 09a0 __T_}_n__.____D__.___._.___.__I_
0x09c60101,0x0101095d,0x013d09a4,0x01bc0154,0x099600d7,0x50584506,0x06544345,0x0014099d, // 09c0 ____]_____=_T____.___EXPECT____.
0x013d0106,0x09d400d7,0x45555105,0xb7065952,0x8000bc05,0x27099d00,0x3d010600,0x0000bc01, // 09e0 __=__.___QUERY____._.__'.__=__..
0x06001d00,0xe800d701,0x45400809,0x55434558,0x0b064554,0xf7018601,0xe20a1d00,0x0900d700, // 0a00 ._.___.___@EXECUTE______.___._._
0x4241050a,0x0654524f,0x0a120071,0x61060a21,0x74726f62,0x00f70622,0x06ac0a42,0x067d0314, // 0a20 __ABORT_q.__!__abort"__.B_____}_
0x06ac0a27,0x00d7013d,0x45050a2e,0x524f5252,0x14061706,0xbc067d03,0xe0003f00,0x1b00bc05, // 0a40 '___=__..__ERROR_____}__.?.___._
0x9705e000,0x4a0a2706,0x49240a0a,0x5245544e,0x54455250,0x86093c06,0x9900f701,0xbc01170a, // 0a60 .____'_J__$INTERPRET_<____._____
0x61004000,0x0d0a3501,0x6d6f6320,0x656c6970,0x6c6e6f20,0xd700e279,0xf7051c00,0xd70aa500, // 0a80 .@.a_5__ compile only_._.___.___
0xa7010100,0x690a500a,0x065b810a,0x0a7400bc,0x01060065,0x0aa900d7,0x4b4f2e03,0xbc069706, // 0aa0 .____P_i__[__.t_e.___.___.OK____
0x650a7400,0xc8010b00,0xe800f701,0xbc017e0a,0x3a000300,0x2f013503,0x20020301,0xd700ec07, // 0ac0 .t_e._____.__~__._.:_5_/___ __._
0x0406d00a,0x3e6b6f20,0x0ab800d7,0x41564504,0x082b064c,0x01170144,0x0b0400f7,0x0a120065, // 0ae0 ____ ok>_.___EVAL_+_D____.__e.__
0x0af20101,0x0abc013d,0x0aec00d7,0x49555104,0x00bc0654,0x003124c0,0x0aab0106,0x0af109ee, // 0b00 ____=____.___QUIT__._$1.________
0x0b1c0101,0x430c0b0c,0x49504d4f,0x4f2d454c,0x06594c4e,0x004000bc,0x010b005a,0x00d70209, // 0b20 _______COMPILE-ONLY__.@.Z._____.
0x49090b26,0x44454d4d,0x45544149,0x8000bc06,0x0b005a00,0xd7020901,0x010b4200,0x0231062c, // 0b40 &__IMMEDIATE__._.Z._____.B__,_1_
0x02510144,0x01060043,0x00d70106,0x43020b5b,0x0231062c,0x011d0144,0x01060043,0x00d70111, // 0b60 D_Q_C._____.[__C,_1_D___C._____.
0x41050b6e,0x544f4c4c,0x09004306,0x8200d702,0x553f070b,0x5551494e,0x01440645,0x0186093c, // 0b80 n__ALLOT_C.___.___?UNIQUE_D_<___
0x0bb900f7,0x00bc0314,0x0161001f,0x067d0617,0x200606d0,0x65446572,0xd7013d66,0x030b9100, // 0ba0 _._____._.a___}____ reDef=__.___
0x066e2c24,0x010b0144,0x0be800f7,0x01440b99,0x00430858,0x01440106,0x0106005a,0x00500260, // 0bc0 $,n_D____.____D_X_C.__D_Z.__`_P.
0x014c010b,0x00d70106,0x0bbf0a50,0x2b062701,0xf7093c08,0xd70bf900,0xec0a5000,0x494c870b, // 0be0 __L____.P____'_+_<__.___.P____LI
0x41524554,0x00bc064c,0x0b5d00bc,0x00d70b5d,0x5b890bfd,0x504d4f43,0x5d454c49,0x5d0bee06, // 0c00 TERAL__._.]_]__.___[COMPILE]___]
0x1200d70b,0x4f43070c,0x4c49504d,0x01290645,0x010b0144,0x02510b5d,0x00d70135,0x24080c25, // 0c20 __.___COMPILE_)_D___]_Q_5__.%__$
0x504d4f43,0x06454c49,0x0186093c,0x0c6600f7,0x00bc010b,0x01610080,0x0c6200f7,0x010100e2, // 0c40 COMPILE_<____.f____._.a__.b__.__
0x0b5d0c64,0x051c00d7,0x0c7000f7,0x00d70c05,0x0c3e0a50,0x45564f05,0x5a065452,0x50010b00, // 0c60 d_]__.___.p____.P_>__OVERT_Z.__P
0xd7010600,0x010c7400,0x00bc065d,0x00650c47,0x00d70106,0x3a010c87,0xc3082b06,0xbc0c890b, // 0c80 .___.t__]__.G_e.___.___:_+______
0x71000600,0x9600d70b,0x063b810c,0x00d700bc,0x0aab0b5d,0x00d70c7a,0x46060ca9,0x4547524f, // 0ca0 ._.q__.___;__._.]___z__.___FORGE
0x082b0654,0x0186093c,0x0ce400f7,0x01440260,0x01060043,0x0144010b,0x01060050,0x0106005a, // 0cc0 T_+_<____.__`_D_C.____D_P.__Z.__
0x00d7013d,0x0cba0a50,0x444f4304,0x082b0645,0x0c7a0bc3,0x0ce800d7,0x45524306,0x06455441, // 0ce0 =__.P____CODE_+___z__.___CREATE_
0x00bc0ced,0x0b71003d,0x0cf800d7,0x52415608,0x4c424149,0x0cff0645,0x000000bc,0x00d70b5d, // 0d00 ___.=.q__.___VARIABLE____...]__.
0x43080d0c,0x54534e4f,0x06544e41,0x00bc0ced,0x0b710004,0x00d70b5d,0x2e820d22,0x00bc0628, // 0d20 ___CONSTANT____._.q_]__."__.(__.
0x08040029,0x00d7067d,0x5c810d3a,0x0a00bc06,0x3d084500,0x4a00d701,0x0628810d,0x002900bc, // 0d40 ).__}__.:_____._.E_=__.J__(__.).
0x028c0804,0x0d5900d7,0x45484185,0x2d064441,0x3101010c,0x0000bc02,0xd70b5d00,0x850d6800, // 0d60 _____.Y__AHEAD_-___1__...]__.h__
0x49474542,0x0231064e,0x0d7f00d7,0x41474185,0x2d064e49,0x5d01010c,0x8c00d70b,0x4e55850d, // 0d80 BEGIN_1__.___AGAIN_-___]__.___UN
0x064c4954,0x00f70c2d,0x00d70b5d,0x49820d9d,0x0c2d0646,0x023100f7,0x000000bc,0x00d70b5d, // 0da0 TIL_-__.]__.___IF_-__.1__...]__.
0x54840dae,0x064e4548,0x014c0231,0x00d70106,0x45840dc2,0x0645534c,0x014c0d6e,0x00d70dc7, // 0dc0 ___THEN_1_L____.___ELSE_n_L____.
0x57850dd2,0x454c4948,0x4c0db106,0xe200d701,0x4857840d,0xb1064e45,0xd701540d,0x860df100, // 0de0 ___WHILE___L__.___WHEN___T__.___
0x45504552,0x92065441,0xd70dc70d,0x830dff00,0x06524f46,0x01350c2d,0x00d70231,0x41830e0f, // 0e00 REPEAT______.___FOR_-_5_1__.___A
0x3d065446,0x310d6e01,0xd7014c02,0x840e1e00,0x5458454e,0xec0c2d06,0xd70b5d00,0x030e2f00, // 0e20 FT_=_n_1_L__.___NEXT_-__.]__./__
0x06222c24,0x002200bc,0x03140845,0x0043019e,0x00d70106,0x41860e3f,0x54524f42,0x00bc0622, // 0e40 $,"__.".E_____C.___.?__ABORT"__.
0x02310a35,0x0e430106,0x0e5600d7,0x06222482,0x06c500bc,0x01060231,0x00d70e43,0x2e820e6c, // 0e60 5_1___C__.V__$"__.__1___C__.l__.
0x00bc0622,0x023106d0,0x0e430106,0x0e7e00d7,0x2b6d6403,0xbc015406,0xf5000500,0xbc013506, // 0e80 "__.__1___C__.~__dm+_T__._.__5__
0xe0003a00,0xb5010105,0x0b01440e,0x0500bc01,0x5106f500,0xa900ec02,0x9000d70e,0x5544040e, // 0ea0 .:.______D____._.__Q__.___.___DU
0x3b06504d,0x35010b00,0xbc03c001,0x9e001f00,0x1000bc01,0x3501e900,0xf3010101,0xbc06970e, // 0ec0 MP_;.__5____._.___._.__5________
0x7d000800,0x350e9402,0x17061701,0x7d026f06,0xec012906,0x3d0edd00,0x3b012901,0xd7010600, // 0ee0 ._.}___5_____o_}_)__.__=_)_;.___
0x050ebd00,0x4d414e3e,0x01230645,0x01170144,0x007f00bc,0x00bc0161,0x01d30020,0x0f0a00f7, // 0f00 .___>NAME_#_D____._.a__. .___.__
0x0f0300d7,0x44492e03,0xbc031406,0x61001f00,0x17067d01,0x2400d706,0x4f57050f,0x06534452, // 0f20 _.___.ID____._.a_}____.$__WORDS_
0x00500697,0x000000bc,0x0106007a,0x0186010b,0x0f8400f7,0x06170144,0x02600f28,0x010b007a, // 0f40 __P._...z._______.__D___(_`_z.__
0x000a00bc,0x00f701d3,0x00bc0f76,0x007a0001,0x01010209,0x06970f80,0x000000bc,0x0106007a, // 0f60 _._.___.v__._.z._________...z.__
0x0f4c0101,0x0f3900d7,0x4c454405,0x88155941,0x4c43050f,0x164b434f,0x50070f91,0x4f4d4e49, // 0f80 __L__.9__DELAY____CLOCK____PINMO
0x9a2f4544,0x414d030f,0x0fa53050,0x364e4902,0x4f030fac,0xb2375455,0x4941030f,0x0fb93a4e, // 0fa0 DE/___MAP0___IN6___OUT7___AIN:__
0x4d575003,0x040fc03b,0x444c4f43,0xc700bc06,0x0600500f,0xc700bc01,0x06005a0f,0x7400bc01, // 0fc0 _PWM;___COLD__.__P.___.__Z.___.t
0x0600650a,0x1100bc01,0x0600710b,0x11069701,0x0000000b,0x00000000,0x00000000,0x00000000  // 0fe0 _e.___.__q.______...............
};
