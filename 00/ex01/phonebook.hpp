/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/20 12:40:43 by ageels        #+#    #+#                 */
/*   Updated: 2023/03/20 16:53:00 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact MyContacts[8];
		int		n;
		bool	set[8];

	public:
		void	createPhoneBook(void);
		void	addContact(void);
		void	searchContact(void);
};
