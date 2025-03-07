/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:42:37 by asayad            #+#    #+#             */
/*   Updated: 2025/03/07 06:53:10 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define BLUE "\033[94m"
#include <iostream>
#include <iomanip>
#include <cstdlib>


class	Contact{
private:
    std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	void	get_contact_inf(int idx, int i) const;
	int		set_contact_inf(void);
	std::string check_lenght(std::string s) const;
	int		check_input(void);
	int		has_only_printable_char(void);
	static std::string trim(std::string s);
};

#endif