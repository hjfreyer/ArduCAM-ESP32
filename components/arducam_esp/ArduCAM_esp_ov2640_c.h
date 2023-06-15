#ifndef ARDUCAM_OV2640_C
#define ARDUCAM_OV2640_C

#include "driver/gpio.h"

#ifdef __cplusplus
extern "C"
{
#endif

	struct arducam_ov2640;
	typedef struct arducam_ov2640 arducam_ov2640_t;

	arducam_ov2640_t *arducam_ov2640_create(gpio_num_t gpio);
	void arducam_ov2640_destroy(arducam_ov2640_t *handle);

	void arducam_ov2640_write_reg(arducam_ov2640_t *handle, uint8_t addr, uint8_t data);
	uint8_t arducam_ov2640_read_reg(arducam_ov2640_t *handle, uint8_t addr);
	uint8_t arducam_ov2640_wr_sensor_reg8_8(arducam_ov2640_t *handle, int regID, int regDat);
	uint8_t arducam_ov2640_rd_sensor_reg8_8(arducam_ov2640_t *handle, uint8_t regID, uint8_t *regDat);
	void arducam_ov2640_flush_fifo(arducam_ov2640_t *handle);
	void arducam_ov2640_clear_fifo_flag(arducam_ov2640_t *handle);
	void arducam_ov2640_start_capture(arducam_ov2640_t *handle);
	void arducam_ov2640_set_bit(arducam_ov2640_t *handle, uint8_t addr, uint8_t bit);
	uint8_t arducam_ov2640_get_bit(arducam_ov2640_t *handle, uint8_t addr, uint8_t bit);
	uint32_t arducam_ov2640_read_fifo_length(arducam_ov2640_t *handle);
	void arducam_ov2640_cs_low(arducam_ov2640_t *handle);
	void arducam_ov2640_cs_high(arducam_ov2640_t *handle);
	void arducam_ov2640_init_cam(arducam_ov2640_t *handle);
	void arducam_ov2640_set_format(arducam_ov2640_t *handle, uint8_t fmt);
	void arducam_ov2640_set_jpeg_size(arducam_ov2640_t *handle, int size);

#ifdef __cplusplus
}
#endif

#endif /* ARDUCAM_OV2640_C */
