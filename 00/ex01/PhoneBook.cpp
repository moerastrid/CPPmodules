/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:40:39 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/20 20:15:22 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::createPhoneBook(void)
{
	this->n = 0;
	for (int i = 0; i < 8; i++)
		this->set[i] = false;
}

void	PhoneBook::addContact(void)
{
	std::string	temp[5];

	this->n = this->n % 8;
	this->set[this->n] = true;
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
			std::cout << "First Name: ";
		if (i == 1)
			std::cout << "Last Name: ";
		if (i == 2)
			std::cout << "Nick Name: ";
		if (i == 3)
			std::cout << "Phone Number: ";
		if (i == 4)
			std::cout << "Darkest Secret: ";
		getline(std::cin, temp[i]);
		if (temp[i].empty())
		{
			std::cout << "Field cannot be empty" << std::endl;
			i--;
		}
	}
	this->MyContacts[this->n].add(temp[0], temp[1], temp[2], temp[3], temp[4]);
	this->n++;
}

void	PhoneBook::searchContact(void)
{
	std::string	temp;
	char		wanted;

	std::cout << "|index     |first name|last name |nick name |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->set[i] == false)
			break;
		else
		{
			std::cout << "|" << i+1 << "         |";
			this->MyContacts[i].preview();
		}
	}
	while (1)
	{
		std::cout << "Index?" << std::endl;
		getline(std::cin, temp);
		if (temp.empty() == 0)
			break;
	}
	wanted = temp[0];

	if (temp.size() != 1 || (wanted < '0' || wanted > '8') || set[wanted - 1 - '0'] == false)
		std::cout << "invalid index" << std::endl;
	else
		this->MyContacts[wanted - '0' - 1].display();
}