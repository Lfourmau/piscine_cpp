#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void replace_word(std::string *toreplace, std::string replace)
{
	*toreplace = replace; 
}

int main(int argc, char **av)
{
	(void)argc;
	//error management to do
	std::string line;
	std::ifstream ifs("civilisation.txt");
	std::ofstream ofs("out.txt");
	while (getline(ifs, line))
	{
		std::istringstream iss(line);
		while (iss)
		{
			std::string word;
			iss >> word;
			if (word.find(av[1]) != std::string::npos)
				replace_word(&word, av[2]);
			ofs << word << " ";
		}
		ofs << std::endl;
	}
}