/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 13:05:35 by ageels        #+#    #+#                 */
/*   Updated: 2023/01/30 13:21:18 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	std::string input;

	if (argc == 1)
		std::cout << "WELCOME TO PHONEBOOK\n . . . \nOPTIONS: ADD / SEARCH / EXIT\n";
	std::cin >> input;
	return (0);
}
