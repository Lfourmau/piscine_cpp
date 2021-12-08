#include "convert.hpp"

int	full_digits(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}