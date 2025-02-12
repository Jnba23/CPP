/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:27:11 by asayad            #+#    #+#             */
/*   Updated: 2025/02/08 01:01:53 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	std::string s;
	PhoneBook y_Pages;

	y_Pages.idx = 0;
	y_Pages.full = false;
	std::cout << BOLD << RED << "**Welcome to the Yellow Pages program**" << RESET << '\n';
	std::cout << "Choose one of the three commands below :\n"
			<< BOLD << GREEN << "ADD	-  SEARCH  -	 EXIT" << RESET << std::endl;
	while (1)
	{
		std::cout << "> ";
		if (!getline(std::cin, s))
		{
			std::cout << BOLD << "Exiting the yellow pages program !" << RESET << std::endl;
			exit (0);
		}
		s = Contact::trim(s);
		if (s == "ADD")
			y_Pages.add();
		else if (s == "SEARCH")
			y_Pages.search();
		else if (s == "EXIT")
		{
			std::cout << BOLD << "Exiting the yellow pages program !" << RESET << std::endl;
			exit (0);
		}
		else
			std::cout << "Invalid Input !" << std::endl;
	}
}