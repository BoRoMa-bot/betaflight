F446_TARGETS    += $(TARGET)
FEATURES        += VCP CHIBIOS BRAINFPV SPECTROGRAPH ONBOARDFLASH DRONINBL

HSE_VALUE       = 16000000

TARGET_SRC =  \
              drivers/accgyro_spi_bmi160.c \
              io/osd.c \
              drivers/light_ws2811strip.c \
              drivers/barometer_bmp280.c \
