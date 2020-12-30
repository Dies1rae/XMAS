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

void snowflake(x_mas_tree tree, int pos, int elem, int color) {
	tree.print_snow_colored(pos + (pos % 2), elem + (elem / 2), color);
	Sleep(25);
	system("cls");
}

int main() {
	x_mas_tree tree;
	rnd_t rand_color;
	rnd_t rand_str;
	rnd_t rand_elem;

	thread thr(muslo);
	
	while (1) {
		int str_pos_tmp = rand_str.irnd(tree.get_xmas_tree().size());
		int elem_pos_tmp = rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size());
		
		snowflake(tree, str_pos_tmp, elem_pos_tmp, rand_color.irnd(255));

	}

	thr.join();

	return 0;
}