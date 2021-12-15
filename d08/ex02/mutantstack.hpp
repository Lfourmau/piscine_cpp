#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	
	MutantStack(void) {};
	MutantStack(MutantStack const& src) { operator=(src); }
	~MutantStack(void) {};
	MutantStack& operator=(MutantStack const& rhs) { 
		std::stack<T>::operator=(rhs);
		return (*this);
	}

	iterator begin(void) { return this->c.begin(); }
	iterator end(void) { return this->c.end(); }
};

#endif
