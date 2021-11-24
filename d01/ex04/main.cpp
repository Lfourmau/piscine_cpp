#include <iostream>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>

int	error(std::string message)
{
	std::cout << message << std ::endl;
	return (1);
}

void replace_string(std::string *line, std::string toreplace, std::string replace)
{
	std::size_t index = 0;

	while ((index = line->find(toreplace, index)) != std::string::npos)
	{
		line->erase(index, toreplace.length());
		line->insert(index, replace);
		index += replace.length();
	}
}

std::string build_output(std::string filename)
{
	int i = -1;

	while (filename[++i])
		filename[i] = toupper(filename[i]);
	filename += ".replace";
	return (filename);
}

int main(int argc, char **av)
{
	if (argc != 4)
		return (error("Pleaser enter [Existing input filename] [String to delete] [String to add]"));
	std::string search = av[2];
	std::string replace = av[3];
	if (search.empty() || replace.empty())
		return (error("You can't send an empty string"));

	std::string line;
	std::ifstream ifs(av[1]);
	if (!ifs)
		return (error("Input file does not exist"));
	std::ofstream ofs(build_output(av[1]));
	while (getline(ifs, line))
	{
		replace_string(&line, search, replace);
		ofs << line << std::endl;
	}
	return (0);
}