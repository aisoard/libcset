#include "cset/about.h"

#include "config.h"

#include <string>

std::string cset::about(void) {
	return PACKAGE "-" VERSION " - " PACKAGE_NAME;
}

std::string cset::version(void) {
	return VERSION;
}
