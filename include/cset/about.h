#ifndef LIBCSET_ABOUT_H
#define LIBCSET_ABOUT_H

/**
 * \file
 * \brief Contains declaration of various trivial functions.
 * \author Alexandre Isoard <alexandre.isoard@gmail.com>
 *
 * Those functions do no computation.
 * See \ref src/about.cpp for implementation.
 */

#include <string>

namespace cset {
	/**
	 * \brief Returns a short description of the library.
	 * \return The full name and version of the library.
	 */
	std::string about(void);

	/**
	 * \brief Returns the version of the library.
	 * \return The version of the library.
	 */
	std::string version(void);
}

#endif
