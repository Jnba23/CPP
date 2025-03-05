/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:14:58 by asayad            #+#    #+#             */
/*   Updated: 2025/03/05 21:38:00 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[94m"
#define RESET "\033[0m"
#include <iostream>
#include <cstdio>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class	PhoneBook{
    private: //access specifier
	//declaration of private members
		Contact	list[8];
	public: //access specifier
		bool	full;
		int		idx;
		void	add(void); //can change data
		void	search(void) const; //only retieves data
	//declaration of public members / member funcs
};

#endif