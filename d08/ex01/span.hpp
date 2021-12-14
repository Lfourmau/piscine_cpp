#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>

class Span {
	public:
		Span(unsigned int n);
		~Span(void) {};
		void 	addnumber(int to_add);
		int 	shortestSpan(void);
		int 	longestSpan(void);

	private:
		std::list<int> 	lst;
		unsigned int 	max_length;
		int 			stored;
};

#endif