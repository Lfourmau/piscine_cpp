#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		T *array;

		Array(void) {
			this->array = NULL;
		}
		~Array(void) {};
		Array(unsigned int n) {
			std::cout << "N constructor : " << n << std::endl;
			this->array = new T[n];
			for (size_t i = 0; i < n; i++)
			{
				this->array[i] = T();
				std::cout << "default = " << this->array[i] << ";" << i << std::endl;
			}
			
		}
		size_t size(void) const
		{
			return (30);
		}
 		T& operator[](size_t idx)
		{
			try
			{
				if (this->array == NULL || idx > this->size() || idx < 0)
					throw(std::exception());
			}
			catch(const std::exception& e)
			{
				std::cout << idx << "/" << this->size() << " Out of lmits" << std::endl;
				return *this->array;
			}
			return (this->array[idx]);
			
		}
		Array(Array const &src) {
			operator=(src);
		}
		Array& operator=(Array const& rhs)
		{
			delete []array;
			this->array = new T[rhs.size()];
			for (size_t i = 0; i < rhs.size(); i++)
				this->array[i] = rhs.array[i];
			return (*this);
		}
};

#endif