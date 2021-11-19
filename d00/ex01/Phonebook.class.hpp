#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class Phonebook {

	public :

	Phonebook(void);
	~Phonebook(void);
	int		loop(void);
	int		get_index(void);
	int		inc_index(void);

	private :
	Contact _contacts[8];
	int 	_index;
	int 	_nb_user_toprint;
	void	_print_all_contacts(void) const;
	int		_input_user_index(void);
	void	_print_user_info(int idx) const;
	int		_is_full_digits(std::string input) const;
	int		_command_dispatcher(std::string input);
	std::string index_fill;
	std::string firstname_fill;
	std::string lastname_fill;
	std::string nickname_fill;
	std::string phonenumber_fill;
	std::string darkestsecret_fill;
};

#endif