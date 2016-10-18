F446_TARGETS    += $(TARGET)
FEATURES        += VCP CHIBIOS SPECTROGRAPH ONBOARDFLASH

HSE_VALUE       = 16000000

TARGET_SRC =  \
              drivers/accgyro_spi_bmi160.c \
              io/osd.c \
              drivers/light_ws2811strip.c \
