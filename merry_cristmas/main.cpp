/***************************************************************************
 *   Copyright (C) 2020 by Poltavskiy Nick                                 *
 *   unluck.bastard@gmail.com                                              *
 *                                                                         *
 *                                                                         *
 *                                                                         *
 *   Last modifed: 30.12.2020 19:33                                        *
 ***************************************************************************/

#include <iostream>
#include <vector>
#include <iomanip>
#include <tchar.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <process.h>
#include <thread>


#include "random.h"
#include "xmastree.h"

#pragma comment(lib, "Winmm.lib")

using namespace std;



void muslo() {
	std::string mus = "play .\\x_mas.mp3 wait";
	std::wstring mus_tmp(mus.begin(), mus.end());
	WORD result = mciSendString(mus_tmp.c_str(), NULL, 0, NULL);
	if (result) {
		std::cerr << "SOUND ERROR" << std::endl;
	}
}

int main() {
	x_mas_tree tree;
	thread thr(muslo);
	tree.x_mas_tree_print();
	thr.join();
	return 0;
}