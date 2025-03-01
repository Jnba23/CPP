/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:56:38 by asayad            #+#    #+#             */
/*   Updated: 2025/02/14 11:51:40 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	
	if (ac == 2){
		Harl a;
		std::string s(av[1]);
		a.complain(s);
	}
	else
		std::cerr << "Too many or few args !" << '\n';
	return (0);
}