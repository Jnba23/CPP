/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_funcs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:22:36 by asayad            #+#    #+#             */
/*   Updated: 2025/02/08 01:19:28 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::get_contact_inf(int idx, int i) const
{
	if(i == 1)
	{
		std::cout << GREEN << BOLD << std::setw(9) << idx + 1 << "|";
		std::cout << check_lenght(first_name);
		std::cout << "|";
		std::cout << check_lenght(last_name);
		std::cout << "|";
		std::cout << check_lenght(nick_name);
		std::cout << "|" << RESET << std::endl;
	}
	else
	{
		std::cout << BOLD << "First Name :" << first_name << std::endl;
		std::cout << "Last Name :" << last_name << std::endl;
		std::cout << "Nickname :" << nick_name << std::endl;
		std::cout << "Darkest secret :" << darkest_secret << std::endl;
		std::cout << "Phone Number :" << phone_number << RESET << std::endl;
	}
}

int	Contact::set_contact_inf(void)
{
	std::string	in;
	
	while (true)
	{
		std::cout << BOLD << "Enter person's first name : " << RESET;
		if (!(getline(std::cin, first_name)))
			exit(0);
		std::cout << BOLD << "Enter person's last name : " << RESET;
		if (!(getline(std::cin, last_name)))
			exit(0);
		std::cout << BOLD << "Enter person's nickname : " << RESET;
		if (!(getline(std::cin, nick_name)))
			exit(0);
		std::cout << BOLD << "Enter person's phone number : " << RESET;
		if (!(getline(std::cin, phone_number)))
			exit(0);
		std::cout << BOLD << "Enter person's DARKEST secret : " << RESET;
		if (!(getline(std::cin, darkest_secret)))
			exit(0);
		if (!check_input())
		{
			std::cout << RED << BOLD << "Press ENTER if you want to RETRY else go back to the main Menu !" << RESET << std::endl;
			getline(std::cin, in);
			if (in.empty())
				continue ;
			else
				return (0) ;
		}
		return (1) ;
	}
}

std::string Contact::trim(std::string s)
{
	size_t start = s.find_first_not_of(" \t\n\f\v");
	size_t end = s.find_last_not_of(" \t\n\f\v");
	if (start == std::string::npos || end == std::string::npos)
		return ("");
	else
		return (s.substr(start, end - start + 1));
}

int Contact::check_input(void)
{
	first_name = trim(first_name);
	last_name = trim(last_name);
	nick_name = trim(nick_name);
	darkest_secret = trim(darkest_secret);
	phone_number = trim(phone_number);
	if (first_name.empty() || last_name.empty() || nick_name.empty() 
		|| phone_number.empty() || darkest_secret.empty())
		return (0);
	for (u_int i = 0; i < phone_number.length(); i++)
	{
		if (!std::isdigit(phone_number[i]))
		{
			std::cout << BOLD << BLUE << "It's a phone number, C'mooooon !" << RESET << std::endl;
			return (0) ;
		}
	}
	return (1);
}

std::string Contact::check_lenght(std::string s) const
{
	std::string str = s;
	if (s.length() < 10)
		std::cout << std::right << std::setw(10);
	else
	{
		str = s.substr(0, 10);
		str[9] = '.';
	}
	return (str);
}
