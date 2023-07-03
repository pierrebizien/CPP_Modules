#include "Contact.class.hpp"

Contact::Contact ( void ) 
{
}

Contact::~Contact ( void ) 
{
}

void ft_print_ten(std::string str)
{
	int len = str.length();

	if (len <= 10)
		std::cout <<  std::setw(10) << str << "|";
	else
		std::cout << std::setw(10) << str.substr(0, 8).append(".") << "|";
}

void Contact::ft_print_contact_tab( int index ) const 
{
	std::cout << std::setw(10);
    std::cout << index << "|";
    ft_print_ten(this->_first_name);
    ft_print_ten(this->_last_name);
    ft_print_ten(this->_nickname);
    std::cout << std::endl;
}

void Contact::ft_print_contact( int index ) const
{

	std::cout <<  "index :" << index << std::endl;
	std::cout <<  "First Name :" << this->_first_name << std::endl;
	std::cout <<  "Last Name :" << this->_last_name << std::endl;
	std::cout <<  "Nickname :" << this->_nickname << std::endl;
	std::cout <<  "Phone Number :" << this->_phone_number << std::endl;
	std::cout <<  "Darkest secret :" << this->_darkest_secret << std::endl;
}
int ft_check_phone_numb(std::string phoneNumber)
{
	int len = phoneNumber.length();
	int i = 0;

	while (i < len)
	{
		if (!std::isdigit(phoneNumber[i]))
			return (std::cout << "Invalid Number" << std::endl, 1);
		i++;
	}
	return (0);
}

int Contact::set()
{
    std::string buffer;

    std::cout << "Enter first name :" << std::endl;
	while (getline(std::cin, buffer))
	{
		if (buffer.compare("") != 0)
			break;
		std::cout << "Try again :" << std::endl;
	}
	this->_first_name = buffer;

	std::cout << "Enter last name :" << std::endl;
	while (getline(std::cin, buffer))
	{
		if (buffer.compare("") != 0)
			break;
		std::cout << "Try again :" << std::endl;
	}
	this->_last_name = buffer;

	std::cout << "Enter nickname :" << std::endl;
	while (getline(std::cin, buffer))
	{
		if (buffer.compare("") != 0)
			break;
		std::cout << "Try again :" << std::endl;
	}
	this->_nickname = buffer;

	std::cout << "Enter phone number :" << std::endl;
	while (getline(std::cin, buffer))
	{
		if (buffer.compare("") != 0 && ft_check_phone_numb(buffer) == 0)
			break;
		std::cout << "Enter phone number :" << std::endl;
	}
	this->_phone_number = buffer;

	std::cout << "Enter phone your darkest secret :" << std::endl;
	while (getline(std::cin, buffer))
	{
		if (buffer.compare("") != 0)
			break;
		std::cout << "Try again :" << std::endl;
	}
	this->_darkest_secret = buffer;
    return (0);
}