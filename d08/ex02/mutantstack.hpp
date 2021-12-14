#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <stack>
# include <list>

template <typename T>
class Mutantstack : public std::stack<T> {
	public:
		Mutantstack(void) {};
		~Mutantstack(void) {};
		T *begin(void) {
			T* ret = NULL;

			std::stack<T> tmp = *this;
			while (!tmp.empty())
			{
				ret = &tmp.top();
				tmp.pop();
			}
			return (ret);
		};
		T* end(void) {
			if (!this->empty())
				return (&this->top());
			else
				return (NULL);
		};

		
};

#endif