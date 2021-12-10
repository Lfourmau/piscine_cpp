#include "convert.hpp"

void convert(std::string str)
{
	double number;

	std::cout.precision(9);
	try
	{
		if (str.length() == 1 && !isalpha(str[0]) && !isdigit(str[0]))
			throw(std::exception());
		else if (str.length() == 1 && isalpha(str[0]))
			number = static_cast<int>(str[0]);
		else
			number = stod(str);
	}
	catch(const std::exception& e)
	{
		std::cout << "Invalid argument" << std::endl;
		return ;
	}

	char c = static_cast<char>(number);
	if (!isascii(number) || isnan(number))
		std::cout << "As char : impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "As char : Non displayable" << std::endl;
	else
		std::cout << "As char : " << "'" << c << "'" << std::endl;

	
	int i = static_cast<int>(number);
	try
	{
		if (isnan(number) || number < std::numeric_limits<int>::min() ||number > std::numeric_limits<int>::max())
			throw(std::exception());
		//stoi(str);
		std::cout << "As int : " << i << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "As int : Impossible" << std::endl;
	}
	
	float f = static_cast<float>(number);
	if (f - i == 0)
		std::cout << "As float : " << f << ".0f" << std::endl;
	else
		std::cout << "As float : " << f << "f" << std::endl;

	if (number - i == 0)
		std::cout << "As double : " << number << ".0" << std::endl;
	else
		std::cout << "As double : " << number << std::endl;
}