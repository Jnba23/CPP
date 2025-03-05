/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:32:55 by asayad            #+#    #+#             */
/*   Updated: 2025/03/03 23:10:03 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, Weapon& w){
	this->name = n;
	this->weapon = &w;
}

void HumanA::attack(void) const {
	std::cout << name << " attacks with their " 
		<< weapon->getType() << std::endl;
}
