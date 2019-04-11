#pragma once
#ifndef HEADER
#define HEADER

#include <string>
#include <math.h>
#include "ats.h"
#include "../INI/Getini.h"


extern int signal;	//信号インデックス
extern double speed;	//現在速度[km/h]
extern double distance;	//現在位置[m]
extern double accelaration;	//加減速度[km/h/s]

extern bool door;	//ドア状態
extern int LimitSpeed;	//ATC制限速度
extern bool Key_S, Key_A1, Key_A2, Key_B1, Key_B2, Key_C1, Key_C2, Key_D, Key_E, Key_F, Key_G, Key_H, Key_I, Key_J, Key_K, Key_L;	//ATSKey

extern Spec specific;	//車両性能
extern State Stat;	//車両状態(前フレーム)
extern Hand manual;	//手動ハンドル位置
extern Hand handle;	//ハンドル制御値

extern c_INI INI;	//INI


#endif // !HEADER