/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:40:30 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/20 19:23:19 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	private :
		std::string	FirstName;
		std::string	LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public :
		void	add(std::string, std::string, std::string, std::string, std::string);
		void	preview(void);
		void	display(void);
};
