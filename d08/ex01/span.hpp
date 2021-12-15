#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>

class Span {
	public:
		Span(unsigned int n);
		Span(unsigned int n, int range_max, int range_min);
		~Span(void) {};
		void 	addNumber(int to_add);
		int 	shortestSpan(void);
		int 	longestSpan(void);
		void	fill_container(std::list<int>::iterator beg, std::list<int>::iterator end, int range_max, int range_min) {
			srand(time(NULL));
			while (beg != end)
			{
				*beg = range_min + rand() % ( range_max - range_min + 1 );
				this->stored++;
				beg++;
			}
		}
		std::list<int>::iterator getBegin(void)
		{
			return this->lst.begin();
		}
		std::list<int>::iterator getEnd(void)
		{
			return this->lst.end();
		}

	private:
		std::list<int> 	lst;
		unsigned int 	max_length;
		unsigned int 	stored;
		long int		smallest_itrvl;
		void 			find_interval(int i);
		Span(void) {};
};

#endif