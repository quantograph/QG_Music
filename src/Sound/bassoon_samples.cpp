#include <QG_Devices.h>
#include "bassoon_samples.h"

const AudioSynthWavetable::sample_data bassoon_samples[2] = {
	{
		(int16_t*)sample_0_bassoon_bassoonc2, // sample
		true, // LOOP
		11, // LENGTH_BITS
		(1 << (32 - 11)) * WAVETABLE_CENTS_SHIFT(41) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(67) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)1058 - 1) << (32 - 11), // MAX_PHASE
		((uint32_t)1053 - 1) << (32 - 11), // LOOP_PHASE_END
		(((uint32_t)1053 - 1) << (32 - 11)) - (((uint32_t)938 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-2.2)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.20 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(100.02 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-5.5)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(260.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.0 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(9) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(-9)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_1_bassoon_enghorndx3, // sample
		true, // LOOP
		11, // LENGTH_BITS
		(1 << (32 - 11)) * WAVETABLE_CENTS_SHIFT(-35) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(79) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)1539 - 1) << (32 - 11), // MAX_PHASE
		((uint32_t)1534 - 1) << (32 - 11), // LOOP_PHASE_END
		(((uint32_t)1534 - 1) << (32 - 11)) - (((uint32_t)1479 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-2.2)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.20 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(20.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(100.02 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-5.5)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(260.01 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.0 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(9) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(-9)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
};

const uint32_t sample_0_bassoon_bassoonc2[640] = {
0x00000000,0x0095003b,0x00ffff84,0x023c0140,0x01e101eb,0x029e03df,0x02e302bc,0x03e302b6,
0x04ab0347,0x05cd050c,0x06d2072f,0x075a06be,0x06a20686,0x04ae047a,0x04270466,0x03560433,
0x04130496,0x044902fe,0x01b60203,0xff4b01fe,0xfe4affb0,0xffabfe7c,0xff58fdd4,0x0072ffc7,
0x005b00d7,0x02ad0239,0x0366015c,0x03e00395,0x05420558,0x07dd07e2,0x077b058b,0x06b50794,
0x07b2071c,0x077208b6,0x069d0610,0x059c06a2,0x066c060b,0x06460768,0x04ce041d,0x013803d4,
0xfde5ffa3,0xf7b3fb4d,0xf253f3de,0xeebef126,0xef45ef16,0xebbdeccc,0xeea6ee98,0xeeceec90,
0xf360f28d,0xf2a1f3bf,0xf38af376,0xf1b8f23e,0xee97efc5,0xeda1efa3,0xef17ed8e,0xf2e2efc0,
0xf7fcf569,0xfb6df9b5,0x00c3fed3,0x06dc02a3,0x0e370b73,0x1575116e,0x19121888,0x1dfd1ac2,
0x1e281e6b,0x1b5e1cfe,0x14791878,0x0c9b103d,0x02d6070e,0xfb1c001e,0xf300f4dc,0xec22f124,
0xe8bee810,0xe4a6e744,0xe7d6e5a2,0xed0fe947,0xf964f298,0x0179fd89,0x0f3b0a0e,0x17201287,
0x204f1bba,0x225f2181,0x24da251d,0x22d922b2,0x19d21f53,0x0c1613a0,0xfb3404e5,0xec86f149,
0xe02be5ff,0xd961dafe,0xd8aad944,0xe248db0c,0xf2cce985,0x07f5fe32,0x1aee12c4,0x27d5223e,
0x254e28b8,0x18911f91,0x08e71076,0xfbf001b8,0xf3fcf76b,0xed30f125,0xe942eccc,0xe668e761,
0xe222e53e,0xddcce0e3,0xda12dd66,0xd98fda40,0xdc26d94b,0xe0c9dfd1,0xecc3e835,0xf89bf13a,
0xf6c0f7ec,0xef60f453,0xe783ec83,0xee00e765,0x0213f6de,0x1d9e118e,0x3168283a,0x38783642,
0x340035fd,0x2b1c30b9,0x259827bf,0x20542238,0x19831dc3,0x0c5414cb,0xf7700186,0xe096eb04,
0xd24ad7ee,0xcdc1cf46,0xd1e9d07d,0xd9aad44c,0xe38ede77,0xf079e81d,0x0111f976,0x18f60c60,
0x2d1d2306,0x3f243708,0x46dd4440,0x47a548ea,0x3e0b440c,0x28bc3429,0x0bba1b58,0xefbbfd37,
0xd789e1bb,0xc94dcf99,0xc3a5c5d3,0xc502c416,0xcd06c752,0xdf69d423,0xfd6aed92,0x1b590ebc,
0x312f27f5,0x36c3346f,0x2b0433f4,0x13432012,0xfe7b08a0,0xf04af555,0xe999ec0c,0xe703e9e0,
0xe76be5fd,0xed7de896,0xf190eed0,0xf916f64d,0xf200f871,0xe575e979,0xd68bdda5,0xd43bd516,
0xdfa6d8da,0xea78e3a2,0xe6ede7f7,0xd94be3c6,0xd2d6d813,0xdc96d4b6,0xf7dbe43d,0x1d330ae6,
0x3d7e31b2,0x4e024882,0x48494b01,0x3b3e428d,0x31b636b3,0x2e9d2f7a,0x28b42c0d,0x19182253,
0xfddb0cab,0xdfb6ed98,0xcde8d60c,0xc81dca3e,0xcd6cc9ac,0xd07bcd87,0xd5a4d388,0xdee1dab9,
0xf06ce78e,0x091dfb26,0x1fbe1477,0x369d2ac5,0x45173f53,0x50904bde,0x4b0d4e65,0x3a964461,
0x22cf2f67,0x088c1569,0xee87fa80,0xdb7ce3be,0xcdd6d3c7,0xcba3cdbe,0xc797c839,0xca72c683,
0xd6f2cefa,0xf0b3e414,0x0b01fdb9,0x1b45141a,0x251d21de,0x1d92249b,0x109216a6,0x091c0c02,
0x049805fd,0x02490487,0xfda5013c,0xfc6afbc6,0x0466ff5d,0x04050369,0xfb820632,0xe436ee7c,
0xcc7fd698,0xbc96c0e1,0xb7abbb5f,0xc644c270,0xd753cbe4,0xde1fd9c3,0xdb47de70,0xdd27dd54,
0xf122e4b9,0x15dc007d,0x3dcc2c42,0x57aa4c9b,0x59735c04,0x511c56a3,0x42974ab0,0x383f3c57,
0x2c6e31e3,0x19d724d7,0xfeea0f18,0xdf42ef25,0xc678cf55,0xbc69c1e3,0xbda0bb61,0xc0a1c07f,
0xc9a3c3a2,0xd1eecbc8,0xe48adb37,0xfc19efaf,0x1aa30d60,0x3430260d,0x4a6740c2,0x598e51ea,
0x5f8a6010,0x56bb5c8b,0x3fa74c66,0x206e30ba,0xfcf310c9,0xdec9e980,0xc581d15a,0xbad2bfab,
0xb112b66b,0xaaf0aaf8,0xb74dae2b,0xd7e9c617,0xfab1e9c3,0x15660a37,0x23d51db2,0x2544275e,
0x1fc82320,0x1e3e1de2,0x201f1f20,0x200a20a8,0x12001a23,0x00be09b8,0xfa4cff1a,0xf772f447,
0xf2a3fad9,0xdf9ee9d1,0xc5e8d3ac,0xb12cb972,0xa6e7a78f,0xaf76abba,0xc335bcc1,0xd8a6ce62,
0xdfe0d857,0xe584e223,0xfa32f34f,0x27c50fb9,0x4e2a39c6,0x64765a18,0x623e6978,0x5a5760f9,
0x47bf4edf,0x35053d40,0x22a32c68,0x0ced1ab9,0xf0f6ff64,0xd14cdf78,0xbce3c288,0xb7fcbc3d,
0xc124bb09,0xc600c486,0xd276cb34,0xdbabd52d,0xefe0e722,0x0a23fa40,0x268f1a3f,0x3e6331f9,
0x4b5e486e,0x557e5006,0x55425662,0x4c2651b2,0x34f842b1,0x1ba128e3,0xfb460c1c,0xe1cbecbe,
0xcab7d58c,0xc25dc587,0xb7d9bc14,0xb655b5a1,0xc1e1b898,0xdf56cfb9,0xfc3eed18,0x10c808b7,
0x18d515d4,0x16b5192c,0x12f81457,0x1820143c,0x23581de7,0x2b82295d,0x20b12707,0x10111941,
0x012407fa,0xf93cfd1c,0xef27f503,0xdb3fe706,0xc517cf8a,0xb05db80b,0xa4a8aa69,0xac48a7f7,
0xb945b2c8,0xcba9c1a0,0xd8b2d04f,0xef5be3b8,0x1053fdb3,0x3e862695,0x61654f91,0x6cb26b9a,
0x665d6b82,0x57435ec1,0x470a4d3e,0x363e3f28,0x22992d9c,0x05d115c0,0xe087f3ee,0xbf02ce29,
0xb082b3ea,0xb542b0c9,0xc2c8bc0e,0xce2dc82f,0xd868d30b,0xe4cedd4f,0xf870edf2,0x154505cc,
0x32df240b,0x48d03f0f,0x507c4e45,0x5221531e,0x4c5e4f5c,0x3ccd4564,0x250c3180,0x0d5f1a33,
0xf45400e5,0xe007e8d0,0xd05bd54d,0xc742cdb8,0xc1f6c4fd,0xbe24bee9,0xcba8c299,0xe784d94a,
0x0279f54b,0x12910c41,0x13b5141a,0x0c29111a,0x091209f7,0x0e3c096f,0x1ccf14a9,0x270c2497,
0x235224e4,0x14ed1bb2,0x077e11be,0x0090028f,0xeb2df6f4,0xd411e297,0xbda9ca94,0xb218b865,
0xadf9aa21,0xaea4ac3e,0xb6bfb57a,0xc2c6c0d0,0xd4ffc99e,0xed56db6d,0x147201e8,0x4956343b,
0x6ef85f9e,0x760e72cc,0x65fa6e41,0x54ac5fba,0x46db4e15,0x39cc4075,0x24272e36,0x015f13c0,
0xd54ded67,0xb190c345,0xa865a7b1,0xaea5a85b,0xc11db7cb,0xcca4c721,0xdb6fd654,0xec96e1a8,
0x0150f558,0x1fa20fb4,0x3ae72f92,0x52f04809,0x5749559b,0x549b56d4,0x47495120,0x33053fc6,
0x183e24d0,0xfdbc0940,0xe412f09f,0xd617ddf9,0xcda9ceac,0xcaa2cb2d,0xc597c87b,0xc8c8c735,
0xda2fce97,0xf472e6da,0x0aae0017,0x139f12ae,0x0f7e12bb,0x05c80987,0x01600356,0x09010498,
0x19bc117d,0x21021ef1,0x1e0820e5,0x149d18c0,0x0b7a1088,0x0397087e,0xedccf8b8,0xd5d0e210,
0xc105ca3e,0xb3c2ba28,0xb266b1da,0xb483b327,0xba73b79e,0xc416bf4c,0xd119c87d,0xef69de49,
0x1de8050c,0x53813bfa,0x733c6691,0x7520775f,0x665d6e92,0x544d5e1f,0x46984c7e,0x35273ea5,
0x1c782a7f,0xf5a30b24,0xc910de36,0xa7c0b562,0xa3c6a276,0xaf2aa807,0xc19aba3e,0xd13fc844,
0xdfb2d853,0xf3c2e83c,0x0cc4ff47,0x2d701d86,0x475a3a77,0x579651ed,0x58515948,0x52f35702,
0x40d7496a,0x26403448,0x09cb18bd,0xeff0fdf8,0xdc79e3c3,0xceedd496,0xcb95ccf8,0xcb04cc8a,
0xca4cc8c9,0xd24accfc,0xe89ddc0f,0xff95f4c5,0x10b00962,0x104e11dc,0x07170cdd,0x00810301,
0x0246fee1,0x0fd0077d,0x1e7b18b2,0x2110209a,0x196c1dd4,0x10b415b8,0x0b190cdc,0xfb330573,
0xe4d7f0d0,0xccb3d8b5,0xbc38c316,0xb2eab4a7,0xb2f2b2da,0xb6dfb490,0xbe9bb9ea,0xc80ac2f6,
0xdd70d052,0x0431eed7,0x3b5f1d5d,0x664852e6,0x773672f0,0x6e89751f,0x5e1a6668,0x4de554e1,
0x00004909,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

const uint32_t sample_1_bassoon_enghorndx3[896] = {
0x00000000,0x00fe0072,0x01170132,0x00ea015b,0x004b00b6,0xff33feb6,0xfeb1ff27,0xff72ffc4,
0xff05ff27,0xfe8afdd4,0xfd44fe6f,0xfdf6fefa,0x0011fefa,0xff4cfef3,0xffeefef5,0x006600ac,
0x02970103,0x014b01d9,0xfe58fff3,0xfe38fef0,0xfe41fdd6,0x0077fe42,0x010c01e7,0x001b018a,
0x00caff29,0x02b3fff5,0x078b05fa,0x073c07af,0x06710718,0x011e04c1,0xfadefdda,0xfd3cfbfe,
0xfdfbfca9,0xfa5dfcdd,0xf863f8f4,0xfb20f967,0xff20fd26,0xfe66ff39,0xfd1efea2,0xf8c8fa34,
0xf723f7d6,0xf92df7d8,0xfc30fb2e,0xfbc9fc13,0xfbd2faf5,0xfe85fd44,0x03af022c,0x02480209,
0xff8b01be,0xfe1dfef8,0x00dbfde5,0x0791055c,0x0b380974,0x0b430b94,0x0ae90b31,0x0a8909e9,
0x09490bc5,0xffe2044a,0xfb41fd3e,0xf9eef9fa,0xfc64fb18,0x0029fec4,0xfea7ff4c,0xfaf6fcce,
0xf938f9e2,0xf85ef8bd,0xfa73f9d3,0xf777f902,0xf5e0f6fc,0xf7d0f6b3,0xf9a8f80b,0xfc3bfb69,
0xfbdcfcca,0xfc67fb15,0xfed6fd54,0xff2fff33,0x03280208,0x039102ae,0x07b703cd,0x0c3e0bab,
0x0fd10e51,0x0e5c0fb5,0x09b20af9,0x050308b1,0x03350388,0x035702e8,0xff9501a1,0xfad1fd41,
0xfa0bf9fa,0xf9e2f97c,0xfc82fb9a,0xfe42fd7f,0xfed2fe8c,0xfa11fcb9,0xf6bff794,0xf5baf712,
0xf298f316,0xf526f3fb,0xf9b1f7a8,0xfb02fb6c,0xfdb3fae5,0xfb91fe4b,0xfa85fa06,0xfdbafc35,
0x048a0098,0x0c89085f,0x10eb0eba,0x114511f6,0x121c1147,0x1225134d,0x0b6b0e51,0x03f708e7,
0xfcf7ffb4,0xf7c2fa0b,0xf79af5e6,0xfc01fa39,0xff42fe28,0xff90ff8b,0xff85ff60,0xfddfff7f,
0xf8c9fa85,0xeff1f4d7,0xedefed90,0xf245f139,0xf43af2cd,0xfa21f784,0xf96ff9c5,0xf3f5f6e7,
0xf20bf21d,0xf661f577,0xfb18f676,0x025efce4,0x0c34083f,0x157a12b4,0x1f061a69,0x1d9a1e1d,
0x151d1b39,0x0c8c112e,0x04580748,0xffd300e6,0xf7a4fd22,0xf644f63d,0xf696f554,0xfddaf970,
0x04b9023e,0x080307f2,0xff930382,0xf7cffacf,0xefdcf27d,0xeda5edf1,0xeb02eb44,0xf20bef3d,
0xf5d3f65c,0xf63cf336,0xf976f9a8,0xececf3a7,0xede1eee8,0xef9fef39,0xfa6ef15e,0x12a20406,
0x198e157a,0x2bba2454,0x2e413007,0x22e82959,0x179f1cf4,0x05751156,0xf57afbde,0xedaaeedb,
0xf30eeeff,0xf4c7f4c8,0x00e0f991,0x0a7f0690,0x0eef0cce,0x08300ee3,0xf914ffc8,0xe673eeba,
0xdd52e4a1,0xe056dd6e,0xef73e8eb,0xf5aef406,0xf998f2b8,0xfbfbfc66,0xe4e1ed4a,0xe355e410,
0xdc6dde0f,0xece8df2d,0x11ab0393,0x216c1e4e,0x3a3a2eaf,0x3fa93eb3,0x320a39de,0x28d02d2f,
0x0afa19a2,0xf382fb5e,0xe703ee4b,0xed7eeaa4,0xecc6ea7a,0xfda5f3b1,0x0c48079f,0x1851146a,
0x168a1772,0x05f30f88,0xe595f674,0xccd1d77a,0xcc36ca8a,0xe163d786,0xeeb0ebf9,0xfee6eec0,
0xfcc70508,0xe71bf47a,0xd571e0ab,0xd1bcd09f,0xe313d1ff,0x10acf8da,0x252a1c34,0x3978338c,
0x42bb3e15,0x46b642dd,0x3c2446ef,0x1f6f335b,0xf9f00d13,0xe2dbe60e,0xdd1edd97,0xe9d0e4a7,
0x0406f46b,0x130e0e00,0x1147130a,0x182f15c8,0x1b4c1c3d,0xf1780a54,0xc08edae8,0xb69ab68f,
0xd31dc1c9,0xf4f8e3f0,0x00dffcf3,0xfe4e028d,0xe6d9ee8f,0xd8d7dfcc,0xc8b8cc14,0xe694d37b,
0xf945f203,0x1e3b0dd6,0x3dad32c0,0x36453bc3,0x473f3a3b,0x4a1b4faa,0x3aaa3ecc,0x20a33015,
0xe5dc03aa,0xca42d586,0xc8b7c2a9,0xf8b8deae,0x19490df1,0x1df121b1,0x19f216fa,0x23f61f05,
0x09321f32,0xc679e7b8,0xa474ac17,0xba55a9a6,0xe274cd3e,0x12b9fc0e,0x0318133d,0xe4fcf37e,
0xd972e125,0xc866d1d6,0xe232cff0,0xf8bcf7fd,0xfe8eeeaf,0x3aed1deb,0x39433d0a,0x4bcf3eb5,
0x5a8957fe,0x39194c4b,0x2bfe34ac,0xfb491929,0xccd8de02,0xba99beef,0xe40dcaf9,0x149ffe1b,
0x2716217d,0x20fa24e3,0x20a8201b,0x17b61f06,0xdbf6fdd2,0xa8b8bcb6,0xa602a147,0xd331b905,
0x03faec29,0x11e719db,0xe90afc8a,0xddb3e222,0xcdf2d4a3,0xdddbce4a,0x025af333,0xefaff777,
0x29310514,0x3c473b76,0x46e83daf,0x57395033,0x459c570f,0x35d63aed,0x11f62b2d,0xd812f06e,
0xb8c9c5c4,0xcf28b8b8,0x07fbed66,0x276e1a5f,0x255d2a83,0x1d292125,0x1a6c1d0c,0xf68d10d2,
0xb67cd595,0x9e65a34e,0xbcdfa7fb,0xf1d8d738,0x19220c03,0xf3ee07fa,0xe300e44c,0xd1dad994,
0xd6d9cf0a,0xfeddebb5,0xf65404db,0x0e45f581,0x3ac72f70,0x3d2138c2,0x52f54b0d,0x5419586a,
0x3a5943cc,0x227d300f,0xe9970734,0xc226d4b9,0xbba7b6d9,0xf163d494,0x1ac808ea,0x29c4265b,
0x26c92997,0x1b342093,0x0772160c,0xc906e9d6,0x9ea4abdf,0xace89eac,0xdb8fc350,0x0c37f472,
0x041e1260,0xe481eeed,0xd858e2d2,0xd1ecd2d5,0xf509e0fc,0x05ba075c,0xfc4bf7e7,0x304515a0,
0x374436e6,0x5177413e,0x5df059ae,0x3eef5180,0x29af3501,0xfae617c7,0xd152e298,0xb41ebe4e,
0xdc66c25c,0x0e34f617,0x2a981eef,0x2c102d56,0x1fdf287a,0x1295191e,0xdd47fd98,0xa5e3bf2e,
0xa2759d37,0xca92b39b,0xf876e071,0x0cab0ce7,0xede1fec4,0xe4cae99e,0xd41fdaf6,0xe834d64b,
0x0d8afce2,0xf65701d9,0x265509a1,0x353a3630,0x4693371f,0x5c7b5496,0x4c8b5d69,0x325f3bb2,
0x0d4723fa,0xd9b1f0d7,0xbcd3cad7,0xc8fcb796,0xff31e41e,0x20951300,0x2d9a2afc,0x295c2c85,
0x1a7e2379,0xebd20b3e,0xb001cbec,0x9bcf9c75,0xc245ab04,0xe6eed67d,0x0fa5fd90,0xf34b05ad,
0xed05e95e,0xdaeae5bc,0xdbead2ea,0x0331ef6b,0xfe940cf1,0x14a1fd70,0x36a32fd3,0x39543347,
0x58434be3,0x598d5e04,0x3da84830,0x1c213104,0xe4d100e9,0xc206d169,0xbc79b690,0xecbcd36f,
0x159c0554,0x2826224c,0x28d327da,0x22662703,0x072a1979,0xc12ae444,0x96caa44c,0xae579cf7,
0xda41c5ab,0x0540ed4c,0xff5b0e1d,0xe95fecfa,0xe490ec92,0xd75ddb09,0xfb25e60c,0x08180ab1,
0x0598fa5d,0x32ed215f,0x34933466,0x55f043a0,0x5e6c5ce1,0x47855606,0x2e243d4b,0xf5fa141e,
0xc8d1da48,0xb3d5bb2f,0xdcacc2b9,0x0da1f6fc,0x25fe1c5f,0x29b329aa,0x240027dd,0x11711c02,
0xd405f815,0x9f93b4ce,0xa72a9b9d,0xcc3ab984,0xf024dc69,0x07ff06eb,0xea9ff93d,0xeb91ed74,
0xda7ce281,0xf05cde3d,0x0cc20101,0xfd60040a,0x29140f04,0x343b33c0,0x49303873,0x605e585d,
0x53256088,0x393a4625,0x0a2e25d1,0xd75aed5e,0xb9a2c699,0xcb2bb8bf,0xf90be281,0x1a200b56,
0x266023cb,0x27852801,0x1e1a2522,0xef680f0c,0xa7e3c775,0x98239693,0xb916a6a8,0xdcb8cac8,
0x0787f4ab,0xf38503c8,0xf06de957,0xe6afede5,0xe4b8def7,0x0510f4b4,0xff210b5f,0x11bcfc77,
0x35852da3,0x3afd34e1,0x5c6c4ee8,0x617662c9,0x448751e1,0x236f3721,0xe66b048c,0xc089d147,
0xba56b5a3,0xe974d030,0x12fc00d1,0x27d12190,0x25ea272c,0x1f762256,0x058e18b9,0xbc5ae20a,
0x93be9ef5,0xaae59a15,0xcfe9be55,0xfc84e422,0x009c09c6,0xea9eee3b,0xf006f249,0xe10ce84b,
0xf9ffe9c4,0x081909e4,0x00b6fb30,0x32951a91,0x363c36e6,0x54703f23,0x65f461e1,0x4e2c5e65,
0x377c44bd,0x022520f5,0xd015e4b5,0xb360bed2,0xd685bdfc,0x042cee3d,0x2238152d,0x2542264c,
0x2297252d,0x147a1d4d,0xd695fcd8,0x97d0b188,0x9d4d91fa,0xc0cdaf24,0xe76bd16a,0x08b801e6,
0xed52fd1a,0xf5b1f0d4,0xe938f276,0xea9ae218,0x08e4fa4e,0xf6a70106,0x21110496,0x358a3229,
0x46e53887,0x648f5906,0x5a9466a6,0x45544f88,0x1bf0359c,0xdef7faef,0xb8bcc7ee,0xc2cab379,
0xf679dcee,0x1a1d0a0b,0x2413241e,0x202d22f2,0x18b31dcb,0xf2430d3b,0xa835cb8c,0x92459438,
0xb22c9fad,0xd58ec2f1,0x07ccee7b,0xf8fe087e,0xf203eb52,0xf052f3ee,0xe31ae69e,0xfd76ee58,
0xfcbb0691,0x08ccf853,0x325224c3,0x3d7d35dd,0x5bcd4eab,0x650a63e4,0x4e9258bc,0x32a94312,
0xf6e817b8,0xc504dbdf,0xb459b50d,0xe01bc6e1,0x0eaffa86,0x25db1ef2,0x22eb24bd,0x19af1cf9,
0x07b61493,0xc402ea73,0x9252a331,0xa31f941a,0xc6aeb54c,0xf4d8d9f0,0x069f09b8,0xeff1f841,
0xf4a7f875,0xe456ede7,0xf1fee4fe,0x037fffb4,0xfa87f873,0x27460e88,0x39a53335,0x561644bf,
0x663b6067,0x563263ae,0x3d274b07,0x0f502b28,0xd878f117,0xb4c3c2b2,0xcd79b8c1,0xffb2e6e1,
0x209312f6,0x20e62356,0x191d1e13,0x1340162d,0xe10503a9,0x9c19ba29,0x959e8f3d,0xb8b0a635,
0xe0cacb2e,0x0924fb6e,0xf4a503b8,0xf90df438,0xe9e9f2a6,0xe6fee295,0x0110f416,0xf74cffc2,
0x174cfddf,0x34272c09,0x46983a3d,0x60665660,0x604666bf,0x4a83566e,0x291d3db7,0xea9f07c5,
0xbe49d091,0xbb54b458,0xeedad2ca,0x17d40625,0x206321bb,0x1adb1eda,0x170818c0,0xfd511103,
0xb09bd6b5,0x8ebe96e7,0xa962964b,0xd094bd6f,0x0249e796,0x01200bff,0xf649f254,0xf143f81a,
0xe254e887,0xf4d8e920,0xfc43ff2a,0xfff8f66a,0x30011bc5,0x3bf93671,0x5b8249f2,0x6848655f,
0x525f5ec3,0x3afe48f8,0x01a722a7,0xd067e6bf,0xb48dbcdd,0xd73dc064,0x0931f01f,0x24921cff,
0x229923ad,0x1a031f98,0x0d941507,0xcaf8f3db,0x926fa721,0x9aa38fdf,0xc29cadda,0xeebed762,
0x0b2506c4,0xf48affdc,0xf870fa5b,0xe529ef60,0xe9bde090,0xfe53f5b9,0xf20bf5a8,0x2389064c,
0x3907337d,0x4e584033,0x66c05c3e,0x5d5b682a,0x44b350eb,0x181133ec,0xddb8f789,0xbbc8ca65,
0xc706b7e2,0xf9c0e010,0x1efe0e8c,0x1fc32283,0x1aed1de3,0x1596198c,0xeba00ab5,0xa168c1fb,
0x8e6b8dbc,0xb4b09e01,0xdbcdc8da,0x0b10f660,0xf8db0840,0xfa19f24c,0xed57f565,0xe0a9e269,
0xf4d6ea54,0xf48bfd02,0x0b4bf565,0x35d3270f,0x40333948,0x5b8b4f48,0x6512639c,0x52465c41,
0x31d24617,0xf32b136f,0xc5d3d97e,0xb927b7f0,0xe468cbf6,0x12a7fdee,0x211f1f55,0x1ebc2063,
0x182c1b46,0x08451510,0xbc00e4ec,0x8f7a9cf1,0xa15191fa,0xcae0b69e,0xfa8bdf86,0x07120d2e,
0xf4e7f814,0xf363fa58,0xe182eae2,0xec39e29b,0xfaeff823,0xf6dff0d7,0x299b1015,0x3bbb35c9,
0x53d144fc,0x68e76042,0x5820645a,0x42994ef1,0x0c152d53,0xd6a4ed83,0xb795c3a9,0xcfeabb5c,
0x0129e954,0x2071148d,0x21ac21d7,0x1cec1fd3,0x13f1191e,0xe07f0505,0x9a5eb7de,0x93668ed2,
0xb8e1a391,0xe24fcd04,0x0c2efd1e,0xf7b60576,0xfb0bf692,0xe9edf2d4,0xe2d2e0cf,0xf870ec68,
0xf055fa43,0x1138f75d,0x35e02a58,0x455d3bcc,0x60255415,0x642268c8,0x4eea5819,0x2c854299,
0xebf10a58,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,
};
