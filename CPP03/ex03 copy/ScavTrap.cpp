/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 07:13:17 by asayad            #+#    #+#             */
/*   Updated: 2025/03/23 03:09:56 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(std::string n): ClapTrap(n, 100, 50, 20){
    std::cout << "ScavTrap " << n << " Constructor called !" << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& st): ClapTrap(st){
    std::cout << "ScavTrap Copy Constructor called !" << '\n';
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st){
    std::cout << "ScavTrap assignment operator called !" << '\n';
    *this = st;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << getName() << " Destructor called !" << '\n';
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode !" << '\n';
}