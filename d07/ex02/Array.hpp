#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		T *array;

		Array(void) {
			this->array = new T[];
		}
		Array(unsigned int n) {
			this->array = new T[n];
		}
		Array(Array const &src) {
			int i = 0;
			for (size_t i = 0; src[i]; i++)
				this->array[i] = src[i];
		}
		Array& operator=(Array const& rhs)
		{
			int i = 0;
			for (size_t i = 0; rhs[i]; i++)
				this->array[i] = rhs[i];
		}
};

#endif