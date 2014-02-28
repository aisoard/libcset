#ifndef LIBCSET_SPACE_H
#define LIBCSET_SPACE_H

/**
 * \file
 * \brief Contains definition of the \ref cset::space class.
 * \author Alexandre Isoard <alexandre.isoard@gmail.com>
 *
 * The \ref cset::space class is at the root of
 * almost every other objects of the library.
 *
 * Implementation can be found in \ref src/space.cpp.
 */

#include <ostream>

namespace cset {
	/// \brief Type of dimension integers.
	typedef unsigned long dim_t;

	/** \brief Abstract multi-dimensional integer space.
	 *
	 * This class represents an infinite multi-dimensional integer space
	 * of finite dimension.
	 * It is used as the underlying structure above which `inset` and `outset`
	 * are build.
	 */
	class space {
		public:
			/** \brief Construct an integer space of dimension `dim`.
			 *
			 * \param dim Dimension of the constructed `space`.
			 */
			inline space(dim_t dim) noexcept : dim(dim) {}

			/** \brief Copy constructor.
			 *
			 * \param other Copied space.
			 */
			inline space(const space & other) noexcept : dim(other.dim) {}

			/** \brief Move constructor.
			 *
			 * \param other Consumed space.
			 */
			inline space(space && other) noexcept : dim(std::move(other.dim)) {}

			/** \brief Non-throwing Swap.
			 */
			inline void swap(space & other) noexcept {
				std::swap(dim, other.dim);
			}

			/** \brief Copy assignment operator.
			 *
			 * \param other Original space.
			 * \return Reference to this space.
			 */
			inline space & operator=(space other) noexcept {
				swap(other);
				return *this;
			}

		public:
			/** \brief Construct a Cartesian product space.
			 *
			 * \param other Space against which to do a Cartesian product.
			 * \return A space of dimension the sum of that of the arguments.
			 */
			inline space operator*(const space & other) const {
				return space(dim + other.dim);
			}

			/** \brief Equality operator.
			 *
			 * \param other Space to compare against.
			 * \retval true if arguments are of the same dimension.
			 * \retval false otherwise.
			 */
			inline bool operator==(const space & other) const {
				return dim == other.dim;
			}

			/** \brief Inequality operator.
			 *
			 * \param other Space to compare against.
			 * \retval true if arguments are of different dimension.
			 * \retval false otherwise.
			 */
			inline bool operator!=(const space & other) const {
				return dim != other.dim;
			}

		public:
			/** \brief Feeds a representation of a space to an output stream.
			 *
			 * \param out Stream in which to print.
			 */
			void print(std::ostream & out) const;

		private:
			dim_t dim;
	};
}

namespace std {
	/** \brief Standard non-throwing swap specialization.
	 *
	 * \param a First `space` to swap.
	 * \param b Second `space` to swap.
	 */
	template<>
	void swap(cset::space & a, cset::space & b) noexcept { a.swap(b); }
}

/** \brief Standard ostream `operator<<` overloading.
 *
 * \param out Stream in which to print.
 * \param space Space to output.
 * \retval out Return the provided stream.
 */
std::ostream & operator<<(std::ostream & out, const cset::space & space) {
	space.print(out);
	return out;
};

#endif
