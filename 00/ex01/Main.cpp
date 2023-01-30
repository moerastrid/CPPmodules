/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 13:05:35 by ageels        #+#    #+#                 */
/*   Updated: 2023/01/30 14:47:09 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	std::string input;
	PhoneBook myBook;

	if (argc > 1)
	{
		std::cout << "DON'T START PHONEBOOK WITH ARGUMENT\n";
		return (-1);
	}
	std::cout << "WELCOME TO PHONEBOOK\n. . . . . . . . . . . . . . . . . . . . . \n";
	while (1)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			std::cout << "ADDING. . .\n";
		}
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << "SEARCHING. . .\n";
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "EXITING. . .\n";
			exit (0);
		}
		else 
		{
			std::cout << "COMMAND NOT FOUND. . .\n";
		}
	}
	return (0);
}
