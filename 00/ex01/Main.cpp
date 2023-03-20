/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:40:34 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/20 19:53:21 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	std::string	selection;
	PhoneBook MyAwesomePhoneBook;

	MyAwesomePhoneBook.createPhoneBook();
	std::cout << "Welcome to My Awesome PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "Please select: ADD / SEARCH / EXIT" << std::endl;
		getline(std::cin, selection);
		if (selection.compare("ADD") == 0)
			MyAwesomePhoneBook.addContact();
		else if (selection.compare("SEARCH") == 0)
			MyAwesomePhoneBook.searchContact();
		else if (selection.compare("EXIT") == 0)
			break;
	}
	std::cout << "Thank you for using My Awesome PhoneBook" << std::endl;
	return (0);
}