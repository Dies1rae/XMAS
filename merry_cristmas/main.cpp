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
	std::string mus = "play .\\x_mas_bells.mp3 repeat";
	std::wstring mus_tmp(mus.begin(), mus.end());
	WORD result = mciSendString(mus_tmp.c_str(), NULL, 0, NULL);
	if (result) {
		std::cerr << "SOUND ERROR" << std::endl;
	}
}

int main() {
	x_mas_tree tree;
	rnd_t rand_str;
	rnd_t rand_elem;

	thread thr(muslo);
	
	while (1) {
		int str_pos_tmp = rand_str.irnd(tree.get_xmas_tree().size());
		int elem_pos_tmp = rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size());
		
		tree.set_snow(str_pos_tmp, elem_pos_tmp);
		tree.set_snow(rand_str.irnd(tree.get_xmas_tree().size()), rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size()));
		tree.set_snow(rand_str.irnd(tree.get_xmas_tree().size()), rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size()));
		tree.set_snow(rand_str.irnd(tree.get_xmas_tree().size()), rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size()));
		tree.set_snow(rand_str.irnd(tree.get_xmas_tree().size()), rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size()));
		tree.set_snow(rand_str.irnd(tree.get_xmas_tree().size()), rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size()));
		tree.set_snow(rand_str.irnd(tree.get_xmas_tree().size()), rand_elem.irnd(tree.get_xmas_tree()[str_pos_tmp].size()));


		tree.x_mas_tree_print();
		Sleep(500);
		system("cls");

		tree.set_snow_default();
	}

	thr.join();

	return 0;
}