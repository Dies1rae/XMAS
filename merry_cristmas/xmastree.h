#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include "random.h"


class x_mas_tree {
public:
	explicit x_mas_tree() = default;

	void x_mas_tree_print();

	std::vector<std::string> get_xmas_tree();

	void set_snow(const int str_pos, const int elem_pos);
	void set_snow_default();

private:
	std::vector<std::string> tree{

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
};
