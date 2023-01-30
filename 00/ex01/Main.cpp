/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 13:05:35 by ageels        #+#    #+#                 */
/*   Updated: 2023/01/30 18:22:39 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "header.hpp"

void searchBook(PhoneBook myBook)
{
	int number = -1;

	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |\n";
	for (int i = 0; i < 8; i++)
	{
		std::cout << "| ";
		if (myBook.contacts[i].FirstName.compare("          "))
			std::cout << i + 1;
		else
			std::cout << " ";
		std::cout << "        |" << myBook.contacts[i].FirstName << "|";
		std::cout << myBook.contacts[i].LastName << "|";
		std::cout << myBook.contacts[i].NickName << "|\n";
	}
	std::cout << "\nPLEASE ENTER INDEX NUMBER\n";
	std::cin >> number;
	if (number > 0 && number < 7)
		std::cout << "valid\n";
	else
		number = -1;
	return ;
}

void phoneLoop(PhoneBook myBook)
{
	std::string input;

	std::cout << " . . . \nWELCOME TO PHONEBOOK\n . . . \n";
	while (1)
	{
		std::cout << "OPTIONS: ADD / SEARCH / EXIT \n\n";
		std::cin >> input;
		for (int i = 0; i < input.size(); i++)
			input[i] = toupper(input[i]);
		if (input.compare("ADD") == 0)
			std::cout << "ADDING. . .\n";
		else if (input.compare("SEARCH") == 0)
			searchBook(myBook);
		else if (input.compare("EXIT") == 0)
			exit (0);
		else 
			std::cout << "\n";
	}
}

int main(int argc, char **argv)
{
	PhoneBook myBook;

	if (argc > 1)
	{
		std::cout << "DON'T START PHONEBOOK WITH ARGUMENT\n";
		return (-1);
	}
	//for (int i = 0; i < 8; i++)
	//	myBook.contacts[i] = Contact("a", "a", "a");
	phoneLoop(myBook);
	return (0);
}
