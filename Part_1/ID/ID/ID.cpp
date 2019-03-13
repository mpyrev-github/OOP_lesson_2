// Dll.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <iostream>
#include "ID.h"

using namespace std;

void __stdcall NameAndGroup() {
	cout << "Mikhail Pyrev" << endl << "RI-541216" << endl;
	cin.get();
}
