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

class x_mas_tree {
public:
	explicit x_mas_tree() = default;

	void x_mas_tree_print() {
		for (const auto E : this->tree) {
			std::cout << E << std::endl;
		}
	}

	std::vector<std::string> get_xmas_tree() {
		return this->tree;
	}

private:
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
};


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