#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_indexContactTab = 0;
}

PhoneBook::~PhoneBook(void)
{
}



void PhoneBook::_ft_print_contactList(void) const
{
	int i;

	i = 0;
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "firstname" << "|" << std::setw(10) << "lastname" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < 8)
	{
		this->_contactTab[i].ft_print_contact_tab(i);
		i++;
	}
}

int	ft_check_index(std::string index)
{
	int len = index.length();

	if (len != 1)
		return (1);
	if (!isdigit(index[0]) || index[0] < '0' || index[0] > '8')
		return (1);
	return (0);
}

int PhoneBook::ft_search(void) const
{
	std::string buffer;

	_ft_print_contactList();
	std::cout << "Please indicate an index for more info : ";
	while (getline(std::cin, buffer))
	{
		if (!ft_check_index(buffer))
			break;
		std::cout << "Wrong input : please try again: ";
	}
	this->_contactTab[std::atoi(buffer.c_str())].ft_print_contact(std::atoi(buffer.c_str()));

	return (0);
}

int PhoneBook::ft_add(void)
{
	this->_contactTab[_indexContactTab].set();
	this->_indexContactTab += 1;
	if (this->_indexContactTab > 7)
		this->_indexContactTab = 0;
	return (0);
}