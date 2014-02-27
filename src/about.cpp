#include "cset/about.h"

#include "cset/config.h"

#include <string>

std::string cset::about(void) {
	return PACKAGE_STRING;
}

std::string cset::version(void) {
	return VERSION;
}
