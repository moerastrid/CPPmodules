/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   header.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 17:08:28 by ageels        #+#    #+#                 */
/*   Updated: 2023/01/30 18:47:14 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact 
{
	public:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;

		Contact();
		void AddSecret(std::string secret);
		void Display();
	private:
		std::string DarkestSecret;
};

Contact::Contact()
{
	FirstName = "          ";
	LastName = "          ";
	NickName = "          ";
	DarkestSecret = "          ";
}

void Contact::AddSecret(std::string secret)
{
	DarkestSecret = secret;	
}

void Contact::Display()
{
	std::cout << "FIRST NAME:" << FirstName << "\n";
	std::cout << "LAST NAME:" << LastName << "\n";
	std::cout << "NICKNAME:" << NickName << "\n";
	std::cout << "DARKEST SECRET:" << DarkestSecret << "\n";
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
