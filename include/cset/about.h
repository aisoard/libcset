#ifndef ABOUT_H
#define ABOUT_H

#include <string>

namespace cset {
	/**
	 * \brief Returns a short description of the library.
	 * \return A `std::string` containing the full name and version of the library.
	 */
	std::string about(void);

	/**
	 * \brief Returns the version of the library.
	 * \return A `std::string` containing the version of the library.
	 */
	std::string version(void);
}

#endif // ABOUT_H
