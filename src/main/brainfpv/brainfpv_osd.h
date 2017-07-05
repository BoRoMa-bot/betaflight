
#ifndef BRAINFPV_OSD_H
#define BRAINFPV_OSD_H

#include <stdint.h>
#include "brainfpv/video.h"


typedef struct {
    uint8_t sync_threshold;
    uint8_t white_level;
    uint8_t black_level;
    int8_t x_offset;
    uint8_t x_scale;
    uint8_t sbs_3d_enabled;
    uint8_t sbs_3d_right_eye_offset;
    uint8_t font;
    uint8_t ir_system;
    uint16_t ir_trackmate_id;
    uint32_t ir_ilap_id;
    uint8_t ahi_steps;
    uint8_t bmi160foc;
    uint8_t altitude_scale;
    uint8_t sticks_display;
#if defined(USE_BRAINRE1_SPECTROGRAPH)
    uint8_t spec_enabled;
#endif
} bfOsdConfig_t;


void brainFpvOsdInit(void);
void osdMain(void);
void resetBfOsdConfig(bfOsdConfig_t *bfOsdConfig);

void brainFpvOsdArtificialHorizon(void);
void brainFpvOsdCenterMark(void);
#endif /* BRAINFPV_OSD */
