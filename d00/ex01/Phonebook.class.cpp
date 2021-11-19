#include "Phonebook.class.hpp"
#include <iostream>
#include <iomanip>

//constructor and destructor
Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_nb_user_toprint = 0;
	this->index_fill = "Index";
	this->firstname_fill = "First name";
	this->lastname_fill = "Last name";
	this->nickname_fill = "Nickname";
	this->phonenumber_fill = "Phone number";
	this->darkestsecret_fill = "Darkest secret";
	return;
}
Phonebook::~Phonebook(void)
{
	return;
}
//getters and setters
int	Phonebook::get_index()
{
	return (this->_index);
}

int	Phonebook::inc_index()
{
	if (this->_index < 7)
		this->_index++;
	else
		this->_index = 0;
	if (this->_nb_user_toprint < 8)
		this->_nb_user_toprint++;
	return (this->_index);
}
//prints
void	Phonebook::_print_all_contacts(void) const
{
	int i = 0;
	std::cout << "|" << std::setw(10) << index_fill.substr(0,10);
	std::cout << "|" << std::setw(10) << firstname_fill.substr(0, 10);
	std::cout << "|" << std::setw(10) << lastname_fill.substr(0,10);
	std::cout << "|" << std::setw(10) << nickname_fill.substr(0,10) << "|" << std::endl;
	while (i < this->_nb_user_toprint)
	{
		this->_contacts[i].print_contact(i);
		i++;
	}
}

void	Phonebook::_print_user_info(int idx) const
{
	std::cout << "User index : " << idx << std :: endl;
	std::cout << "First name : " << this->_contacts[idx].get_firstname() << std :: endl;
	std::cout << "Last name : " << this->_contacts[idx].get_lastname() << std :: endl;
	std::cout << "Nickname : " << this->_contacts[idx].get_nickname() << std :: endl;
	std::cout << "Phone number : " << this->_contacts[idx].get_phonenumber() << std :: endl;
	std::cout << "Darkest secret : " << this->_contacts[idx].get_darkestsecret() << std :: endl;
}

//checks and verifs
int	Phonebook::_is_full_digits(std::string input) const
{
	std::string::const_iterator it = input.begin();
	while (it != input.end())
	{
		if (!std::isdigit(*it))
			return (0);
		it++;
	}
	return (1);
}

int	Phonebook::_input_user_index(void)
{
	std::string input;
	int	index_input = -1;

	while (index_input < 0 || index_input >= this->_nb_user_toprint)
	{
		std::cout << "Please enter a user index between " << 0 << " and " << this->_nb_user_toprint - 1 << " for more informations : ";
		std::getline(std::cin, input);
		if (!input.empty() && _is_full_digits(input))
			index_input = stoi(input);
	}
	return(index_input);
}
//main functions

int	Phonebook::_command_dispatcher(std::string input)
{
	if (input.compare("ADD") == 0)
	{
		this->_contacts[this->_index].add();
		inc_index();
	}
	else if (input.compare("SEARCH") == 0)
	{
		if (this->_nb_user_toprint == 0)
		{
			std::cout << "You need to add contacts to search" << std::endl;
			return (0);
		}
		_print_all_contacts();
		int index_user = _input_user_index();
		_print_user_info(index_user);
	}
	else if (input.compare("EXIT") == 0)
		return (1);
	return (0);
}

int	Phonebook::loop(void)
{
	std::string input;

	while (1)
	{
		std::getline(std::cin, input);
		if (std::cin.eof()==1)
		{
			std::cin.clear();
			std::cin.ignore();
			return (1);
		}
		if (_command_dispatcher(input) == 1)
			break;
	}
	return (1);
}