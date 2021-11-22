#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact{

	public :
	
	Contact(void);
	~Contact(void);
	std::string get_firstname(void) const;
	std::string get_lastname(void) const;
	std::string get_nickname(void) const;
	std::string get_darkestsecret(void) const;
	std::string get_phonenumber(void) const;
	void		add(void);
	void		print_contact(int i) const;

	private :

	int			_print_fill(std::string message, void (Contact::*set)(std::string input));
	void 		_set_lastname(std::string input);
	void 		_set_nickname(std::string input);
	void 		_set_darkestsecret(std::string input);
	void 		_set_firstname(std::string input);
	void 		_set_phonenumber(std::string input);
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _darkestsecret;
	std::string	_phonenumber;
};

#endif