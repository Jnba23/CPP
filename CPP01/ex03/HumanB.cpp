/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:40:55 by asayad            #+#    #+#             */
/*   Updated: 2025/03/03 23:10:50 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n){
	name = n;
	weapon = NULL;
}

void HumanB::attack() const{
	std::cout << name << " attacks with their ";
	if (!weapon)
	    std::cout << " ... ooh actually they're not armed !" << std::endl;
	else
	    std::cout << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w){
	weapon = &w;
}