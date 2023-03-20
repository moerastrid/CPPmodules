/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:40:27 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/20 19:52:36 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	this->FirstName = fn;
	this->LastName = ln;
	this->NickName = nn;
	this->PhoneNumber = pn;
	this->DarkestSecret = ds;
}

void	Contact::preview(void)
{
	std::string	fn = this->FirstName;
	std::string	ln = this->LastName;
	std::string	nn = this->NickName;
	
	fn.resize(10, ' ');
	if (this->FirstName.size() > 10)
		fn[9] = '.';
	ln.resize(10, ' ');
	if (this->LastName.size() > 10)
		ln[9] = '.';
	nn.resize(10, ' ');
	if (this->NickName.size() > 10)
		nn[9] = '.';
	std::cout << fn << "|";
	std::cout << ln << "|";
	std::cout << nn << "|" << std::endl;
}

void	Contact::display(void)
{
	std::cout << "First Name : " << this->FirstName << std::endl;
	std::cout << "Last Name : " << this->LastName << std::endl;
	std::cout << "Nick Name : " << this->NickName << std::endl;
	std::cout << "Phone Number : " << this->PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->DarkestSecret << std::endl;
}