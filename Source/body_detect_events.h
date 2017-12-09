#ifndef BODY_DETECT_EVENTS_H
#define BODY_DETECT_EVENTS_H

#define SOMEBODY_EVT    0x0100
#define NOBODY_EVT      0x0200

#define LIGHT_HIGH_EVT  0X0400
#define LIGHT_LOW_EVT   0X0800
#define LIGHT_MID_EVT   0x0080

#define STOP_WORK_EVT   0X1000
#define START_WORK_EVT  0X2000

#define STOP_AUDIO      0X0004
#define STOP_WEL_AUDIO  0X0008

#endif

// 0x0001 0x0002 0x0004 0x0008
// 0x0010 0x0020 0x0040 0x0080
// 0x0100 0x0200 0x0400 0x0800
// 0x1000 0x2000 0x4000 0x8000