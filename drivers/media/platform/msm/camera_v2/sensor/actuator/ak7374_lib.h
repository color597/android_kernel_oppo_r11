
struct  msm_camera_i2c_reg_array  ak7374_imx350_reg_setting[] =
{
    { 0x10,0x41,0x00},
    { 0x11,0x46,0x00},
    { 0x12,0x84,0x00},
    { 0x13,0x58,0x00},
    { 0x14,0x20,0x00},
    { 0x15,0x12,0x00},
    { 0x16,0x13,0x00},
    { 0x17,0x52,0x00},
    { 0x18,0xDB,0x00},
    { 0x19,0xBA,0x00},
    { 0x1A,0x19,0x00},
    { 0x20,0xEE,0x00},
    { 0x21,0x23,0x00},
    { 0x22,0x00,0x00},
    { 0x23,0x13,0x00},
    { 0x03,0x01,0x5A},
    { 0x03,0x02,0x5A},
    { 0x03,0x04,0x36},
    { 0x03,0x08,0x24},
};
struct  msm_camera_i2c_reg_array  ak7374_imx350_check_status_setting[] =
{
    { 0x4B,(0x1<<2),0x5},
};
struct  msm_camera_i2c_reg_array  ak7374_imx350_check_reg_setting[] =
{
    { 0x03,0x10,0x14},
};

struct  msm_camera_i2c_reg_array  ak7374_imx350_write_reg_setting[] =
{
    { 0xAE,0x3B,0x0A},
};

struct  msm_camera_i2c_reg_array  ak7374_imx398_write_reg_setting[] =
{
    { 0xAE,0x3B,0x0A},
};

struct  msm_camera_i2c_reg_array  ak7374_imx398_reg_setting[] =
{
    { 0x10,0x45,0x00},
    { 0x11,0x45,0x00},
    { 0x12,0x78,0x00},
    { 0x13,0x5A,0x00},
    { 0x14,0x20,0x00},
    { 0x15,0x35,0x00},
    { 0x16,0x0F,0x00},
    { 0x17,0x45,0x00},
    { 0x18,0xDB,0x00},
    { 0x19,0x00,0x00},
    { 0x1A,0x05,0x00},
    { 0x20,0xAA,0x00},
    { 0x21,0x0A,0x00},
    { 0x22,0x00,0x00},
    { 0x23,0x0F,0x00},
    { 0x03,0x01,0x5A},
    { 0x03,0x02,0x5A},
    { 0x03,0x04,0x36},
    { 0x03,0x08,0x24},
};
struct  msm_camera_i2c_reg_array  ak7374_imx398_check_status_setting[] =
{
    { 0x4B,(0x1<<2),0x5},
};
struct  msm_camera_i2c_reg_array  ak7374_imx398_check_reg_setting[] =
{
    { 0x03,0x10,0x10},
};