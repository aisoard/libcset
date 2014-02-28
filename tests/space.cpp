#include "test.h"

#include <cset.h>

#include <iostream>

int main(int argc, char ** argv) {
	cset::space forty_two(42);
	std::cout << forty_two << std::endl;
	return PASS;
}
