static const DWORD null_srv_ld_code_dxbc[] =
{
    0x43425844, 0xfa13670e, 0x291af510, 0xc253cc12, 0x9474950b, 0x00000001, 0x00000100, 0x00000003,
    0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f, 0x505f5653, 0x7469736f, 0x006e6f69,
    0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003,
    0x00000000, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074, 0x58454853, 0x00000064, 0x00000050,
    0x00000019, 0x0100086a, 0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x04001858, 0x00107000,
    0x00000000, 0x00005555, 0x03000065, 0x001020f2, 0x00000000, 0x8a00002d, 0x800000c2, 0x00155543,
    0x001020f2, 0x00000000, 0x00208a46, 0x00000000, 0x00000000, 0x00107e46, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE null_srv_ld_dxbc = { null_srv_ld_code_dxbc, sizeof(null_srv_ld_code_dxbc) };
#undef UNUSED_ARRAY_ATTR