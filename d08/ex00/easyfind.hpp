#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

template <typename T>
int	easyfind(T container, int target)
{
	typename T::const_iterator it;
	typename T::const_iterator ite = container.end();

	for (it = container.begin(); it != ite; ++it)
	{
		if (*it == target)
		{
			std::cout << target << " found !" << std::endl;
			return (1);
		}
	}
	std::cout << target << " is not in the list" << std::endl;
	return (0);
}

#endif