/*BVE ATSプラグインテンプレート
 *Author : Tetsu Otter
 *SDK : ver10.0.17763.0
 *DLLは、プロジェクト名で出力されます。任意のプロジェクト名を付与してください。
 *プロジェクト名変更時は、dllmain.defの "LIBRARY" に設定された "PITemp" という文字列を新たなプロジェクト名に変更してください。
*/

#include <string.h>
#include <math.h>
#include "../header/Header.h"
#include "../header/define.h"

#include "../INI/Getini.h"

#include <fstream>


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	INI.getIni(INI.GetPath(hModule));

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

DE void SC Load() {
}
DE void SC Dispose() {
}
DE int SC GetPluginVersion() {
	return PI_VERSION;
}
DE void SC SetVehicleSpec(Spec s) {
	specific.A = s.A;
	specific.J = s.J;
	specific.B = s.B;
	specific.E = s.B + 1;
	specific.C = s.C;
	specific.P = s.P;
}
DE void SC Initialize(int b) {
	b = InitialPosition::Service;
}
DE Hand SC Elapse(State S, int* panel, int* sound) {
	double spd = speed;
	speed = S.V;	//((S.Z - Stat.Z) * 1000) / ((S.T - Stat.T) * 3600000);
	accelaration = (speed - spd) / ((S.T - Stat.T) * 1000);

	int send = 0;
	send |= panel[101] << 0;
	send |= panel[131] << 1;
	send |= panel[132] << 2;
	send |= panel[133] << 3;
	send |= panel[134] << 4;
	send |= panel[161] << 5;
	send |= panel[42] << 6;
	send |= panel[43] << 7;
	send |= panel[44] << 8;
	send |= sound[2] << 9;

	for (size_t i = 0; i < 25; i++) {
		panel[100] |= panel[i+102] << i;
	}

	panel[static_cast<int>(ATC_Panel::output)] = send;

	Stat = S;
	return handle;
}
DE void SC SetPower(int p) {
	manual.P = p;
}
DE void SC SetBrake(int b) {
	manual.B = b;
}
DE void SC SetReverser(int r) {
	manual.R = r;
}
DE void SC DoorOpen() {
	door = true;
}
DE void SC DoorClose() {
	door = false;
}


DE void SC KeyDown(int k) {
	switch (k) {
	case ATSKeys::S:
		Key_S = true;
		break;
	case ATSKeys::A1:
		Key_A1 = true;
		break;
	case ATSKeys::A2:
		Key_A2 = true;
		break;
	case ATSKeys::B1:
		Key_B1 = true;
		break;
	case ATSKeys::B2:
		Key_B2 = true;
		break;
	case ATSKeys::C1:
		Key_C1 = true;
		break;
	case ATSKeys::C2:
		Key_C2 = true;
		break;
	case ATSKeys::D:
		Key_D = true;
		break;
	case ATSKeys::E:
		Key_E = true;
		break;
	case ATSKeys::F:
		Key_F = true;
		break;
	case ATSKeys::G:
		Key_G = true;
		break;
	case ATSKeys::H:
		Key_H = true;
		break;
	case ATSKeys::I:
		Key_I = true;
		break;
	case ATSKeys::J:
		Key_J = true;
		break;
	case ATSKeys::K:
		Key_K = true;
		break;
	case ATSKeys::L:
		Key_L = true;
		break;
	default:
		break;
	}
}
DE void SC KeyUp(int k) {
	switch (k) {
	case ATSKeys::S:
		Key_S = false;
		break;
	case ATSKeys::A1:
		Key_A1 = false;
		break;
	case ATSKeys::A2:
		Key_A2 = false;
		break;
	case ATSKeys::B1:
		Key_B1 = false;
		break;
	case ATSKeys::B2:
		Key_B2 = false;
		break;
	case ATSKeys::C1:
		Key_C1 = false;
		break;
	case ATSKeys::C2:
		Key_C2 = false;
		break;
	case ATSKeys::D:
		Key_D = false;
		break;
	case ATSKeys::E:
		Key_E = false;
		break;
	case ATSKeys::F:
		Key_F = false;
		break;
	case ATSKeys::G:
		Key_G = false;
		break;
	case ATSKeys::H:
		Key_H = false;
		break;
	case ATSKeys::I:
		Key_I = false;
		break;
	case ATSKeys::J:
		Key_J = false;
		break;
	case ATSKeys::K:
		Key_K = false;
		break;
	case ATSKeys::L:
		Key_L = false;
		break;
	default:
		break;
	}
}
DE void SC HornBlow(int k) {

}
DE void SC SetSignal(int a) {
	signal = a;
	LimitSpeed = SpeedLimit[a];
}
DE void SC SetBeaconData(Beacon b) {
}


