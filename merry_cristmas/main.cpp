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

#pragma comment(lib, "Winmm.lib")

using namespace std;

void x_mas_tree() {
	std::vector<std::string> tree{

"   	     /\\",
"            <  >",
"   	     \\/",
"             /\\",
"            /  \\",
"           /++++\\",
"          /  ()  \\",
"          /      \\",
"         /~`~`~`~`\\",
"        /  ()  ()  \\",
"        /          \\",
"       /*&*&*&*&*&*&\\",
"      /  ()  ()  ()  \\",
"      /              \\",
"     /++++++++++++++++\\",
"    /  ()  ()  ()  ()  \\",
"    /                  \\",
"   /~`~`~`~`~`~`~`~`~`~`\\",
"  /  ()  ()  ()  ()  ()  \\",
"  /*&*&*&*&*&*&*&*&*&*&*&\\",
" /                        \\",
"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\",
"       	   |   |",
"          |`````|",
"          \\_____/"

	};

	for (const auto E : tree) {
		std::cout << E << std::endl;
	}
}

void muslo() {
	std::string mus = "play .\\x_mas.mp3 wait";
	std::wstring mus_tmp(mus.begin(), mus.end());
	WORD result = mciSendString(mus_tmp.c_str(), NULL, 0, NULL);
	if (result) {
		std::cerr << "SOUND ERROR" << std::endl;
	}
}

int main() {
	thread thr(muslo);
	x_mas_tree();
	thr.join();
	return 0;
}