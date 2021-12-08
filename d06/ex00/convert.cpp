#include "convert.hpp"

static int get_type(std::string toConvert)
{
	if (toConvert.length() == 1 && isalpha(toConvert[0]))
		return (1);
	if (full_digits(toConvert))
		return (2);
	if (stod(toConvert))
		return (3);
	if (stof(toConvert))
		return (4);
	return (0);
}

void	convert(std::string toConvert)
{
	int i = get_type(toConvert);
	
	switch (i)
	{
	case 1:
		std::cout<<"This is a char" << std::endl;
		//convert_int(stoi(toConvert));
		break;
	case 2:
		std::cout<<"This is an int" << std::endl;
		break;
	case 3:
		std::cout<<"This is a double" << std::endl;
		break;
	case 4:
		std::cout<<"This is a float" << std::endl;
		break;
	
	default:
		break;
	}
	std::cout << "Conversion dispatch" << std::endl;	
}