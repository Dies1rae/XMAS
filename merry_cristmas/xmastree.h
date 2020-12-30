#pragma once
#include <iostream>
#include <string>
#include <vector>

class x_mas_tree {
public:
	explicit x_mas_tree() = default;

	void x_mas_tree_print();

	std::vector<std::string> get_xmas_tree();

	void print_snow_colored(size_t elem_pos, size_t elem_color);

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
