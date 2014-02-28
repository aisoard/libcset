#include "cset/space.h"

/**
 * \file
 * \brief Contains implementation of the \ref cset::space class.
 * \author Alexandre Isoard <alexandre.isoard@gmail.com>
 *
 * Trivial methods are implemented in \ref cset/space.h.
 */

#include <ostream>

void cset::space::print(std::ostream & out) const {
	out << "{";
	for(cset::dim_t i = 0; i != dim; ++i) {
		if(i != 0)
			out << ",";
		out << "s" << i;
	}
	out << "}";
}
