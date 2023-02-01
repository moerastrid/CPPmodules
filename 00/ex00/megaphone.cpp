/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: astrid <astrid@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/22 17:41:36 by astrid        #+#    #+#                 */
/*   Updated: 2023/02/01 20:01:50 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;
}
