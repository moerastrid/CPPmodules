/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 17:08:28 by ageels        #+#    #+#                 */
/*   Updated: 2023/02/01 20:28:40 by ageels        ########   odam.nl         */
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
		void AddContact();
		void Display();
	private:
		std::string DarkestSecret;
		int PhoneNumber;
};

Contact::Contact()
{
	FirstName = "          ";
	LastName = "          ";
	NickName = "          ";
	DarkestSecret = "          ";
}

void Contact::AddContact()
{
	std::cout << "FIRST NAME: ";
	std::cin >> this->FirstName;
	std::cout << "LAST NAME: ";
	std::cin >> this->LastName;
	std::cout << "NICKNAME: ";
	std::cin >> this->NickName;
	std::cout << "DARKESTS SECRET: ";
	std::cin >> this->DarkestSecret;
}

void Contact::Display()
{
	std::cout << "FIRST NAME: " << FirstName << std::endl;
	std::cout << "LAST NAME: " << LastName << std::endl;
	std::cout << "NICKNAME: " << NickName << std::endl;
	std::cout << "DARKEST SECRET: " << DarkestSecret << std::endl;
}
