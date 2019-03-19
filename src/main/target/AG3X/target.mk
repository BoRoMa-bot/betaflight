ifeq ($(TARGET), AG3XF4)
F405_TARGETS    += $(TARGET)
else
ifeq ($(TARGET), AG3XF7)
F7X2RE_TARGETS  += $(TARGET)
else
# Nothing to do for generic target
endif
endif

FEATURES       += VCP ONBOARDFLASH
TARGET_SRC = \
            drivers/accgyro/accgyro_mpu6500.c \
            drivers/accgyro/accgyro_spi_mpu6000.c \
            drivers/accgyro/accgyro_spi_mpu6500.c \
            drivers/barometer/barometer_bmp085.c \
            drivers/barometer/barometer_bmp280.c \
            drivers/barometer/barometer_ms5611.c \
            drivers/compass/compass_hmc5883l.c \
            drivers/compass/compass_lis3mdl.c \
            drivers/max7456.c
