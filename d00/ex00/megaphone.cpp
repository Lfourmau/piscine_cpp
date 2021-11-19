#include <iostream>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	argv = &argv[1];

	if (argc == 1)
	{
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return(0);
}
