#include "convert.hpp"

void convert(std::string str)
{
	double number;
	std::cout.precision(20);
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
	if (isprint(c))
		std::cout << "As char : " << c << std::endl;
	else
		std::cout << "As char : impossible" << std::endl;

	
	int i = static_cast<int>(number);
	try
	{
		stoi(str);
		std::cout << "As int : " << i << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "As int : Impossible" << std::endl;
	}
	
	float f = static_cast<float>(number);
	if (f - i == 0)
		std::cout << "As float : " << f << ".0f" << std::endl;
	else if (f >= std::numeric_limits<float>::min() && f <= std::numeric_limits<float>::max())
		std::cout << "As float : " << f << "f" << std::endl;
	else
		std::cout << "As float : impossible" << std::endl;

	if (number - i == 0)
		std::cout << "As double : " << number << ".0" << std::endl;
	else if (number >= std::numeric_limits<double>::min() && number <= std::numeric_limits<double>::max())
		std::cout << "As double : " << number << std::endl;
	else
		std::cout << "As double : impossible" << std::endl;
}