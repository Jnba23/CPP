/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_funcs.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:23:42 by asayad            #+#    #+#             */
/*   Updated: 2025/02/08 01:31:49 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
	static int i;
	
	i = i % 8;
	if (i == 7)
		full = true;
	if (list[i].set_contact_inf())
		i++;
	idx = i;
}

void PhoneBook::search(void) const
{
	int size;
	int	contact_idx;
	std::string s;
	bool		valid_digits = true;
	
	if (idx == 0)
	{
		std::cout << BOLD << "No contacts added yet !" << RESET << std::endl;
		return ; 
	}
	std::cout << "|-----------------------------------------|" << std::endl;
	std::cout << "|   Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|--------|----------|----------|----------|" << std::endl;
	if (full)
		size = 8;
	else
		size = idx;
	for (int i = 0; i < size; i++)
		list[i].get_contact_inf(i, 1);
	std::cout << BOLD << BLUE << "Choose contact's index info to display :"
		<< RESET << std::endl;
	while (true)
	{
		valid_digits = true;
		std::cout << BLUE << "> " << RESET;
		if(!getline(std::cin, s))
			exit(0);
		for (u_int i = 0; i < s.length(); i++)
		{
			if (!isdigit(s[i]))
			{
				valid_digits = false;
				break ;
			}
				
		}
		if (!valid_digits || s.empty())
		{
			std::cout << BOLD << RED << "Invalid input ! Press ENTER to return to the main menu or choose a valid index 1 - "
				<< idx << RESET << std::endl;
			if (!getline(std::cin, s))
				exit(0);
			if (s.empty())
				return ;
		}
		contact_idx = atoi(s.c_str());
		if (contact_idx < 1 || contact_idx > idx)
		{
			std::cout << BOLD << RED << "OUT OF RANGE ! Press ENTER to go back the main Menu or else to retry "
				<< RESET << std::endl;
			if (!getline(std::cin, s))
				exit(0);
			if (s.empty())
				return ;
			else
			{
				std::cin.clear();
				continue ;
			}
		}
		break ;
	}
	list[contact_idx - 1].get_contact_inf(idx, 2);
}
