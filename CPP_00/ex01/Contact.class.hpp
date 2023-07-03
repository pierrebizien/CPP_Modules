#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <iomanip>

class Contact {
	public: 
		Contact ( void );
		~Contact ( void );
		int set( void );
		void ft_print_contact_tab( int index ) const ;
		void ft_print_contact( int index ) const;

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string	_phone_number;
		std::string _darkest_secret;
};

#endif