#include "cset/about.h"

/**
 * \file
 * \brief Contains implementation of various trivial functions.
 * \author Alexandre Isoard <alexandre.isoard@gmail.com>
 *
 * Those functions do no computation.
 * See \ref cset/about.h for declaration.
 */

#include "config.h"

#include <string>

std::string cset::about(void) {
	return PACKAGE "-" VERSION " - " PACKAGE_NAME;
}

std::string cset::version(void) {
	return VERSION;
}
