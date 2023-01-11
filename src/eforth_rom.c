///
/// @file eforth_rom.c
/// @brief eForth ROM (loaded in Arduino Flash Memory)
/// @attention 8K max ROM before changing FORTH_ROM_SZ in eforth_core.h 
///
#include "eforth_core.h"
const U32 forth_rom[] PROGMEM = {
0x000fb907,0x48030000,0x0004444c,0x04000620,0x4e415053,0x0f200204,0x493e0300,0x2004044e, // 0000 ___..._HLD_. _._SPAN__ _._>IN__ 
0x23040019,0x04424954,0x00222006,0x49542704,0x20100442,0x4204002c,0x04455341,0x00362012, // 0020 _._#TIB__ "._'TIB__ ,._BASE__ 6.
0x04504302,0x00402014,0x4e4f4307,0x54584554,0x48201604,0x414c0400,0x18045453,0x05005520, // 0040 _CP__ @._CONTEXT__ H._LAST__ U._
0x41564527,0x201a044c,0x2706005f,0x524f4241,0x201c0454,0x7403006a,0x1e04706d,0x02007620, // 0060 'EVAL__ _._'ABORT__ j._tmp__ v._
0x20044c42,0x04007f00,0x4c4c4543,0x87000204,0x4f4e0300,0x00910050,0x45594203,0x03009801, // 0080 BL_ ._._CELL__._._NOP._._BYE__._
0x0258523f,0x5403009f,0xa6032158,0x6f640500,0x044e4f43,0x640500ad,0x54494c6f,0x0500b605, // 00a0 ?RX__._TX!__._doCON__._doLIT__._
0x41566f64,0x00bf0652,0x4c6f6406,0x07545349,0x450500c8,0x5245544e,0x0400d207,0x54495845, // 00c0 doVAR__._doLIST__._ENTER__._EXIT
0x0700db08,0x43455845,0x09455455,0x640600e3,0x58454e6f,0x00ee0a54,0x72623f07,0x68636e61, // 00e0 __._EXECUTE__._doNEXT__._?branch
0x0600f80b,0x6e617262,0x030c6863,0x0d210101,0x2b02010d,0x01120e21,0x180f4001,0x21430201, // 0100 __._branch____!____+!____@____C!
0x02011d10,0x23114043,0x3e520201,0x02012912,0x2f134052,0x523e0201,0x04013514,0x504f5244, // 0120 ____C@_#__R>_)__R@_/__>R_5__DROP
0x03013b15,0x16505544,0x53040143,0x17504157,0x4f04014a,0x18524556,0x52030152,0x5a19544f, // 0140 _;__DUP_C__SWAP_J__OVER_R__ROT_Z
0x49500401,0x611a4b43,0x4e410301,0x01691b44,0x1c524f02,0x58030170,0x761d524f,0x4e490601, // 0160 __PICK_a__AND_i__OR_p__XOR_v__IN
0x54524556,0x06017d1e,0x4948534c,0x871f5446,0x53520601,0x54464948,0x01019120,0x019b212b, // 0180 VERT_}__LSHIFT____RSHIFT ___+!__
0xa0222d01,0x232a0101,0x2f0101a5,0x0301aa24,0x25444f4d,0x4e0601af,0x54414745,0x01b62645, // 01a0 _-"___*#___/$___MOD%___NEGATE&__
0xc0273e01,0x283d0101,0x3c0101c5,0x0201ca29,0xcf2a3e30,0x3d300201,0x0201d52b,0xdb2c3c30, // 01c0 _>'___=(___<)___0>*___0=+___0<,_
0x2b310201,0x0201e12d,0xe72e2d31,0x443f0401,0xed2f5055,0x45440501,0x30485450,0x550201f5, // 01e0 __1+-___1-.___?DUP/___DEPTH0___U
0x01fe313c,0x2f4d5506,0x32444f4d,0x55030204,0x0e332a4d,0x2a4d0202,0x07021534,0x47454e44, // 0200 <1___UM/MOD2___UM*3___M*4___DNEG
0x35455441,0x4402021b,0x0226362b,0x372d4402,0x4804022c,0x07455245,0x011a0043,0x023200e0, // 0220 ATE5___D+6&__D-7,__HERE_C.___.2_
0x44415003,0xbc023707,0x9d002000,0x4000e001,0x45430502,0x072b4c4c,0x019d008c,0x025100e0, // 0240 _PAD_7__. .___.@__CELL+__.___.Q_
0x4c454305,0x8c072d4c,0xe001a200,0x05026000,0x4c4c4543,0x008c0753,0x00e001a7,0x3204026f, // 0260 _CELL-__.___.`__CELLS__.___.o__2
0x07505544,0x01570157,0x027e00e0,0x52443205,0x4007504f,0xe0014001,0x05028c00,0x4f4d2f2a, // 0280 DUP_W_W__.~__2DROP_@_@__.___*/MO
0x01380744,0x012c0218,0x00e0020b,0x2f04029b,0x07444f4d,0x01ac0283,0x01b30138,0x00e0012c, // 02a0 D_8___,____.___/MOD_____8___,__.
0x2a0202ae,0x02a1072f,0x0140014f,0x02c200e0,0x07213202,0x01380147,0x019d008c,0x012c010f, // 02c0 ___*/___O_@__.___2!_G_8__.____,_
0x00e0010f,0x320202d0,0x01470740,0x011a0138,0x008c012c,0x011a019d,0x02e600e0,0x54495706, // 02e0 ___.___2@_G_8___,__._____.___WIT
0x074e4948,0x01a20157,0x01a20138,0x0201012c,0x02fc00e0,0x554f4305,0x4707544e,0x4f01e401, // 0300 HIN_W___8___,____.___COUNT_G___O
0xe0012601,0x03031400,0x07534241,0x01de0147,0x03360100,0x00e001bd,0x4d030327,0x83075841, // 0320 _&__.___ABS_G___._6____.'__MAX__
0x0001cc02,0x4f034901,0xe0014001,0x03033a00,0x074e494d,0x01c20283,0x035e0100,0x0140014f, // 0340 ___._I_O_@__.:__MIN_____._^_O_@_
0x034f00e0,0x4f4d4305,0x38074556,0x81010a01,0x26015703,0x20015701,0xe4013801,0xe4012c01, // 0360 _.O__CMOVE_8_____W_&_W_ _8___,__
0x7100f501,0xe0029203,0x04036400,0x45564f4d,0xac008c07,0x0a013801,0x5703ab01,0x57011a01, // 0380 __.q____.d__MOVE__.__8_____W___W
0x38010f01,0x2c025701,0xf5025701,0x92039b00,0x8b00e002,0x49460403,0x4f074c4c,0x4f013801, // 03a0 ___8_W_,_W__._____.___FILL_O_8_O
0xcb010a01,0x20028303,0xf501e401,0x9203c500,0xb500e002,0x45480303,0x00bc0758,0x003b0010, // 03c0 _______ ____._____.___HEX__._.;.
0x00e0010f,0x440703d5,0x4d494345,0xbc074c41,0x3b000a00,0xe0010f00,0x0503e600,0x49474944, // 03e0 ___.___DECIMAL__._.;.___.___DIGI
0x00bc0754,0x01570009,0x00bc01cc,0x016d0007,0x00bc019d,0x019d0030,0x03fb00e0,0x54584507, // 0400 T__._.W____._.m____.0.___.___EXT
0x54434152,0x0000bc07,0x0b014f00,0x01014f02,0x1c00e004,0x233c0204,0x0a024407,0xe0010f00, // 0420 RACT__...O___O____.___<#_D__.___
0x04043500,0x444c4f48,0x1a000a07,0x4701ea01,0x0f000a01,0xe0012001,0x01044300,0x003b0723, // 0440 .5__HOLD__.____G__.__ __.C__#_;.
0x0424011a,0x00e00448,0x2302045b,0x045d0753,0x01000147,0x010a047a,0x00e0046e,0x5304046a, // 0460 __$_H__.[__#S_]_G_._z___n__.j__S
0x074e4749,0x010001de,0x00bc0490,0x0448002d,0x047e00e0,0x073e2302,0x000a0140,0x0244011a, // 0480 IGN___.____.-.H__.~__#>_@__.__D_
0x01a20157,0x049400e0,0x50553e06,0x07524550,0x00bc0147,0x00bc0061,0x0303007b,0x04c60100, // 04a0 W____.___>UPPER_G__.a._.{.__.___
0x005f00bc,0x00e0016d,0x440604a8,0x54494749,0x0138073f,0x00bc04af,0x01a20030,0x000900bc, // 04c0 _._.m__.___DIGIT?_8____.0.___._.
0x01cc0157,0x04f80100,0x000700bc,0x014701a2,0x000a00bc,0x017301cc,0x012c0147,0x00e00201, // 04e0 W___.____._.__G__._.__s_G_,____.
0x4e0704ca,0x45424d55,0x3b073f52,0x38011a00,0x0000bc01,0x1a015700,0x26015703,0x2400bc01, // 0500 ___NUMBER?_;.__8__...W___W_&__.$
0x0001c700,0xd9053101,0xe4014f03,0xea014f01,0x26015701,0x2d00bc01,0x3801c700,0x32014f01, // 0520 .__._1___O___O___W_&__.-.__8_O_2
0x4f01a201,0x9d013201,0x0001f201,0xea059301,0x47013801,0x26013801,0x1a003b01,0x0004d101, // 0540 ___O_2_____._____8_G_8_&_;.____.
0x4f058501,0x1a003b01,0x9d01a701,0xe4012c01,0x5300f501,0x32014005,0x7f010001,0x4f01bd05, // 0560 ___O_;.______,____.S_@_2_._____O
0x91010a01,0x2c012c05,0x92029201,0x0000bc02,0x2c014700,0x2c029201,0x0f003b01,0x0200e001, // 0580 _____,_,______...G_,___,_;.___._
0x49540305,0x00310742,0x00e0011a,0x3f0405a1,0x0759454b,0x00e000a3,0x4b0305ae,0xb3075945, // 05a0 __TIB_1.___.___?KEY__._.___KEY__
0xbf010005,0xba00e005,0x4d450405,0xaa075449,0xc900e000,0x485e0205,0x57013807,0x4f012c01, // 05c0 _.____.___EMIT__._.___^H_8_W_,_O
0x7a015701,0xfb010001,0x0800bc05,0xea05ce00,0xce008201,0x0800bc05,0xe005ce00,0x0505d500, // 05e0 _W_z_.____._._____.___._.___.___
0x43415053,0x00820745,0x00e005ce,0x430505ff,0x53524148,0xbc014f07,0x3e000000,0x0a013803, // 0600 SPACE__.___.___CHARS_O__...>_8__
0x47062701,0xf505ce01,0x40062300,0x0e00e001,0x433e0506,0x07524148,0x007f00bc,0x0147016d, // 0620 _'_G____.#_@__.___>CHAR__._.m_G_
0x007f00bc,0x03030082,0x53060631,0x45434150,0x00820753,0x00e00614,0x5404064a,0x07455059, // 0640 _._._.__1__SPACES__.___.J__TYPE_
0x010a0138,0x031a0684,0x007f00bc,0x0147016d,0x007f00bc,0x03030082,0x06820100,0x00bc0140, // 0660 8________._.m_G__._._.__.___@__.
0x05ce005f,0x066600f5,0x00e00140,0x4302065a,0x00bc0752,0x05ce000a,0x068e00e0,0x536f6405, // 0680 _.___.f_@__.Z__CR__._.___.___doS
0x2c075254,0x2c013201,0x9d031a01,0x4f013801,0xe0013801,0x03069c00,0x077c2253,0x00e006a2, // 06a0 TR_,_2_,_____8_O_8__.___S"|____.
0x2e0306b7,0xa2077c22,0x5f031a06,0xc200e006,0x522e0206,0x47013807,0x2b013801,0x6d043803, // 06c0 ___."|________.___.R_8_G_8_+_8_m
0x83012c04,0x2c049704,0xa2015701,0x5f065101,0xd100e006,0x2e550306,0x01380752,0x046d0438, // 06e0 _,_____,_W___Q____.___U.R_8_8_m_
0x012c0497,0x01a20157,0x065f0651,0x06f500e0,0x072e5502,0x046d0438,0x06050497,0x00e0065f, // 0700 __,_W___Q____.___U._8_m________.
0x2e010710,0x1a003b07,0x0a00bc01,0x00017a00,0x13073701,0x4700e007,0x2b013801,0x6d043803, // 0720 ___._;.___._.z_._7____.G_8_+_8_m
0x83012c04,0x05049704,0xe0065f06,0x01072200,0x011a073f,0x00e00724,0x2807074f,0x73726170, // 0740 _,__________."__?___$__.O__(pars
0x7a072965,0x57012000,0x47013801,0xeb010001,0x7a01ea07,0x82012600,0x0001c700,0x3807a501, // 0760 e)_z. _W_8_G_._____z.&__.__.___8
0x57008201,0xa2012601,0x8401de01,0xa3010001,0xf501e407,0x2c078100,0xbc014001,0x47000000, // 0780 __.W_&_______.______.__,_@__...G
0x2c00e001,0x4f015701,0x7a013801,0x57012600,0xa2012601,0x26007a01,0xc7008201,0xc3010001, // 07a0 __.,_W_O_8_z.&_W_&___z.&__.__.__
0x0001de07,0xe407d501,0xab00f501,0x38014707,0xdf010a01,0x40012c07,0xe4014701,0x57013801, // 07c0 ___.______.__G_8_____,_@_G___8_W
0x2c01a201,0xa2012c01,0x5700e001,0xa2012c01,0x5a00e001,0x41500507,0x07244b43,0x01380147, // 07e0 ___,_,____.W_,____.Z__PACK$_G_8_
0x01200283,0x014f01e4,0x012c036a,0x07f500e0,0x52415005,0x38074553,0x1d05a501,0x9d011a00, // 0800 __ ___O_j_,__.___PARSE_8____.___
0x1a002701,0x1a001d01,0x2c01a201,0x1d076201,0xe0011500,0x05081000,0x454b4f54,0x0082074e, // 0820 _'.___.____,_b__.___.___TOKEN__.
0x00bc0816,0x0353001f,0x02570237,0x00e007fb,0x57040837,0x0744524f,0x02370816,0x07fb0257, // 0840 ___._.S_7_W____.7__WORD___7_W___
0x085200e0,0x4d414e05,0x1a073e45,0x1f00bc03,0x9d016d00,0x6400e001,0x41530508,0x073f454d, // 0860 _.R__NAME>____._.m____.d__SAME?_
0x02830138,0x08b8010a,0x01260147,0x013804af,0x014f01e4,0x01260147,0x013804af,0x014f01e4, // 0880 8_______G_&___8___O_G_&___8___O_
0x012c012c,0x01f201a2,0x08b80100,0x0140012c,0x02920138,0x00e0012c,0x088800f5,0x00bc0292, // 08a0 ,_,_____.___,_@_8___,__._._____.
0x00e00000,0x46040879,0x07444e49,0x0147014f,0x007a0126,0x0147010f,0x0138011a,0x014f0257, // 08c0 .._.y__FIND_O_G_&_z.__G___8_W_O_
0x0147011a,0x09240100,0x011a0147,0xff3f00bc,0x00bc016d,0x016d5f5f,0x00bc0132,0x016d5f5f, // 08e0 __G_._$_G____.?_m__.__m_2__.__m_
0x0100017a,0x02570910,0xffff00bc,0x0920010a,0x007a0257,0x01ea011a,0x01000147,0x087f0920, // 0900 z_.___W__.____ _W_z.____G_._ ___
0x0930010a,0x0140012c,0x0266014f,0x00e0014f,0x093c0100,0x02660266,0x08e0010a,0x0140012c, // 0920 __0_,_@_O_f_O__.._<_f_f_____,_@_
0x0140014f,0x01470266,0x014f086a,0x08c600e0,0x4d414e05,0x50073f45,0xe008cb00,0x03095000, // 0940 O_@_f_G_j_O__.___NAME?_P.___.P__
0x07504154,0x05ce0147,0x01200157,0x00e001e4,0x6b04095f,0x07504154,0x00bc0147,0x017a000d, // 0960 TAP_G___W_ ____.___kTAP_G__._.z_
0x00bc0157,0x017a000a,0x0100016d,0x00bc09a4,0x017a0008,0x09a00100,0x09630082,0x09a2010a, // 0980 W__._.z_m_.____._.z_.____.c_____
0x00e005d8,0x014f0140,0x01470140,0x097200e0,0x43434106,0x07545045,0x019d0157,0x02830157, // 09a0 ___.@_O_@_G__.r__ACCEPT_W___W___
0x0100017a,0x05be09e4,0x00820147,0x00bc01a2,0x0201005f,0x09de0100,0x010a0963,0x097709e0, // 09c0 z_._____G__.___._.__.___c_____w_
0x09be010a,0x01570140,0x00e001a2,0x450609b0,0x43455058,0x09b70754,0x010f0014,0x00e00140, // 09e0 ____@_W____.___EXPECT____.__@__.
0x510509ee,0x59524555,0xbc05a507,0xb7008000,0x0f002709,0xbc014001,0x1d000000,0xe0010f00, // 0a00 ___QUERY____._.__'.__@__..._.___
0x050a0200,0x524f4241,0x00710754,0x01f2011a,0x0a360100,0x00e000eb,0x41060a23,0x54524f42, // 0a20 .___ABORT_q.____._6__._.#__ABORT
0x01000722,0x06a20a4e,0x065f031a,0x06a20a29,0x00e00140,0x45050a3a,0x524f5252,0x1a060507, // 0a40 "_._N_______)___@__.:__ERROR____
0xbc065f03,0xce003f00,0x1b00bc05,0x9105ce00,0x560a2906,0x49240a0a,0x5245544e,0x54455250, // 0a60 ____.?.___._.____)_V__$INTERPRET
0xf2095607,0xa5010001,0xbc01260a,0x6d004000,0x0d0a4101,0x6d6f6320,0x656c6970,0x6c6e6f20, // 0a80 _V___.___&__.@.m_A__ compile onl
0xe000eb79,0x00050a00,0xe00ab101,0xb3010a00,0x750a5c0a,0x075b810a,0x0a8000bc,0x010f0065, // 0aa0 y_._.__.____.______u__[__.__e.__
0x0ab500e0,0x41564504,0x083d074c,0x01260147,0x0ae40100,0x011a0065,0x010001f2,0x00eb0ae0, // 0ac0 _.___EVAL_=_G_&_.___e.____.____.
0x0aca010a,0x06910140,0x0a8000bc,0x011a0065,0x010001c7,0x01fb0b12,0x000400bc,0x01380353, // 0ae0 ____@____.__e.____.______._.S_8_
0x01660132,0x00f50724,0x06c60b00,0x6b6f2005,0x00e0203e,0x51040ac4,0x07544955,0x24c000bc, // 0b00 2_f_$__..____ ok> _.___QUIT__._$
0x010f0031,0x0a080ab7,0x010a0ac9,0x0b160b26,0x37072c01,0x57014702,0x0f004302,0xe0010f01, // 0b20 1.__________&____,_7_G_W_C._____
0x020b3000,0x37072c43,0xe4014702,0x0f004301,0xe0012001,0x070b4300,0x494e553f,0x07455551, // 0b40 .0__C,_7_G___C.__ __.C__?UNIQUE_
0x09560147,0x010001f2,0x031a0b7f,0x001f00bc,0x0605016d,0x06c6065f,0x65722006,0x40666544, // 0b60 G_V___.______._.m________ reDef@
0x5700e001,0x2c24030b,0x0147076e,0x0100011a,0x0b5f0bae,0x086a0147,0x010f0043,0x005a0147, // 0b80 __.W__$,n_G___._____G_j_C.__G_Z.
0x0266010f,0x011a0050,0x010f014f,0x0a5c00e0,0x27010b85,0x56083d07,0xbf010009,0x5c00e00b, // 0ba0 __f_P.__O____._____'_=_V_.____._
0x870bb20a,0x4554494c,0x074c4152,0x00bc00bc,0x0b320b32,0x0bc300e0,0x4d4f4307,0x454c4950, // 0bc0 ____LITERAL__._.2_2__.___COMPILE
0x47012c07,0x32011a01,0x3802570b,0xd800e001,0x4324080b,0x49504d4f,0x5607454c,0x0001f209, // 0be0 _,_G___2_W_8__.___$COMPILE_V___.
0x1a0c1901,0x8000bc01,0x00016d00,0xeb0c1501,0x17010a00,0xe00b320c,0x00050a00,0xcb0c2301, // 0c00 ______._.m_.____.____2__.__._#__
0x5c00e00b,0x0c0bf10a,0x504d4f43,0x2d454c49,0x594c4e4f,0x4000bc07,0x1a005a00,0xe0011501, // 0c20 __._____COMPILE-ONLY__.@.Z._____
0x090c2700,0x454d4d49,0x54414944,0x00bc0745,0x005a0080,0x0115011a,0x0c4300e0,0x4c4c4105, // 0c40 .'__IMMEDIATE__._.Z._____.C__ALL
0x4307544f,0xe0011500,0x890c5c00,0x4d4f435b,0x454c4950,0x0bb4075d,0x00e00b32,0x5d010c6b, // 0c60 OT_C.___.___[COMPILE]___2__.k__]
0xfa00bc07,0x0f00650b,0x7e00e001,0x073a010c,0x0b89083d,0x00bc0c80,0x0b460007,0x0c8d00e0, // 0c80 __.__e.___.~__:_=______._.F__.__
0xbc073b81,0x3200e000,0x5a0ab70b,0x50011a00,0xe0010f00,0x060ca000,0x47524f46,0x3d075445, // 0ca0 _;__._.2___Z.__P.___.___FORGET_=
0xf2095608,0xe1010001,0x4702660c,0x0f004301,0x47011a01,0x0f005001,0x0f005a01,0xe0014001, // 0cc0 _V___.___f_G_C.____G_P.__Z.__@__
0xb70a5c00,0x4f43040c,0x3d074544,0x5a0b8908,0x50011a00,0xe0010f00,0x060ce500,0x41455243, // 0ce0 ._____CODE_=___Z.__P.___.___CREA
0xea074554,0x0600bc0c,0xe00b4600,0x080cfb00,0x49524156,0x454c4241,0xbc0d0207,0x32000000, // 0d00 TE____._.F__.___VARIABLE____...2
0x0f00e00b,0x4f43080d,0x4154534e,0xea07544e,0x0400bc0c,0x320b4600,0x2500e00b,0x282e820d, // 0d20 __.___CONSTANT____._.F_2__.%__.(
0x2900bc07,0x5f081600,0x3d00e006,0x075c810d,0x000a00bc,0x01400857,0x0d4d00e0,0xbc072881, // 0d40 __.)._____.=_____._.W_@__.M__(__
0x16002900,0xe0029208,0x850d5c00,0x41454841,0x0be00744,0x0237010a,0x000000bc,0x00e00b32, // 0d60 .)._____.___AHEAD_____7__...2__.
0x41850d6b,0x4e494147,0x0a0be007,0xe00b3201,0x850d8200,0x49474542,0x0237074e,0x0d9300e0, // 0d80 k__AGAIN_____2__.___BEGIN_7__.__
0x544e5585,0xe0074c49,0x3201000b,0xa000e00b,0x4649820d,0x000be007,0xbc023701,0x32000000, // 0da0 _UNTIL___._2__.___IF___._7__...2
0xb100e00b,0x4854840d,0x37074e45,0x0f014f02,0xc500e001,0x4c45840d,0x71074553,0xca014f0d, // 0dc0 __.___THEN_7_O____.___ELSE_q_O__
0xd500e00d,0x4857850d,0x07454c49,0x014f0db4,0x0de500e0,0x45485784,0x0db4074e,0x00e00157, // 0de0 __.___WHILE___O__.___WHEN___W__.
0x52860df4,0x41455045,0x0d880754,0x00e00dca,0x46830e02,0xe007524f,0x3701380b,0x1200e002, // 0e00 ___REPEAT______.___FOR___8_7__._
0x4641830e,0x01400754,0x02370d71,0x00e0014f,0x4e840e21,0x07545845,0x00f50be0,0x00e00b32, // 0e20 __AFT_@_q_7_O__.!__NEXT____.2__.
0x53030e32,0xbc07222c,0x57002200,0x9d031a08,0x0f004301,0x4200e001,0x4241860e,0x2254524f, // 0e40 2__S,"__.".W_____C.___.B__ABORT"
0x4100bc07,0x0f02370a,0xe00e4601,0x820e5900,0xbc072253,0x3706bb00,0x46010f02,0x6f00e00e, // 0e60 __.A_7___F__.Y__S"__.__7___F__.o
0x222e820e,0xc600bc07,0x0f023706,0xe00e4601,0x050e8100,0x4d414e3e,0x01ea0745,0x01260147, // 0e80 __."__.__7___F__.___>NAME___G_&_
0x007f00bc,0x00bc016d,0x01cc0020,0x0e9a0100,0x0e9300e0,0x4d554404,0x003b0750,0x0138011a, // 0ea0 _._.m__. .__.____.___DUMP_;.__8_
0x00bc03d9,0x019d001f,0x001000bc,0x013801ac,0x0f0c010a,0x00bc0691,0x02830008,0x00bc0157, // 0ec0 ___._.___._.__8________._.__W__.
0x06f90005,0x00bc0138,0x05ce003a,0x0efc010a,0x011a0147,0x000500bc,0x025706f9,0x0ef000f5, // 0ee0 _.__8__.:.______G____._.__W__.__
0x06050138,0x02750605,0x012c065f,0x0ed400f5,0x012c0140,0x010f003b,0x0eb400e0,0x524f5705, // 0f00 8_____u___,__.__@_,_;.___.___WOR
0x91075344,0xbc005006,0x7a000000,0x1a010f00,0x0001f201,0x470f7101,0x1a060501,0x1f00bc03, // 0f20 DS___P._...z.______._q_G______._
0x5f016d00,0x66060506,0x1a007a02,0x0a00bc01,0x0001cc00,0xbc0f6301,0x7a000100,0x0a011500, // 0f40 .m_____f_z.___._.__._c__._.z.___
0x910f6d01,0x0000bc06,0x0f007a00,0x2f010a01,0x1c00e00f,0x4544050f,0x3859414c,0x43050f75, // 0f60 _m____...z.____/__.___DELAY8u__C
0x4b434f4c,0x070f7e39,0x4d4e4950,0x3a45444f,0x4d030f87,0x923b5041,0x4e49020f,0x030f993c, // 0f80 LOCK9~__PINMODE:___MAP;___IN<___
0x3d54554f,0x41030f9f,0xa63e4e49,0x5750030f,0x0fad3f4d,0x4c4f4304,0x00bc0744,0x00500fb4, // 0fa0 OUT=___AIN>___PWM?___COLD__.__P.
0x00bc010f,0x005a0fb4,0x00bc010f,0x00650a80,0x00bc010f,0x00710b1b,0x0691010f,0x00000b1b, // 0fc0 ___.__Z.___.__e.___.__q.______..
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, // 0fe0 ................................
};
