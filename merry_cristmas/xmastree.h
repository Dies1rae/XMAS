#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>



class x_mas_tree {
public:
	explicit x_mas_tree() = default;

	void x_mas_tree_print();

	std::vector<std::string> get_xmas_tree();

	void print_snow_colored(const int str_pos, const int elem_pos, const int elem_color);

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
