#pragma once


//信号インデックス
const int SpeedLimit[256] = {0,0,0,0,0,0,0,0,0,0,0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,0,0,125,130,135,140,145,150,155,160,165,170,175,180,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,25,45,55,65,75,90,100,110,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


enum class ATC_Panel : int {
	ATC_emergency = 22,	//ATC非常
	ATC_braking,	//ATC常用
	Brake_notches = 51,	//全指令総合B段数(ATC/ATO/TASC)	切0,常用1-7,非常9
	Power_notches = 66,	//全指令総合P段数(ATC/ATO)
	Brake_notches_unic = 67,	//ゆにこんATO全指令総合B段数(ATC/ATO/TASC)
	TASC_SW = 73,	//TASC切替スイッチ	切<=>ATO/TASC
	Master_Controller_Key = 92,	//マスコンキー
	ATC_limit = 100,	//現示
	ATC_notice = 133,	//前方予告
	ORP_speed = 135,	//ORP
	TASC_power = 136,	//TASC灯
	TASC_release,	//TASC解放灯
	TASC_braking,	//TASC制御灯
	TASC_controling,	//TASCブレーキ灯
	TASC_noches,	//TASC制動ノッチ
	TASC_failed,	//TASC故障
	TASC_power_M,	//TASC灯	マスコンキー西武のみ
	TASC_controling_M,	//TASC制御灯	マスコンキー西武のみ
	ATO_P,	//ATO動作P段数
	ATO_B,	//ATO動作B段数
	ATO_power,	//ATO電源灯
	ATO_controling,	//ATO動作
	TASC_debug,	//TASCパターン指針
	ATO_debug,	//ATOパターン指針
	Reservation,	//予約領域

	TIS_send = 194,
	TIS_recieve_VVVF_0,
	TIS_recieve_VVVF_1,
	TIS_recieve_VVVF_2,
	TIS_recieve_VVVF_3,
	TIS_recieve_VVVF_4,
	TIS_recieve_VVVF_5,
	
	TIS_recieve_brake_0 = 215,
	TIS_recieve_brake_1,
	TIS_recieve_brake_2,
	TIS_recieve_brake_3,
	TIS_recieve_brake_4,
	TIS_recieve_brake_5,
	TIS_recieve_brake_6,
	TIS_recieve_brake_7,
	TIS_recieve_brake_8,
	TIS_recieve_brake_9,
	TIS_unit_0,
	TIS_unit_1,
	TIS_unit_2,
	TIS_unit_3,
	TIS_unit_4,
	TIS_unit_5,
	output = 255,
};


enum class ATC_Sound : int {
	ATC_bell = 2,	//ATC単打ベル
	ATC_notice = 4,	//前方予告
};


enum class ATC_Signal : int {
	ATC_02 = 9,
	ATC_01,
	ATC_05,
	ATC_10,
	ATC_15,
	ATC_20,
	ATC_25,
	ATC_30,
	ATC_35,
	ATC_40,
	ATC_45,
	ATC_50,
	ATC_55,
	ATC_60,
	ATC_65,
	ATC_70,
	ATC_75,
	ATC_80,
	ATC_85,
	ATC_90,
	ATC_95,
	ATC_100,
	ATC_105,
	ATC_110,
	ATC_115,
	ATC_120,
	ATC_ORP = 35,

};
