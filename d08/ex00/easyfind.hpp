#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

template <typename T>
typename T::const_iterator	easyfind(T container, int target)
{
	typename T::const_iterator it = container.begin();
	typename T::const_iterator ite = container.end();
	typename T::const_iterator ret;

	ret = std::find(it, ite, target);
	if (ret != ite)
	{
		std::cout << target << " found !" << std::endl;
		return (ret);
	}
	std::cout << target << " is not in the list" << std::endl;
	return (ret);
}

#endif