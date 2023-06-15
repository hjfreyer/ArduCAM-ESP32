#ifndef ARDUCAM_OV2640
#define ARDUCAM_OV2640

#include "ArduCAM_esp.h"
#include "ov2640_regs.h"

#define ARDUCHIP_FRAMES			0x01
#define VSYNC_LEVEL_MASK   		0x02
#define FRAMES_NUM 				0x04

#ifdef __cplusplus
class ArduCAM_OV2640 : public ArduCAM
{
public:
    ArduCAM_OV2640(gpio_num_t cs_pin) : ArduCAM(cs_pin) { sensor_addr = 0x30; }
    virtual ~ArduCAM_OV2640() = default;
    void InitCAM();
    void set_JPEG_size(int size);
    void set_Light_Mode(arducam_light_mode_t Light_Mode);
    void set_Color_Saturation(arducam_color_saturation_t Color_Saturation);
    void set_Brightness(arducam_brightness_t Brightness);
    void set_Contrast(arducam_contrast_t Contrast);
    void set_Special_effects(arducam_special_effects_t Special_effect);
};
#endif

#endif
