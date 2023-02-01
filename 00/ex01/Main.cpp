/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 13:05:35 by ageels        #+#    #+#                 */
/*   Updated: 2023/02/01 20:46:00 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include "phonebook.hpp"

int	getNumber()
{
	int number = 0;

	while(number == 0)
	{
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (number == 0)
			std::cout << "PLEASE ENTER VALID NUMBER" << std::endl;
	}
	return (number);
}

int	searchBook(PhoneBook myBook)
{
	int index = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "| ";
		if (myBook.myContacts[i].FirstName.compare("          "))
			std::cout << i + 1;
		else
			std::cout << " ";
		std::cout << "        |" << myBook.myContacts[i].FirstName << "|";
		std::cout << myBook.myContacts[i].LastName << "|";
		std::cout << myBook.myContacts[i].NickName << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "PLEASE ENTER INDEX NUMBER" << std::endl;
	index = getNumber();
	if (index >= 1 && index <= 8 && myBook.myContacts[index - 1].FirstName.compare("          ") != 0)
		myBook.myContacts[index - 1].Display();
	return (0);
}

void phoneLoop(PhoneBook myBook)
{
	std::string input;
	
	while (1)
	{	
		std::cout << "OPTIONS: ADD / SEARCH / EXIT " << std::endl;
		std::cin >> input;
		for (int i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);
		if (input.compare("ADD") == 0)
		{
			std::cout << "ADDING. . ."  << std::endl;
			myBook.myContacts[0].AddContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			searchBook(myBook);
		}
		else if (input.compare("EXIT") == 0)
			exit (0);
	}
}

int main(int argc, char **argv)
{
	PhoneBook instanceBook;

	if (argc > 1)
	{
		std::cout << "DON'T START PHONEBOOK WITH ARGUMENT" << std::endl;
		return (-1);
	}
	phoneLoop(instanceBook);
	return (0);
}
