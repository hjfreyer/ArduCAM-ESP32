#include "ArduCAM_esp_ov2640_c.h"
#include "ArduCAM_esp_ov2640.h"

struct arducam_ov2640
{
	void *obj;
};

arducam_ov2640_t *arducam_ov2640_create(gpio_num_t gpio)
{
	arducam_ov2640_t *m;
	ArduCAM_OV2640 *obj;

	m = (typeof(m))malloc(sizeof(*m));
	obj = new ArduCAM_OV2640(gpio);
	m->obj = obj;

	return m;
}

void arducam_ov2640_destroy(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *self = static_cast<ArduCAM_OV2640 *>(handle->obj);
	delete self;
	free(handle);
}

void arducam_ov2640_write_reg(arducam_ov2640_t *handle, uint8_t addr, uint8_t data)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->write_reg(addr, data);
}

uint8_t arducam_ov2640_read_reg(arducam_ov2640_t *handle, uint8_t addr)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->read_reg(addr);
}

uint8_t arducam_ov2640_wr_sensor_reg8_8(arducam_ov2640_t *handle, int regID, int regDat)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->wrSensorReg8_8(regID, regDat);
}

uint8_t arducam_ov2640_rd_sensor_reg8_8(arducam_ov2640_t *handle, uint8_t regID, uint8_t *regDat)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->rdSensorReg8_8(regID, regDat);
}

void arducam_ov2640_flush_fifo(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->flush_fifo();
}

void arducam_ov2640_clear_fifo_flag(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->clear_fifo_flag();
}

void arducam_ov2640_start_capture(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->start_capture();
}

void arducam_ov2640_set_bit(arducam_ov2640_t *handle, uint8_t addr, uint8_t bit)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->set_bit(addr, bit);
}

uint8_t arducam_ov2640_get_bit(arducam_ov2640_t *handle, uint8_t addr, uint8_t bit)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->get_bit(addr, bit);
}

uint32_t arducam_ov2640_read_fifo_length(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->read_fifo_length();
}

void arducam_ov2640_cs_low(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->CS_LOW();
}

void arducam_ov2640_cs_high(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	return cam->CS_HIGH();
}

void arducam_ov2640_init_cam(arducam_ov2640_t *handle)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->InitCAM();
}

void arducam_ov2640_set_format(arducam_ov2640_t *handle, uint8_t fmt)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->set_format(fmt);
}

void arducam_ov2640_set_jpeg_size(arducam_ov2640_t *handle, int size)
{
	ArduCAM_OV2640 *cam = static_cast<ArduCAM_OV2640 *>(handle->obj);
	cam->set_JPEG_size(size);
}
