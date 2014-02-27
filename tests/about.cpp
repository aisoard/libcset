#include "test.h"

#include <cset.h>

#include <iostream>

int main(int argc, char ** argv) {
	std::cout << cset::about() << std::endl;
	std::cout << "version: " << cset::version() << std::endl;
	return PASS;
}
