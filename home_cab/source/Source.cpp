﻿#include "../header/define.h"
#include "../header/Header.h"
#include "../INI/Getini.h"

int signal;	//信号インデックス
double speed;	//現在速度
double distance;	//現在位置
double accelaration;	//加減速度

bool door;	//ドア状態
int LimitSpeed;	//ATC制限速度
bool Key_S, Key_A1, Key_A2, Key_B1, Key_B2, Key_C1, Key_C2, Key_D, Key_E, Key_F, Key_G, Key_H, Key_I, Key_J, Key_K, Key_L;	//ATSKey


Spec specific;	//車両性能
State Stat;	//車両状態(前フレーム)
Hand manual;	//手動ハンドル位置
Hand handle;	//ハンドル制御値

c_INI INI;	//INI