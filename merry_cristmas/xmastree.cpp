#include "xmastree.h"


void x_mas_tree::x_mas_tree_print() {
	for (const auto E : this->tree) {
		std::cout << E << std::endl;
	}
}

std::vector<std::string> x_mas_tree::get_xmas_tree() {
	return this->tree;
}

void x_mas_tree::print_snow_colored(const int str_pos, const int elem_pos, const int elem_color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int ctr = 0;
	for (size_t str = 0; str < this->tree.size(); str++) {
		ctr += this->tree[str].size();
		if (str_pos == str) {
			for (size_t chr = 0; chr < this->tree[str].size(); chr++) {
				if (chr == elem_pos) {
					SetConsoleTextAttribute(hConsole, elem_color);
					std::cout << '@';
					SetConsoleTextAttribute(hConsole, 15);
				} else {
					std::cout << this->tree[str][chr];
				}
			}
		} else {
			std::cout << this->tree[str];
		}
		std::cout << std::endl;
	}
	
}