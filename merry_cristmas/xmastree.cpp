#include "xmastree.h"


void x_mas_tree::x_mas_tree_print() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	rnd_t rand_color;
	for (size_t str = 0; str < this->tree.size(); str++) {
		for (size_t chr = 0; chr < this->tree[str].size(); chr++) {
			if (this->tree[str][chr] == '@') {
				SetConsoleTextAttribute(hConsole, rand_color.irnd(255));
				std::cout << this->tree[str][chr];
				SetConsoleTextAttribute(hConsole, 15);
				continue;
			}
			if (this->tree[str][chr] == '+' && str == 1) {
				SetConsoleTextAttribute(hConsole, rand_color.irnd(255));
				std::cout << this->tree[str][chr];
				SetConsoleTextAttribute(hConsole, 15);
			} else {
				std::cout << this->tree[str][chr];
			}
		}
		std::cout << std::endl;
	}
}

std::vector<std::string> x_mas_tree::get_xmas_tree() {
	return this->tree;
}

void x_mas_tree::set_snow_default() {
	this->tree = 
	{
"   	     /\\",
"            <++>",
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
}

void x_mas_tree::set_snow(const int str_pos, const int elem_pos) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (size_t str = 0; str < this->tree.size(); str++) {
		if (str_pos == str) {
			for (size_t chr = 0; chr < this->tree[str].size(); chr++) {
				if (chr == elem_pos) {
					this->tree[str][chr] = '@';
				}
			}
		}
	}
}