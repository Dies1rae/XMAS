#include "xmastree.h"


void x_mas_tree::x_mas_tree_print() {
	for (const auto E : this->tree) {
		std::cout << E << std::endl;
	}
}

std::vector<std::string> x_mas_tree::get_xmas_tree() {
	return this->tree;
}

void x_mas_tree::print_snow_colored(size_t elem_pos, size_t elem_color) {
	


}