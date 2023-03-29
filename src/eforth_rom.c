///
/// @file eforth_rom.c
/// @brief eForth ROM (loaded in Arduino Flash Memory)
/// @attention 8K max ROM before changing FORTH_ROM_SZ in eforth_core.h 
///
#include "eforth_core.h"
const U32 forth_rom_sz PROGMEM = 0xe57;
const U32 forth_rom[] PROGMEM = {
0x00003b0e,0x504f4e03,0x04000800,0x45594203,0x0c000801,0x454b3f04,0x00080259,0x4d450414, // 0000 _;.._NOP._.__BYE__.__?KEY__.__EM
0x08035449,0x44051d00,0x54494c4f,0x26000804,0x564f4405,0x08055241,0x45053000,0x5245544e, // 0020 IT__.__DOLIT__.&_DOVAR__.0_ENTER
0x3a000807,0x49584504,0x00080854,0x42510744,0x434e4152,0x00080b48,0x5242064d,0x48434e41, // 0040 __.:_EXIT__.D_QBRANCH__.M_BRANCH
0x5900080c,0x4e4f4406,0x0a545845,0x07640008,0x43455845,0x06455455,0x016f0008,0x00080d21, // 0060 __.Y_DONEXT__.d_EXECUTE__.o_!__.
0x212b027b,0x8100080e,0x080f4001,0x43028800,0x00081021,0x4043028e,0x95000811,0x123e5202, // 0080 {_+!__.__@__.__C!__.__C@__.__R>_
0x029c0008,0x08134052,0x3e02a300,0x00081452,0x524404aa,0x0815504f,0x4403b100,0x08165055, // 00a0 _.__R@__.__>R__.__DROP__.__DUP__
0x5304ba00,0x17504157,0x04c20008,0x5245564f,0xcb000818,0x544f5203,0xd4000819,0x43495004, // 00c0 .__SWAP__.__OVER__.__ROT__.__PIC
0x00081a4b,0x4e4103dc,0x00081b44,0x524f02e5,0xed00081c,0x524f5803,0xf400081d,0x564e4906, // 00e0 K__.__AND__.__OR__.__XOR__.__INV
0x1e545245,0x06fc0008,0x4948534c,0x081f5446,0x52060701,0x46494853,0x01082054,0x212b0112, // 0100 ERT__.__LSHIFT_____RSHIFT ____+!
0x011d0108,0x0108222d,0x232a0123,0x01290108,0x0108242f,0x4f4d032f,0x01082544,0x454e0635, // 0120 ____-"__#_*#__)_/$__/_MOD%__5_NE
0x45544147,0x3d010826,0x08273e01,0x3d014801,0x4e010828,0x08293c01,0x30025401,0x01082a3e, // 0140 GATE&__=_>'__H_=(__N_<)__T_0>*__
0x3d30025a,0x6101082b,0x2c3c3002,0x02680108,0x082d2b31,0x31026f01,0x01082e2d,0x443f0476, // 0160 Z_0=+__a_0<,__h_1+-__o_1-.__v_?D
0x082f5055,0x44057d01,0x48545045,0x86010830,0x31505202,0x02900108,0x08324c42,0x43049701, // 0180 UP/__}_DEPTH0____RP1____BL2____C
0x334c4c45,0x059e0108,0x4c4c4543,0x0108342b,0x454305a7,0x352d4c4c,0x05b10108,0x4c4c4543, // 01a0 ELL3____CELL+4____CELL-5____CELL
0x01083653,0x424103bb,0x01083753,0x414d03c5,0x01083858,0x494d03cd,0x0108394e,0x495706d5, // 01c0 S6____ABS7____MAX8____MIN9____WI
0x4e494854,0xdd01083a,0x50553e06,0x3b524550,0x05e80108,0x4e554f43,0x01083c54,0x3c5502f3, // 01e0 THIN:____>UPPER;____COUNT<____U<
0xfd01083d,0x2f4d5506,0x3e444f4d,0x03040208,0x3f2a4d55,0x020f0208,0x08402a4d,0x55031702, // 0200 =____UM/MOD>____UM*?____M*@____U
0x08412b4d,0x2a051e02,0x444f4d2f,0x26020842,0x4f4d2f04,0x02084344,0x2f2a0230,0x39020844, // 0220 M+A____*/MODB__&_/MODC__0_*/D__9
0x443e5303,0x40020845,0x533e4403,0x48020846,0x454e4407,0x45544147,0x50020847,0x482b4402, // 0240 _S>DE__@_D>SF__H_DNEGATEG__P_D+H
0x025c0208,0x08492d44,0x32026302,0x02084c21,0x4032026a,0x7102084d,0x55443204,0x02084a50, // 0260 ____D-I__c_2!L__j_2@M__q_2DUPJ__
0x44320578,0x4b504f52,0x05810208,0x41575332,0x19141950,0x8b020812,0x564f3205,0x00045245, // 0280 x_2DROPK____2SWAP________2OVER_.
0x00041a03,0x02081a03,0x2b320298,0x21020004,0x02a90208,0x00042d32,0x02082202,0x2a3202b3, // 02a0 ___.______2+_._!____2-_._"____2*
0x1f010004,0x02bd0208,0x00042f32,0x02082001,0x134901c7,0x03d10208,0x4e405053,0x02d70208, // 02c0 _.______2/_._ ____I_____SP@N____
0x084f3053,0x5405df02,0x45434152,0xe6020850,0x56415304,0x02085145,0x4f4c04f0,0x08524441, // 02e0 S0O____TRACEP____SAVEQ____LOADR_
0x4304f902,0x534c4c41,0x04020308,0x42495427,0x08002004,0x42040b03,0x04455341,0x03080220, // 0300 ___CALLS____'TIB_ .____BASE_ ___
0x50430216,0x08042004,0x43072103,0x45544e4f,0x20045458,0x2a030806,0x53414c04,0x08200454, // 0320 __CP_ ___!_CONTEXT_ ___*_LAST_ _
0x05380308,0x444f4d27,0x0a200445,0x06430308,0x4f424127,0x20045452,0x4f03080c,0x444c4803, // 0340 __8_'MODE_ ___C_'ABORT_ ___O_HLD
0x080e2004,0x53045c03,0x044e4150,0x03081020,0x493e0366,0x1220044e,0x04710308,0x42495423, // 0360 _ _____SPAN_ ___f_>IN_ ___q_#TIB
0x08142004,0x74037b03,0x2004706d,0x86030816,0x59454b03,0x94030b02,0x05900308,0x4148433e, // 0380 _ ___{_tmp_ _____KEY________>CHA
0x7f000452,0x0004161b,0x0b3a327f,0x0415b203,0x03085f00,0x4548049b,0x24834552,0xb503080f, // 03a0 R_.____._2:_____._____HERE_$____
0x44415003,0x08002504,0x5403c003,0x10834249,0xca03080f,0x4f4d4305,0x0c144556,0x1118e603, // 03c0 _PAD_%.____TIB_______CMOVE______
0x2d141018,0x030a2d12,0x03084bde,0x4f4d04d4,0x24334556,0x00040c14,0x0d180f18,0x34123414, // 03e0 ___-_-___K____MOVE3$___._____4_4
0x4bf8030a,0x04ed0308,0x4c4c4946,0x0c171417,0x104a1504,0x12040a2d,0x0704084b,0x47494405, // 0400 ___K____FILL______J_-___K____DIG
0x00045449,0x04291809,0x211b0700,0x21300004,0x071c0408,0x52545845,0x04544341,0x3e170000, // 0420 IT_.__)_.__!_.0!____EXTRACT_.._>
0x08228417,0x3c023304,0x83c48323,0x04080d60,0x4f480446,0x6083444c,0x83162e0f,0x08100d60, // 0440 __"__3_<#___`___F_HOLD_`_.__`___
0x23015104,0x840f1b83,0x0856843b,0x23026204,0x16648453,0x0c7a040b,0x04087104,0x4953046e, // 0460 _Q_#____;_V__b_#S_d___z__q__n_SI
0x0b2c4e47,0x00048b04,0x0856842d,0x23027d04,0x6083153e,0x18c4830f,0x8e040822,0x52545303, // 0480 GN,____.-_V__}_#>__`____"____STR
0x84371416,0x12718449,0x91848284,0x039c0408,0x04584548,0x1b831000,0xaf04080d,0x43454407, // 04a0 __7_I_q_________HEX_.________DEC
0x4c414d49,0x830a0004,0x04080d1b,0x494406bc,0x3f544947,0x00043b14,0x00042230,0x0b291809, // 04c0 IMAL_.________DIGIT?_;_.0"_.__)_
0x0004ec04,0x04162207,0x1c290a00,0x083d1216,0x4e07cd04,0x45424d55,0x1b833f52,0x0004140f, // 04e0 ___._"__._)___=____NUMBER?_____.
0x183c1800,0x24000411,0x12050b28,0x2d17b384,0x11182e17,0x282d0004,0x22131714,0x2f211317, // 0500 ._<___.$(______-_.___.-(___"__!/
0x2e4d050b,0x11141614,0x840f1b83,0x45050bd4,0x0f1b8317,0x2d122123,0x1525050a,0x41050b13, // 0520 __M.___________E____#!_-__%____A
0x050c1726,0x4b12124c,0x0000044b,0x124b1216,0x080d1b83,0x5305f204,0x45434150,0x05080332, // 0540 &___L__KK_..__K________SPACE2___
0x48430556,0x17535241,0x38000004,0x72050c14,0x050a0316,0x05081570,0x50530661,0x53454341, // 0560 V_CHARS__..8___r____p___a_SPACES
0x08678532,0x54047905,0x14455059,0x3ca2050c,0x1b7f0004,0x7f000416,0x050b3a32,0x000415a1, // 0580 2_g__y_TYPE____<_.____._2:_____.
0x050a035f,0x0508158f,0x52430286,0x030a0004,0x03a90508,0x12246f64,0x213c1213,0x08141714, // 05a0 __________CR_.______do$___<!____
0x2403b305,0xb7857c22,0x03c20508,0x857c222e,0x8b853cb7,0x02cb0508,0x8414522e,0x221812a0, // 05c0 ___$"|______."|__<______.R_____"
0x8b858085,0x03d70508,0x14522e55,0x71844984,0x18129184,0x85808522,0xe705088b,0x842e5502, // 05e0 ________U.R__I_q____"________U._
0x84718449,0x855c8591,0xfc05088b,0x1b832e01,0x0a00040f,0x1b060b1d,0x8408ff85,0x855c85a0, // 0600 I_q__________.____._____________
0x0c06088b,0x860f3f01,0x2406080e,0x61702807,0x29657372,0x18108a83,0x060b1614,0x8a832e85, // 0620 _____?_____$_(parse)_________.__
0x0b283211,0x32145c06,0x2c221118,0x5b060b1e,0x47060a2d,0x00041512,0x12081600,0x83141718, // 0640 _2(____2__",___[-__G___.._______
0x1118118a,0x118a8322,0x060b2832,0x060b2c6e,0x060a2d7a,0x0c14165f,0x15127f06,0x18142d16, // 0660 ____"___2(__n,__z-___________-__
0x22121222,0x22121808,0x052c0608,0x4b434150,0x4a141624,0x83172d10,0x060812da,0x4150058b, // 0680 "__"___"__,_PACK$__J_-________PA
0x14455352,0x7583ce83,0x8083210f,0x0f75830f,0x34861222,0x080e7583,0x54059d06,0x4e454b4f, // 06a0 RSE____u_!____u_"__4_u_____TOKEN
0x04a38632,0x83391f00,0x918634ba,0x04ba0608,0x44524f57,0xba83a386,0x08918634,0x4e05cf06, // 06c0 2___._9__4______WORD____4______N
0x3e454d41,0x1f00043c,0x0608211b,0x415305de,0x143f454d,0x11070c4a,0x143b1116,0x1116172d, // 06e0 AME><_.__!____SAME?_J_____;_-___
0x172d143b,0x2f221212,0x1211070b,0x124b1415,0xf8060a08,0x0000044b,0x04ed0608,0x444e4946, // 0700 ;_-___"/______K_____K_..____FIND
0x83111617,0x0f160d8a,0x0f173414,0x58070b16,0x3f040f16,0x5f041bff,0x04131b5f,0x1d1b5f5f, // 0720 _________4_____X___?____________
0x344a070b,0x0cffff04,0x83345507,0x162e0f8a,0x8655070b,0x5e070cf3,0x35171512,0x070b0817, // 0740 __J4_____U4___.___U____^___5____
0x0c353566,0x15122b07,0x16351517,0x0817e486,0x4e051b07,0x3f454d41,0x20873283,0x02720708, // 0760 f55__+____5________NAME?_2_ __r_
0x1814485e,0x1d181712,0x0496070b,0x2e030800,0x00040332,0x07080308,0x4154037f,0x18031650, // 0780 ^H__________.__.2__.______TAP___
0x07082d10,0x546b0499,0x04165041,0x181d0d00,0x1d0a0004,0xc8070b1b,0x1d080004,0x32c5070b, // 07a0 _-____kTAP__.____._______._____2
0x070c9d87,0x088287c7,0x16151715,0x06a50708,0x45434341,0x21185450,0x0b1d4a18,0x9483f407, // 07c0 ________________ACCEPT_!_J______
0x04223216,0x0b3d5f00,0x9d87ef07,0x87f1070c,0xd9070caa,0x08221815,0x4506cf07,0x43455058, // 07e0 _2"_._=_______________"____EXPEC
0x83d68754,0x08150d6b,0x5105fa07,0x59524555,0x0004ce83,0x83d68780,0x04150d80,0x75830000, // 0800 T___k______QUERY___.________.._u
0x0a08080d,0x4f424105,0x56835452,0x080b2f0f,0x08080632,0x52450524,0x85524f52,0x8b853c5c, // 0820 _____ABORT_V_/__2___$_ERROR__<__
0x033f0004,0x2a88ac85,0x240a3508,0x45544e49,0x45525052,0x2f788754,0x1178080b,0x1b400004, // 0840 _.?____*_5_$INTERPRET_x/__x__.@_
0x1576080b,0x630ccf85,0x69706d6f,0x6f20656c,0x0c796c6e,0x08067708,0x080bfa84,0x080c0881, // 0860 __v____compile only__w__________
0x083b8883,0x045b814a,0x49835508,0x8508080d,0x4b4f2e03,0x0804ac85,0x0f498355,0xb5080b28, // 0880 __;_J_[__U_I_____.OK____U_I_(___
0x04000430,0x1a131439,0x080a0e86,0x05cf85a6,0x3e6b6f20,0x90080820,0x41564504,0x16c0864c, // 08a0 0_._9___________ ok> ____EVAL___
0xcf080b11,0x2f0f4983,0x06cc080b,0x15bd080c,0x08089488,0x555104b8,0x24045449,0x0d108380, // 08c0 _____I_/______________QUIT_$____
0x10888788,0x080cbd88,0x01d508e2,0x16ba832c,0x0d248334,0xeb08080d,0x832c4302,0x832d16ba, // 08e0 ____________,___4_$______C,___-_
0x08100d24,0x4105f808,0x544f4c4c,0x080e2483,0x4c870609,0x52455449,0x00044c41,0x88fb8804, // 0900 $______ALLOT_$_____LITERAL_.____
0x120908ed,0x4d4f4307,0x454c4950,0x88111612,0x08142dfb,0x24082409,0x504d4f43,0x87454c49, // 0920 _____COMPILE_____-___$_$COMPILE_
0x090b2f78,0x0004116f,0x090b1b80,0x090c0651,0x0416166e,0x17290020,0x0004112d,0x0b1b2808, // 0940 x/__o__.____Q___n___ .)_-__._(__
0x88116809,0x6e090cfb,0x1c008004,0x8408ed88,0x77090bfa,0x88081a89,0x0736093b,0x494e553f, // 0960 _h_____n__.________w____;_6_?UNI
0x16455551,0x0b2f7887,0x043c9c09,0x851b1f00,0x858b855c,0x722006cf,0x66654465,0x7b090815, // 0980 QUE__x/___<_._________ reDef___{
0x6e2c2403,0x090b0f16,0x168389bc,0x2483e486,0x3d83160d,0x3283350d,0x080d170f,0xa0093b88, // 09a0 _$,n___________$___=_5_2_____;__
0xc0862701,0x090b7887,0x3b8808ca,0x5d01c009,0x833f0904,0x09080d49,0x435b89ce,0x49504d4f, // 09c0 _'___x_____;___]__?_I_____[COMPI
0x895d454c,0x08ed88c2,0x3a01d909,0xa489c086,0x0908d089,0x893b81ea,0x8788082c,0x830f3d83, // 09e0 LE]________:__________;_,____=__
0x09080d32,0x4e3e05f5,0x2e454d41,0x00041116,0x00041b7f,0x0a0b2920,0x050a080b,0x4d554404, // 0a00 2_____>NAME.___.___. )_______DUM
0x0f1b8350,0x04b38414,0x04211f00,0x14241000,0x856f0a0c,0x100004ac,0x0004184a,0x14eb8505, // 0a20 P_______._!_._$___o___._J__.____
0x033a0004,0x85640a0c,0x0411165c,0x3b841000,0x10000417,0x15033b84,0x04132d03,0x0b280800, // 0a40 _.:___d_____.__;__.__;___-__._(_
0x5c85640a,0x14470a0a,0x5c855c85,0x0a128b85,0x1215330a,0x080d1b83,0x2e031c0a,0x3283504f, // 0a60 _d____G__________3_________.OP_2
0x0a0b160f,0xe48616a5,0x04112d16,0x0b280800,0x1411a00a,0x0b281218,0x853c9f0a,0x1608158b, // 0a80 _________-__._(_______(___<_____
0x0a0c3515,0x08151580,0x2e057a0a,0x52444441,0x8616ac85,0x3a00040e,0xaa0a0803,0x45455303, // 0aa0 _5_______z_.ADDR______.:_____SEE
0xb08ac289,0x04161116,0x1e280800,0x165e0b0b,0x1b800004,0x15e90a0b,0x7f040f16,0x5c851bff, // 0ac0 ________._(___^__.______________
0x853c0b8a,0x0b0c348b,0x0004165b,0x0a0b2804,0x162d15fb,0x340e860f,0x165b0b0c,0x280c0004, // 0ae0 __<__4__[__._(____-____4__[__._(
0x15130b0b,0x860f162d,0x6a00040e,0xb08a3403,0x165b0b0c,0x280b0004,0x152b0b0b,0x860f162d, // 0b00 ____-_____.j_4____[__._(__+_-___
0x3f00040e,0xb08a3403,0x165b0b0c,0x280a0004,0x15430b0b,0x860f162d,0x7200040e,0xb08a3403, // 0b20 __.?_4____[__._(__C_-_____.r_4__
0x165b0b0c,0x28090004,0x15560b0b,0x0f162d2d,0x0c340e86,0x5c855b0b,0x0c2d7e8a,0x1515c40a, // 0b40 __[__._(__V_--____4__[___~-_____
0x00045c85,0x0a08033b,0x4f5705bc,0x85534452,0x043283ac,0x8a830000,0x0b2f0f0d,0x3c16a60b, // 0b60 ___.;_____WORDS___2_..____/____<
0x1b1f0004,0x832d2d16,0x8b850e8a,0x5c855c85,0x0f8a8335,0x27440004,0x85a30b0b,0x000004ac, // 0b80 _.___--_________5____.D'______..
0x0c0d8a83,0x0b08790b,0x4f460669,0x54454752,0x7887c086,0xc70b0b2f,0x24831635,0x83160f0d, // 0ba0 _____y__i_FORGET___x/___5__$____
0x3d830d32,0x8808150d,0x85a90b3b,0x41454841,0x0c2c8944,0x0004ba83,0x08ed8800,0x4185cb0b, // 0bc0 2__=____;___AHEAD_,____..______A
0x4e494147,0x880c2c89,0xde0b08ed,0x47454285,0xba834e49,0x85ec0b08,0x49544e55,0x0b2c894c, // 0be0 GAIN_,_______BEGIN______UNTIL_,_
0x82f70b08,0x2c894649,0x04ba830b,0xed880000,0x84030c08,0x4e454854,0x0d17ba83,0x84130c08, // 0c00 ____IF_,____..______THEN________
0x45534c45,0x8c17d18b,0x1f0c0818,0x49485785,0x068c454c,0x2c0c0817,0x45485784,0x18068c4e, // 0c20 ELSE_________WHILE_____,_WHEN___
0x86380c08,0x45504552,0xe48b5441,0x0c08188c,0x4f468343,0x142c8952,0x0c08ba83,0x46418351, // 0c40 __8_REPEAT______C_FOR_,_____Q_AF
0xd18b1554,0x0817ba83,0x4e845d0c,0x89545845,0xed880a2c,0x036a0c08,0x04222c24,0xd4862200, // 0c60 T________]_NEXT_,_____j_$,"_."__
0x2483213c,0x770c080d,0x04222482,0xba83c685,0x087b8c0d,0x2e82880c,0xcf850422,0x8c0dba83, // 0c80 <!_$___w_$"_______{____."_______
0x960c087b,0x444f4304,0x89c08645,0x0f3d83a4,0x080d3283,0x4306a40c,0x54414552,0x89a98c45, // 0ca0 {____CODE_____=__2_____CREATE___
0x2c89052c,0xb60c0808,0x454f4405,0x83123e53,0x0f3d83ba,0x1416e486,0x00042e22,0x12101309, // 0cc0 ,__,_____DOES>____=_____"._.____
0x2c89102d,0x89ed880c,0x0c08082c,0x415608c8,0x42414952,0xbd8c454c,0x88000004,0xed0c08ed, // 0ce0 -__,____,_____VARIABLE___.._____
0x4e4f4308,0x4e415453,0x04a98c54,0xfb880400,0x0004ba83,0xed882104,0x890f2c89,0xed88082c, // 0d00 _CONSTANT___.______._!___,__,___
0x09000d08,0x52415632,0x4c424149,0x04bd8c45,0x88160000,0x08ed88ed,0x3209230d,0x534e4f43, // 0d20 __._2VARIABLE___.._______#_2CONS
0x544e4154,0x0004a98c,0x83fb8804,0x040004ba,0x89ed8821,0x2c894d2c,0xed881708,0x0d08ed88, // 0d40 TANT___.______._!___,M_,________
0x282e823a,0x86290004,0x088b85a3,0x5c81610d,0x860a0004,0x0d0815d4,0x0428816e,0xa3862900, // 0d60 :_.(_.)______a___.______n_(_.)__
0x790d084b,0x4d4f430c,0x454c4950,0x4c4e4f2d,0x0f3d8359,0x00041116,0x10171c40,0x09840d08, // 0d80 K__y_COMPILE-ONLY_=____.@_______
0x454d4d49,0x54414944,0x0f3d8345,0x00041116,0x10171c80,0x079f0d08,0x4d4e4950,0x5545444f, // 0da0 IMMEDIATE_=____.________PINMODEU
0x03b70d08,0x5650414d,0x02c30d08,0x08574e49,0x4f03cb0d,0x08585455,0x4103d20d,0x08594e49, // 0dc0 ____MAPV____INW____OUTX____AINY_
0x5003da0d,0x085a4d57,0x5405e20d,0x5253494d,0xea0d085b,0x49435005,0x085c5253,0x5405f40d, // 0de0 ___PWMZ____TMISR[____PCISR_____T
0x52454d49,0xfe0d085d,0x49435005,0x085e544e,0x4305080e,0x4b434f4c,0x120e0854,0x4c454405, // 0e00 IMER]____PCINT^____CLOCKT____DEL
0x54455941,0x4c8a8348,0x544d8a83,0x15172c49,0x08280e0b,0x43041c0e,0x04444c4f,0x3283360e, // 0e20 AYETH__L__MTI,____(____COLD__6_2
0x360e040d,0x040d3d83,0x49835508,0xda08040d,0x850d5683,0x00da88ac,0x00000000,0x00000000, // 0e40 ___6_=___U_I_____V_____.........
};

