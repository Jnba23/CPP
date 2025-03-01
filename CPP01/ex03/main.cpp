/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:55:38 by asayad            #+#    #+#             */
/*   Updated: 2025/02/13 00:12:18 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
    	Weapon club = Weapon("Baseball bat !");
    	HumanA bob("Bob", club);
    	bob.attack();
    	club.setType("9mm");
    	bob.attack();
	}
	{
    	Weapon club = Weapon("Hrawa");
    	HumanB jim("Hamid");
    	jim.setWeapon(club);
    	jim.attack();
    	club.setType("Katorza !");
    	jim.attack();
	}
	return (0);
}