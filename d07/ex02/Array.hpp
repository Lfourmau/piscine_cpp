#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		T *array;
		size_t length;

		Array(void) : length(0) {
			this->array = NULL;
		}
		~Array(void) {};
		Array(unsigned int n) {
			length = n;
			if (n > 0)
			{
				this->array = new T[n];
				for (size_t i = 0; i < n; i++)
					this->array[i] = T();
			}
			else
				this->array = NULL;
			
		}
		size_t size(void) const
		{
			return (length);
		}
 		T& operator[](size_t idx) const
		{
			try
			{
				if (this->array == NULL || idx >= this->size() || idx < 0)
					throw(std::exception());
				return (this->array[idx]);
			}
			catch(const std::exception& e)
			{
				std::cout << idx << "/" << this->size() << " Out of lmits" << std::endl;
				return (*this->array);
			}
			
		}
		Array(Array const &src) {
			operator=(src);
		}
		Array& operator=(Array const& rhs)
		{
			//delete []array;
			this->array = new T[rhs.size()];
			this->length = rhs.length;
			for (size_t i = 0; i < rhs.size(); i++)
				this->array[i] = rhs.array[i];
			return (*this);
		}
};

#endif