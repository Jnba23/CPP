/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humana.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:32:55 by asayad            #+#    #+#             */
/*   Updated: 2025/02/12 23:50:41 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack(void) const {
	std::cout << name << " attacks with their " 
		<< weapon->getType() << std::endl;
}
