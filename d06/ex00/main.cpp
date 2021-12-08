#include "convert.hpp"

int ret_error(std::string error_msg)
{
	std::cout << error_msg << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (ret_error("Please enter one argument"));
	std::string arg = argv[1];
	if (arg.empty())
		return (ret_error("Don't enter an empty arg"));
	convert(arg);
	return (0);
}