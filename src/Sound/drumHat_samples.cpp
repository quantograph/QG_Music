#include <QG_Devices.h>
#include "../MusicDef.h"
#include "drumHat_samples.h"

const AudioSynthWavetable::sample_data drumHat_samples[1] = {
	{
		(int16_t*)sample_drumHat, // sample
		true, // LOOP
		12, // LENGTH_BITS
		(1 << (32 - 12)) * WAVETABLE_CENTS_SHIFT(35) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(70) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)3603 - 1) << (32 - 12), // MAX_PHASE
		((uint32_t)3585 - 1) << (32 - 12), // LOOP_PHASE_END
		(((uint32_t)3585 - 1) << (32 - 12)) - (((uint32_t)2157 - 1) << (32 - 12)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-5.2)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(1.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(80.03 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(2000.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(3874.92 * AudioSynthWavetable::SAMPLES_PER_MSEC / AudioSynthWavetable::ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * AudioSynthWavetable::UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(0.1 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * AudioSynthWavetable::SAMPLES_PER_MSEC / (2 * AudioSynthWavetable::LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.4 * AudioSynthWavetable::LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	}
};

const uint32_t sample_drumHat[1920] = {
0x00000000,0x012dff8d,0xfe94ff3d,0xfccb035c,0x02ed00ab,0x0041fc12,0xfc16045b,0x0569fe9d,
0xfed3fc41,0xff580393,0x04bcfbd6,0xfc80ff78,0xff67034a,0xff6cff94,0xf9cc0270,0xfaff0894,
0x0615fda1,0xe985037c,0xf33b1f85,0x1ce6ee31,0xf03cf84b,0x27280577,0x2d69b880,0xb4c31bee,
0x16762d62,0xe60fd933,0x99576a20,0x72050018,0x23018df8,0xaeaa45cb,0x44f003df,0xfc98c13e,
0xce403817,0x1eed040a,0x0f82e133,0x0ecff649,0x0198f11f,0xd69217c9,0xfd4022b8,0x1388e580,
0xd6681507,0x438802a0,0x1316a7ef,0x93d850db,0x391f21a2,0xef6bc3cc,0xd961486c,0x518bd36e,
0xe922dae2,0x166d1a86,0x0537cfa6,0xbd9b3bcb,0x1f030dc4,0x01dde552,0x0aca00d3,0xe1670158,
0x15431ce9,0x29fbbdc7,0xbcd020a9,0x43560da1,0xf8e6b448,0xa6ff5e37,0x490000a5,0xf2a9c52d,
0xfcb1317d,0x4a9bbc72,0xb74afbb3,0xe27853c8,0x1fece4ac,0xde720724,0x251c0988,0x0750ceb6,
0xc42c2e82,0x0de718b0,0xf286f480,0x31480564,0x4225a2c1,0xc3cd0b15,0xf7c92bbd,0xd1d10bfc,
0x05543201,0x5424b7c5,0xf72fd9c2,0xffde0e22,0xcd760c21,0xd76945e0,0x357bef8e,0x14e4cf6e,
0xf8f50116,0xf62e0451,0xd8fb1b62,0x16c41511,0x367cc42f,0xd963f7c9,0xf7ae2ad9,0xfdb0eeee,
0xdb872645,0x3ffdf123,0x06dec4e6,0xe30322c6,0x0e2efb39,0xcb581287,0x10f225b8,0x2238c929,
0xd770123c,0x26d606fd,0xfce5d6c4,0xe0522954,0x18a4f86a,0xe7f8fd49,0x11fa0f1f,0x0f58dfb3,
0x0bd4ffcb,0x03c6e667,0xbc312cc7,0x161f2175,0x0956d96b,0x0a8a0b6a,0x20d1d4e7,0xc6271448,
0x0842250b,0xefa2f084,0x1fa517b0,0x4d2ea344,0xb789093d,0x14232f18,0xe206ded6,0xcb3155c3,
0x53e1d8ee,0xdc66db48,0x0ce42a5d,0x0557d260,0xbf543a70,0x3b0300f0,0xf777ce30,0xf7662691,
0x1cacde0a,0xd1de11d1,0x1c9513fd,0x1599d171,0xfd9b0563,0x06d7f1fc,0xd7e31763,0x0e7f12fc,
0xf83eebd7,0xf0fb1ec4,0x2434e894,0xde4afa3b,0x0942223d,0x3060cbe9,0xdd69fbe8,0xfaf7209f,
0xf6f6f72e,0xda762538,0x3aabfb02,0x245cb577,0xdda31197,0x0bf007fe,0xc2390e4b,0xff2b404f,
0x3431c076,0xc9361271,0x4812044a,0xf478b62f,0xc64c55e4,0x5bfdd5fe,0xbf1cdfd7,0xf2a7555b,
0x1e6ccb00,0xbd772b32,0x44400516,0xfd6ebde1,0xe81031e5,0x2509e281,0xd450094b,0x26561163,
0x10bec818,0xe4451c6f,0x0a25fc0f,0xc3731ab5,0x09d22b4f,0x1a61d66c,0xf8c803b8,0x2e17eb7f,
0x08bad675,0xe04217e5,0x09700da2,0x0292ef36,0xe81b126a,0x10a80565,0xf0d3f117,0xd2e02e23,
0x241406f6,0x0438d4dc,0xde76277d,0x48b4e6eb,0xe884cdd5,0xf1783db6,0x4191c2c9,0xa54d1103,
0x19bb4175,0x1392b8e7,0xcff73637,0x5fd8dbeb,0xdecdc511,0xd2b25018,0x10b4f4e2,0xd138187a,
0x355f0968,0x28f7b399,0xebd206dc,0xf92e06e5,0xd0901f6f,0x16bd16ca,0x0ba9d7f5,0xf1831683,
0x296ae532,0xcee3ff5f,0x0cf72b7e,0x1580ce00,0xd15121e5,0x22330449,0xe6bfed0b,0x0d572091,
0x2884c75c,0xd01b1219,0x251e0d4c,0xf642da09,0xf07a2959,0x1b98e27b,0xbf591933,0x14f92723,
0x0c65d420,0x0759102c,0x354ccb06,0xd0bf00f9,0x062123dc,0xedecef12,0xe63a2fcb,0x2f61e59b,
0xe4d7eff9,0xf79e228c,0x0b58f229,0x0060003b,0x0782f6f6,0xf76003da,0x068f0096,0xfa71fed4,
0x23d5f88b,0x1346d15e,0xd2f4190a,0xfac11cfd,0xe8e00484,0xfcf01d1f,0x33efdbd3,0xfcc1e174,
0xfac41047,0xf36bfd77,0xd64e24f0,0x0cce1225,0x17ace542,0x10beede1,0x0b25f042,0xf8d4fc8a,
0xe1361493,0xf1ca1d14,0x0cabfc5f,0x1121f1e1,0x100eea8d,0xe8b2036a,0xfce21740,0x00d9f476,
0xef5c1399,0x2a71f0dc,0xfca9debc,0xf14d1b14,0x0b94f4a4,0xd756122f,0x0b8319f3,0x1e1cdcd5,
0x0f31f000,0x0b6feb31,0xd73310a7,0xe9052812,0xf1de0d09,0x14760788,0x39f7cb85,0xfc64e185,
0xf3251111,0xde1d0fa8,0xdfb12f32,0x2520fa10,0x1087da36,0x09cafccd,0xf748f25a,0xc4962f00,
0x1a8e1851,0x0dd5d610,0x04ca0c2b,0x3a0bd14c,0xdb4aef1e,0xeb7831f2,0x062af7fc,0xf5120a51,
0x0ea6fa2d,0xf3e8fe0c,0x0994056c,0xe941fbef,0xef0126f4,0x317fe44c,0xf441e53c,0x031315d1,
0x09d2e73d,0xd51c1af8,0x0ed01426,0x0e25e521,0x071efdab,0x085ff022,0xe56b0d33,0xff0612a0,
0x0001f984,0x051904cb,0x1130ec84,0xe86f0484,0x01b51304,0x07c8f1bf,0xfd3c041f,0x13d9f47f,
0xf6e6f55f,0xe72e1844,0x01fc0caa,0x0eb3f43f,0x051ff53a,0x09cbfacc,0xf99ff7bf,0xead51752,
0x10e8ff15,0xf47bf78e,0x05970ed1,0x164ce574,0xe8e40432,0x03c90f52,0xfd56f6e3,0xfaed0c36,
0x0d8ef663,0xfb23fbca,0x03490355,0xf81cfd59,0xf57b10f4,0x16d2f731,0x0458ecc5,0xfe9c04ed,
0xfe7cfbd1,0xe00d1261,0xf8621c0b,0x11a0f388,0x068ef517,0x11edf48e,0xffc3f1f5,0xf0c70d99,
0x07c20499,0x027cf5db,0xfe4504a3,0x0bf8f7ba,0xea250098,0xef261ef7,0x0ed6f9e0,0xf651fc27,
0x091906fd,0x0cfeece4,0xff2afed3,0x081df949,0xf4050313,0x099a0493,0xf4cdf7ba,0xf50e180b,
0x1326f277,0xf033ff38,0x09000949,0x0056f29b,0xfe010971,0x054bf6ac,0xf3cd0952,0x1029fd47,
0xf95cf5f3,0x041f09e9,0x01abf2ad,0xea301237,0x053606fd,0xf899fef4,0x0e9f0203,0x09d6ea5b,
0xf8a805d8,0x004bfede,0xeba80ddf,0x154a0411,0x116fe1c2,0x038cfd66,0xffb9f609,0xcf8f1cbc,
0xfcde2460,0x1099ece3,0x0e76f8eb,0x2655dd63,0xdb98f8e9,0xe6c83342,0x0e60f6c5,0xf3ec05ee,
0x308bf0a2,0x01acd3ad,0xe13222c0,0x00a304f5,0xdcee15ee,0x1fd609f3,0x1229d34d,0xf5450c16,
0x132ff2fe,0xd75108c6,0xfd0c262e,0x15cde5eb,0xf680011b,0x16bdfa2f,0xfdb9ed98,0xf2e11075,
0xfe7a035c,0xf940068e,0x0e1afd4d,0x0cd9edd4,0xf562febc,0xecc111d9,0xf4c410bb,0x089b02a8,
0x193decc0,0x12bfe752,0xfc39f6b6,0xdbba152b,0xe8f626aa,0x12effe41,0x1027eb8b,0x1a6bed1c,
0xfe28e9b9,0xd4fb201f,0xffd41a2b,0x03def5ac,0x0ca1ffa6,0x1dabe2ca,0xf0c7f692,0xebb819e6,
0xfba909fa,0x04240171,0x0af2f5d7,0x02fef937,0xffdbfe3a,0xf54e057b,0xfcb90a19,0x0673fbc4,
0xff05fd7a,0x0bb7fd15,0x02c3f1cc,0xe8b00fa1,0x0a190af3,0x041dee2a,0xf6380cb4,0x15d1f5e2,
0xefddf754,0xf7231873,0x076ff73c,0xf55706b5,0x11c3fc42,0xfa8df3de,0x03f70ae8,0x0ad7ed4f,
0xed5c0b46,0x1063016f,0xf10ef717,0xfd4c1687,0x080ceed8,0xe7f01308,0x23baf9de,0xf4e2e5d6,
0xfa311cc1,0x12a1e7a5,0xd83f12b6,0x1b4a0f43,0x0865d9bd,0xf3f614ab,0x1aabed58,0xd8a50429,
0xfb8c263a,0x12f3e8d1,0xf3480332,0x11070027,0x02eaed8e,0xf35c0c4a,0x03ef0297,0xfd71fe21,
0x06bd00df,0x04eaf571,0xf2d105bf,0xf9e00ce4,0x0a2efd18,0x03aff4dc,0xf7c50675,0x0d26fdfa,
0xfaaaf53b,0xee1413eb,0x0c80017b,0xfdb1f54f,0xfbac0a5d,0x0ccaf7f9,0xfdb0f963,0xf865070f,
0xfaec06ab,0x033f020d,0x0ee2f618,0x0952f147,0xfdcbfd81,0xf51205dc,0xeedd106c,0x014b0a04,
0x0dcff5d0,0x06c5f33c,0xf2ae0456,0x01690a49,0xfbb9fa10,0xf6890fdb,0x19c9f389,0xf6e6f1d0,
0x021f0f99,0x0ac8ed0a,0xeacc0cd4,0x130e0300,0xfd96eda7,0xf48811a4,0x07f4fb95,0xed7f057b,
0xfda10fe7,0x05c8f967,0x087efc27,0x0f51f0c6,0xfee2f882,0xfb080487,0xf6f90742,0x067d0434,
0x05aef399,0xf3a70759,0x03a204eb,0xf43eff53,0xf97a11c5,0x17fcf296,0x02bfeec3,0xfaea05bc,
0xfd57023b,0xfa350519,0x014d036a,0x0926f964,0x0060f9be,0xfd6802f6,0xf9b902e0,0xfcbd080d,
0x0592fbea,0xfb21003a,0x0640013d,0x0101f883,0x00cb038a,0x05b9f855,0xf3c7052f,0x039506d7,
0xffc6f9eb,0x02fa03af,0x089cf4c8,0xf1870454,0xfb7b0cc3,0xfb8b0151,0x06ac039c,0x13b5eda1,
0xfd2bf711,0xfc0e05f2,0xf24c064f,0xf77a10e2,0x0cf0fa84,0x073ef550,0x0d4ef649,0xf96cf837,
0xee0d11f7,0xfb700ad1,0x03580142,0x0f30f558,0x029ef41f,0xf7b605e9,0xf83e06d5,0xf5c40b84,
0x11f1fe25,0x0e36e85c,0xf9fa0020,0xfe2502e5,0xedbb0981,0xfdc6102e,0x0d1df4a2,0xfef0faed,
0x03b3ff99,0xfb02fe8e,0xfd6807a2,0x0758faf5,0xffaafcd5,0x0313ff16,0xf9eeff98,0xfc7d0898,
0x02a4fd33,0xf8f6034d,0x06340291,0x0053f73d,0xf3df0b02,0x0e0e0021,0x095bee7a,0x002fffb2,
0x08e9f8dd,0xecfa0277,0xf32118ac,0x0d73fa7c,0xfa71fa16,0x05610639,0x0801f147,0xe4a70c0e,
0xffc81636,0x1626ec68,0x02aaf565,0x1454f6b3,0xf891f007,0xe1811e5f,0x0a190941,0xfde3f5aa,
0x02f60755,0x0d2ff074,0xed7703df,0xfa781184,0x0320fcc9,0x0651fea2,0x0d89f18c,0xf06a00c8,
0xfde50f74,0x0297f870,0xf80a07fe,0x126afac5,0x06eeeda1,0xfc4e02c2,0xf9080289,0xf1480df7,
0xff0507c7,0x0162ff4f,0x0cc3f9db,0x0738f1f3,0xfc950190,0x081bfcf7,0xf821fd4e,0xff7409f7,
0x02e0f822,0xec6e0bb6,0x00f00c17,0xfe28fb64,0x07000454,0x1857e953,0xf685f7be,0xfd350c7b,
0xfbd2fce1,0xec5010c0,0x097407ac,0x0ef6ed98,0xfca5fb3c,0xfe0f0511,0xfc3affcd,0xf33b0b36,
0x0b3a0337,0x0cb7eda6,0xfe14fdf5,0x0654fd3c,0xf47afff6,0xf7ea100e,0x0951fb7b,0xfba6fcd3,
0x0847023e,0x04eff229,0xea510c2f,0xfff30f31,0x04a2f714,0xf6da05d4,0x0e67ff83,0x075eedef,
0xf7bc062e,0x0b63fdfa,0xfc01f7e3,0xfeaf09d0,0x09fff4e0,0xe8ca0750,0xfd4d144c,0x02cdf739,
0xf51d09c1,0x0ffafd9b,0x0771ef3a,0x0333fef8,0x019ff9e5,0xf8150661,0x050f0121,0xf9fffd8b,
0xfad80a0b,0x03eefda9,0xfc0500b3,0x069c0060,0x0557f682,0xf81f0256,0xfa1b0874,0xfc9d03e3,
0x021e0200,0x0ab7f84a,0x056ff6ff,0x03edfc20,0xf960fef4,0xf0880e3a,0xfb090a73,0x03de0163,
0x0de5f4a0,0xfb14fa15,0x06a604d8,0x04d1f219,0xee4f0c6d,0x0d670406,0x0507ef99,0xfa6205a9,
0xffc60050,0xf69b05f2,0xfede0645,0xfffdff5b,0x0447ff0e,0x03ccf99d,0xf5810370,0xfd9d0aca,
0x0c45f7a2,0xfffff93f,0x082ffed5,0xffc4f66b,0xf2e30c41,0x03fb0345,0xf986ff8f,0x02ff054a,
0xffbff979,0xf9e50858,0x0b4dfaf0,0xf9f6fb64,0x04b80691,0x0cf2f0c2,0xf53a0031,0x0066094a,
0x040ef8e2,0xf4af0540,0x025a07b4,0x037ff77c,0xf1170872,0x04a00866,0x0461f53f,0xf96305cf,
0x0ea6fbcf,0x004df38a,0xff0806fd,0x0840f6bd,0xf05c0556,0x05c6097c,0x0095f4d9,0xf8580b12,
0x0cfaf907,0xef58ffa4,0xff8c113f,0x097ef245,0xf725051a,0x1554fa9e,0x004eecde,0xf4d80ea9,
0x089cfcc2,0xee110306,0xfcd611e9,0x04b4f75d,0xf5c50777,0x0e2afe9c,0x0348f1f5,0x013003cd,
0x0ac9f55b,0xf2c20111,0xfd770d52,0x0511f953,0xf8bf0395,0x0a69000f,0xff9df4c3,0xf22b0d10,
0x066c02fa,0xfd00fb28,0xffbd05db,0x065af99b,0xfe66fedc,0x047bfecc,0xfe7ffd12,0x008e02a2,
0xfd12fe1a,0xf7130959,0x05e100d5,0xfabafcc1,0x01ab079a,0x0cb5f31b,0xf808febb,0x045d054a,
0x03c5f72f,0xfccd02fa,0x0259feef,0xfda200b3,0x024effdb,0xfc29000d,0xff6603ab,0xfa2900ab,
0xfa2309d0,0x080bfcc7,0xfd21fc0e,0x04a502d0,0x0601f608,0xf9a802ec,0x03e80142,0xfb31fe7b,
0x01ba0563,0x03b6f8be,0xfc0d03a2,0x086cfc2b,0xf2eaff69,0xfba310a1,0x0cd4f51c,0xf79efece,
0x090a03cc,0x03cff231,0xf3e309f5,0x09540139,0xff17f7b4,0xfdf10658,0x0692fa79,0xf56b010c,
0xf7a20da3,0x04c40029,0x0232fb3e,0x010aff85,0x0364fd49,0xff0afe2c,0xfe3b02b6,0x06ddfdcf,
0x0407f7dd,0xfa690256,0xff0503d3,0xfa4d01e4,0xfd4c06cc,0x023cfd9d,0xf88c0367,0x047803e1,
0x07d6f676,0x044afba7,0x0334fa60,0xf8c802e4,0xfc820673,0x005801b3,0x09a3fb09,0xffe3f799,
0xf459095a,0xfd5e072d,0xfb7802ad,0x04220261,0x080bf6db,0xffe2fd0b,0x0328fec3,0xfcd4fec5,
0xffe30468,0x0393fb29,0xf7ae036d,0x020e054a,0x019ffab2,0xfc41033a,0x00a700e8,0xfea2008c,
0x0395ff4b,0x0233fc0a,0x025dfeb1,0xffd7fd47,0xfa0d047f,0x013a0308,0x0258fcdc,0x0118fea8,
0xfd75ffc1,0xf88b0622,0xfeff0542,0x05d8fccf,0x063cf970,0x03f6fa73,0xfcd7ff0e,0xf89c06a2,
0xfdf50546,0x00f0ffd4,0x04f4fdce,0x04d1f931,0xfb840038,0xfcb80519,0xfcba025f,0xfeec03ac,
0x0660fc58,0x00ccfb49,0x016100fc,0x0328fb88,0xfa7b0204,0x012c0380,0xfdc6fdd3,0xfb7f066c,
0x05a1fe03,0xfd10fd9d,0x02a302fc,0x059ef8a5,0xf9ec0102,0xff0e0560,0x0220fd85,0xfd7000ab,
0x006701fc,0x025dfd82,0x007fff17,0x014ffea9,0xfd5c00ac,0x00f801b0,0xfcd5ff17,0xf9ed072d,
0x05c6ffdd,0x021efa28,0x03f3ff6d,0x0791f7c5,0xfbc4fe57,0xfb7805fb,0xfa050406,0xfbd10734,
0x0547fe5e,0x016ffbd1,0x045afe57,0x001cfb2d,0xf57d0728,0x00f90692,0x04edfa69,0x033ffd64,
0x08e9f91e,0xfeb4fa4c,0xf88206fe,0xfeac0417,0xfc4201a0,0xfd5e04a0,0x027dff4f,0xfc68ff53,
0xfed40573,0x0a7ef970,0xfef5f969,0xffc4044f,0x0549fa9a,0xfb6a0062,0x02740270,0xff6cfc90,
0xfa6f04dd,0xfc62040d,0xfd890413,0x04abfe46,0xffd6fcf8,0x05beff30,0x02c2f841,0xfaba045b,
0x0779fe9a,0xfd69facc,0xfd99064c,0xfdeafe4a,0xf3800a9a,0x06d003af,0x00faf7d3,0x005803fb,
0x0b94f6dc,0xf9e9fbf9,0xfc89090a,0x0307fd15,0xfd130176,0x0762fe0f,0xfd10fa6e,0xfa2b08fa,
0x055dfdd3,0xfb0bff4e,0x0017046c,0xfdb2feb5,0xfea804ad,0x04c0fc01,0xffabfef4,0x093dfba4,
0xfbcffa0d,0xfaa00a63,0x09e5faa7,0xf816fcc9,0xfa310c41,0x0894fb5d,0xf93efd70,0xfb370a2d,
0x0864fbe9,0xfde5fb1d,0xfec50553,0x0aacf96c,0xffa0f8d4,0xfda604a1,0x004dfe38,0xf2f50761,
0x0257090c,0x0a55f4e9,0xfed6fca1,0x0312ffa1,0xf90dff8c,0xf66e0c27,0x05d00139,0x0490f8bd,
0x01e3fe0b,0x02fafcce,0xfccaffc4,0xfdf20487,0x04e2fd61,0xfc46fe26,0xfe3505c8,0x01e2fcdb,
0xf76104cd,0x03550463,0x02ecf9ac,0xfffd00c6,0x0396fcf7,0x00f9fe66,0x02a0fd4c,0xf98b01cc,
0xfffb058f,0x01bdfc69,0xff71017b,0x05fffc12,0xfb11fe03,0xf8b908b6,0xfdb203fd,0xffbb01f1,
0x0747fc6b,0x0558f81b,0x01cdfd70,0x00cbfdf1,0xfb01026c,0xfeb9044f,0xfefdff8f,0xfd7a0329,
0x0179ff9d,0xfa5001b1,0x01f104ac,0x07c9f7de,0xfda1fe0f,0x03f500ba,0x028dfa38,0xfb0d0267,
0xfe61042e,0x02a1feda,0xfd78feac,0xfc31058b,0x04bbfe5c,0xfb46fe87,0xfde806a5,0x047cfc76,
0xff11febb,0x048eff18,0x04aef9e6,0xff6cfde7,0xfaff033b,0xfd6004a1,0xfd930168,0xfe4b037d,
0x0558fd97,0x00f4fb8e,0xff7f0139,0x0046ff15,0xfbf30237,0xffb20333,0x0396fd7c,0x0072fd85,
0x01050048,0x0156fd7e,0xfa9a0289,0xfffa040e,0x00f9fda8,0xff680166,0x05c5fca6,0xfe54fcbc,
0xfedf038f,0xffdbfeb3,0xfc790367,0x0280ffef,0xfc2bffd9,0x01bb0375,0x045dfa22,0xfef90005,
0x053efd64,0xfae8fe1a,0xfa8d08a0,0x02c5ffa0,0xfe73ff60,0x050aff71,0x0127fa35,0xfd04039c,
0x046bfe1c,0xfc34fed7,0x00590431,0x0176fc18,0xf8950490,0x018b040a,0x0131fc76,0xff4a014a,
0x029bfe71,0x01eafdec,0x0152fd89,0xfb8b0223,0x02e30233,0x00e9fb1b,0xfcb30434,0x088bfc43,
0xf9dbfbf0,0xf8870b96,0x01e10002,0xfad50274,0x0a57ffc9,0x0bddf022,0xfac2fdc0,0xfa1d0735,
0xfa440514,0xfcef05b7,0x0557fe7f,0x049af98e,0xfd81ff07,0xfd5703e0,0x01560034,0x01a8fe8a,
0x0472fced,0xfe9dfcf0,0xf98d05ad,0xff1e03cd,0x00ccffc1,0x0535fd49,0x0223fa9a,0xfc270211,
0xfed702b5,0xfdf10130,0x009501a2,0x032efd3e,0x028dfd60,0x01bbfd40,0xfc6900cc,0xfb240513,
0xfc490415,0x005002ba,0x080ffb24,0x038cf89d,0xfdfc003d,0xfc71027d,0xfa510564,0x03500256,
0x0731f8b8,0x020efb7f,0xfe7bff7d,0xf86f04c5,0xfd6f0703,0x04dcfd54,0x00f0fcb2,0x02c8ff22,
0xff8dfccc,0xf6d20655,0x00c805d0,0x03aefb49,0x01c9fec6,0x0798faa0,0xfe4afb3f,0xf8a506e8,
0xff7503f8,0x004bff69,0x0334ff27,0x0486fa9e,0xfb9dffab,0xfae0065a,0xfdb50310,0xffcc020f,
0x076ffc2f,0x0493f85f,0x006bfe77,0xfb5e00bc,0xf67b0983,0x06480249,0x023af801,0xff6002e2,
0x06a3fa66,0xf6eb0094,0xfd8509df,0x0566fb1d,0xfed1fefe,0x0750fdb9,0x0013f8f5,0xf66e07c0,
0x00d104aa,0xfde7fecd,0x01fa02c6,0x06b7f88c,0xf9990053,0xffff057e,0xffcefd40,0xfdec03bc,
0x06c5fc81,0xff72fba8,0xfe2e02d1,0xffa0008c,0x020bffd5,0x0102fce4,0xfc560292,0x00bf015b,
0xfc4100a2,0x00ef0396,0x04c8fab5,0xfd6aff9d,0x022d0118,0x0051fd24,0xfe8c0205,0x0173ff51,
0xff28ff9a,0xff2a0119,0xff2600de,0xffac006c,0xfe5e0118,0x01bc0073,0x0096fda6,0xffff00f9,
0x0145fe06,0xfb200279,0x037c0219,0x01f9fa60,0xfd8202c6,0x04adfdb1,0xf9d3ff83,0xfd8107c0,
0x04eefc54,0xfff4fdeb,0x019fff69,0xff16ff4b,0xff07014f,0xfe4e0157,0x03ceffcc,0x00adfb3a,
0xfa1904da,0x02910197,0xfe61fe21,0x01bb022b,0x051afa4c,0xfc05ff94,0xfccc04fb,0xfffd010c,
0x0028ffe3,0x0175ff64,0x0151fdfb,0xfe5e006c,0x010a00f4,0x01fdfd92,0xffecff58,0x004bfff5,
0xfeaf0025,0xfd430271,0x000c01c3,0x014bfe8c,0xff020010,0x01290046,0xff79fec6,0xff8c01c8,
0x032afdab,0xfdfaff3a,0x01b4018f,0x0124fc7a,0xfbe802f2,0x02920110,0xffadfd34,0xfe0302e2,
0x02a8fefc,0xfd96fef1,0xfd31045f,0x0344ff27,0x001cfd86,0x01f20061,0x0317fbb6,0xfa8d018f,
0xff4b04cd,0x0171fdaf,0xfce601ac,0x0168015b,0x011afd8e,0xfefe00bd,0x0260ff73,0x0274fcf7,
0x00aafe62,0xfc3f0128,0xfbf80544,0x011800e4,0xfff9ff53,0x0494fe73,0x01a0fac5,0xfb720337,
0x01d00191,0xffadfe07,0x008c0152,0x01bbfd6a,0xfc5f016a,0xfe610321,0xfec10128,0x01f4003a,
0x02fffc8b,0x01b2fe28,0x0150fdd8,0xfc7c013e,0xfe6c0361,0xff760062,0x004300ac,0x011efea5,
0xffdefff2,0x0143ff36,0xfe03ffff,0xffd9023f,0x02fafda2,0xff2cfea6,0xfeb801cc,0xffbd005a,
0xfe180127,0x0098013a,0x0249fddc,0x016bfe6c,0x01d2fdf9,0xfd33001c,0xfd1e0406,0xff4f00fc,
0xfe0301f3,0x0554fedf,0x0248f9e3,0xfd7c020d,0x0171ffbf,0xfaa70194,0x01110487,0x0547fa05,
0xfd95ff69,0x017e011f,0xfe2afea8,0xfc280489,0x0288007c,0x01fbfcab,0xfecd0003,0x00030102,
0xfff3ff57,0xfdfc018c,0x02680060,0x033ffbf2,0xff24ff04,0xfe580186,0xfddc01f4,0xff9d017e,
0xffc7ffea,0x01d5ffff,0x0306fc39,0xfbf400af,0xffbe03a4,0x00d6fdf3,0xfe6201a9,0x0476fe77,
0x008bfc08,0xfd16027e,0x00010159,0xfec8001c,0xff7b01a9,0x02a0fe73,0xff3bfe8c,0x00100189,
0x0282fdb7,0xfe9eff83,0xffd0014f,0xfdfd0037,0xfcbf03b8,0x01ea00a8,0x029bfd14,0x020dfdcb,
0xffb4feb0,0xfe0501bd,0xfeb50160,0xfe5001e1,0x02d9ffbb,0x0169fc76,0xfe0b0157,0x0120004c,
0xff26ff63,0x005c0110,0x0157fe57,0xff20fffd,0xfecc00ff,0xfe0401cc,0x008e00fc,0x01bdfe77,
0x02b3fdfa,0x01e6fd0b,0xfe57000c,0xfdec0230,0xfda1021e,0xff420206,0x015eff47,0x00defed3,
0x00b3ff29,0xff88ffd2,0xffaa00af,0x00f3ffba,0x01a9fe84,0x0095feab,0xfef9003a,0xfd4001db,
0xfcd4035c,0xffba01fa,0x024efebc,0x02d6fd33,0x01c4fd8a,0x006bfef4,0xff630017,0xfeb6010e,
0xff2c012b,0xff790087,0xff4f00c2,0x00e2fffa,0xff75ff3c,0xfed001b8,0x01deff51,0xff90fee5,
0x01a40073,0x0282fc80,0xfce700ba,0xffef0269,0xffc6ff07,0xfef501a6,0x0265fed0,0xfe55ff02,
0xfdfe02f1,0xff700093,0xff5b0156,0x0472fdf3,0x01c5fbce,0x0032ffff,0xffa4ff4f,0xfce40268,
0x00230195,0xfea9fff8,0x000f0198,0x0156fe37,0xfe8400b0,0x029cffc2,0x00a2fd38,0xff610115,
0x00d6ff39,0xfe6200a2,0x006100cc,0xfdd80025,0xfe730330,0x032afe72,0x000afdf9,0x01f40014,
0x01e0fc8b,0xfc2601b5,0x004e028c,0xffabfeb3,0xff0501d8,0x014ffef5,0xfe3b0099,0x024e0020,
0xff4efdd6,0xff1602ac,0x0320fd74,0xfbd80063,0x00ba039f,0x02b5fc00,0xfd190128,0x02a0009e,
0xff60fd52,0xfd750373,0x032afef4,0xfe13fe84,0xfec3033f,0x021efe6f,0xfeedff99,0x01f70054,
0x029afc8d,0xfe87ffad,0xfe6101eb,0xfe150191,0xfed701f4,0x0161ffc1,0x00ebfe75,0x0047ffb9,
0x0169ff13,0x0008fef0,0xff2700cf,0xff710071,0xfe03015e,0xffaa0189,0x0018ff9e,0x000b005a,
0x02fbfe6b,0x0076fd5b,0xfd8e01e8,0x020f0084,0x005dfd5f,0xfcf3029e,0x03670005,0xff7efca9,
0xfc53043d,0x033cff8d,0xfd92fe84,0x00e40325,0x0420fae5,0xfb070142,0x026802c2,0xff69fc29,
0xfab005be,0x053bff7c,0xfeedfc21,0xffdb0332,0x039bfc1f,0xfc960087,0x01c901cc,0xff54fd7c,
0xfdb9038f,0x0428fe18,0xfdb0fe26,0xff360387,0x01f1fdb1,0xfc32017e,0x017a022a,0x020efca5,
0xffd90011,0x02a0fe56,0xfdd7ff07,0xfd0c03f5,0x009e0091,0xfe5d003a,0x00f30158,0x02a4fcf0,
0xfdac0008,0x00fc01b6,0x01d9fd43,0xffb60010,0x02d2fe6e,0xfdccfece,0xfd000429,0x0023008e,
0xfdc2013d,0x024500c4,0x025efc2b,0xfec50039,0x00fc0029,0xfe96ffad,0xffa601e8,0x0219fe54,
0xff76ff41,0x0073005d,0xfe94ffc3,0xfd340309,0x010800cf,0x0096fe9c,0x00b2ffed,0x023cfe26,
0xffb4fea9,0xfeaf017e,0x00eb000d,0xff29ff82,0xfff1014f,0x01affe5a,0xfdf90038,0xffc701ce,
0xff31ff9d,0xfe970211,0x023cff3b,0x00b3fe2e,0x013dff7a,0x0017fea6,0xfe410172,0xfff800d6,
0xff510028,0x0029009d,0x00aaff20,0xfee8004d,0x007300c3,0x0118fe94,0xff420018,0x01560000,
0xfffcfe7d,0xfdec01cc,0x009900bd,0x000bff42,0x00720031,0x0168feb3,0xffd6ff4c,0xff1800ab,
0xfebf010d,0xfeb90166,0x001c00bc,0x0183fef2,0x00fefeab,0x0151fef5,0xffcffef0,0xfdc901b5,
0xffef015b,0x0003ff97,0x000b0048,0x00daff59,0x003bff6b,0xffadfffe,0xff2c00c3,0x003a0055,
0x0035ff99,0x0015fff3,0x0096ffb4,0x0094ff33,0xff16001d,0xff4b011e,0xff4e0069,0xff5b010a,
0x0176ff7b,0x0095feaf,0x0116ff8f,0x007bfe9a,0xfe8400f9,0x004c00a7,0xff04ffde,0xff580183,
0x00f5ff53,0xfed60018,0x00cb00c8,0x0183fe0c,0xfee9fffb,0xffe400f4,0xffdaffaa,0xff0b00f9,
0x01f1ffaa,0x0131fd9e,0xfef10072,0xfff3007c,0xfdd600cb,0xfef20280,0x01edff05,0x008efe95,
0x0151ff70,0x00bcfe61,0xfe4100c8,0xff6a0171,0xff1f0050,0xff5b0152,0x022aff01,0x00affe2c,
0x009effcc,0xffd6ff32,0xfd9301b2,0xff2901e1,0x0002002a,0x0093ffcb,0x0110ff19,0x00f3fed9,
0xff74ffb6,0x003a00aa,0x00bdfedf,0xfe8400a8,0x009100ba,0xff68ff56,0xff760171,0x016afedf,
0xfe970005,0x00a200ff,0x008bfe84,0xfece00ec,0x00e3001f,0xffe3ff3d,0x0060006b,0x01b9fe7f,
0xff58ff3e,0xfe4d0197,0xfeb40160,0xfe3c01a1,0x00a500f0,0x0290fde2,0x0174fde7,0x008dff02,
0xff61fffe,0xfeab0121,0xff940115,0x003affc8,0xfebc007f,0x003200fa,0x00cbfeec,0xfff3fffc,
0x01ceff1c,0x0088fe5c,0xff0e008b,0xffb400ac,0xffb3002e,0xff79007b,0xffc10062,0xffa9003d,
0xffef0053,0x0023ffd5,0x004bffea,0x00cfff4b,0xffffff98,0x00c8ffd2,0x0033ff0e,0xfe7d00ec,
0xff76012f,0xff9e003f,0x00350061,0x01bbfecf,0x007cfe9c,0xff990032,0xfecd009a,0xfe7501c4,
0x00c2005e,0x006fff0e,0x0119ffac,0x0146fe26,0xfe2e0073,0xffb20194,0xffd5ff9a,0xff6400f4,
0x0183ff44,0xff97ff2a,0x0063009e,0x00b8fec8,0xfeff0082,0x0076004d,0xff21ffc7,0xfee1018f,
0x00290033,0x0000ffff,0x016cff5f,0x013bfe51,0x005aff60,0x0030ff99,0xfe4f00a2,0xfe220232,
0xff1d0131,0xff8d00df,0x01bdff61,0x016afdfb,0x010eff11,0x0093fecd,0xfef2008a,0x007a006b,
0xffbbff78,0xff1100fe,0xffc60066,0xfea600af,0xff230183,0x013affb8,0x00a8feb1,0x0074ffd9,
0x0152fec7,0xff8aff8c,0x00340075,0xff69ff9d,0xfe0501d5,0x006700d0,0x0002ff62,0x00670035,
0x014ffec3,0xff7bff83,0xff7c0101,0x0248ff17,0x000afdea,0xfe020216,0x0176ffd4,0xfc820045,
0xfe0b0472,0x022afec4,0x008afee0,0x02e9fe7b,0x02e4fcae,0x008cfdd7,0xfbbb0222,0xfe5f03e6,
0xfe61004d,0xfdeb0349,0x04aafe47,0x00cdfc00,0xff580147,0x0037ff4e,0xfc5401fe,0xffb002f4,
0x0388fda0,0x0094fd6b,0x00d1004a,0x013efdc2,0xfb08024e,0xfffc03bc,0x00f0fdd3,0xff57013f,
0x04b5fd52,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};
