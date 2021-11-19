#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

//constructor and destructor
Contact::Contact(void)
{
	return;
}
Contact::~Contact(void)
{
	return;
}
//geters
std::string Contact::get_firstname(void) const
{
	return (this->_firstname);
}
std::string Contact::get_lastname(void) const
{
	return (this->_lastname);
}
std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}
std::string Contact::get_darkestsecret(void) const
{
	return (this->_darkestsecret);
}
std::string Contact::get_phonenumber(void) const
{
	return (this->_phonenumber);
}
//setters
void	Contact::set_firstname(std::string input)
{
	this->_firstname = input;
	return;
}
void	Contact::set_lastname(std::string input)
{
	this->_lastname = input;
	return;
}
void	Contact::set_nickname(std::string input)
{
	this->_nickname = input;
	return;
}
void	Contact::set_phonenumber(std::string input)
{
	this->_phonenumber = input;
	return;
}
void	Contact::set_darkestsecret(std::string input)
{
	this->_darkestsecret = input;
	return;
}
//print funcs

void	Contact::_print_fill(std::string message, void (Contact::*set)(std::string input))
{
	std::string input;

	std::cout << message;
	std::getline(std::cin, input);
	(this->*set)(input);
}

void	Contact::print_contact(int i) const
{
	std::cout << "|" << std::setw(10) << i;
	if (get_firstname().length() > 10)
		std::cout << "|" << std::setw(9) << get_firstname().substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << get_firstname();
	if (get_lastname().length() > 10)
		std::cout << "|" << std::setw(9) << get_lastname().substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << get_lastname();
	if (get_nickname().length() > 10)
		std::cout << "|" << std::setw(9) << get_nickname().substr(0,9) << "." << "|" << std::endl;
	else
		std::cout << "|" << std::setw(10) << get_nickname() << "|" << std::endl;
}
//main funcs

void	Contact::add(void)
{
	_print_fill("Enter a first name : ", &Contact::set_firstname);
	_print_fill("Enter a last name : ", &Contact::set_lastname);
	_print_fill("Enter a nickname : ", &Contact::set_nickname);
	_print_fill("Enter a phone number : ", &Contact::set_phonenumber);
	_print_fill("Enter a darkest secret : ", &Contact::set_darkestsecret);
	return;
}
