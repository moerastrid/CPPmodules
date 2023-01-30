/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 17:08:28 by ageels        #+#    #+#                 */
/*   Updated: 2023/01/30 18:09:09 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact 
{
	public:
		std::string FirstName;
		std::string LastName;
		std::string	NickName;
		Contact();
		Contact(std::string a, std::string b, std::string c);
};

Contact::Contact()
{
	FirstName = "          ";
	LastName = "          ";
	NickName = "          ";
}

Contact::Contact(std::string a, std::string b, std::string c)
{
	FirstName = a;
	LastName = b;
	NickName = c;
}

class PhoneBook 
{
	public:
		Contact contacts[8];

	PhoneBook()
	{
		std::cout << "CREATED PHONEBOOK\n";
	}
};
