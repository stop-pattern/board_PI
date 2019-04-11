#pragma once
#include "../header/define.h"
#include "Getini.h"

using namespace std;

class c_INI {
public:

	//function
	void getIni(string);
	string GetPath(HMODULE);

private:
	string dllPath;	//.dllのpath
	string iniPath;	//.iniのpath
};
