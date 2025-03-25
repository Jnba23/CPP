/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:29:24 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 01:44:44 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name", 100, 50, 30){
    std::cout << "DiamondTrap " << n << " constructor called !" << '\n';
    this->name = n;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt): ClapTrap(dt), FragTrap(dt), ScavTrap(dt){
    std::cout << "DiamondTrap copy constructor called !" << '\n';
    *this = dt;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& dt){
    std::cout << "DiamondTrap assignment operator called !" << '\n';
    if (this != &dt)
    {
        ClapTrap::operator=(dt);
        name = dt.name;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << getName() << " destructor called !" << '\n';
}

std::string DiamondTrap::getName() const{
    return (name);
}

void DiamondTrap::whoAmI(void) const{
    std::cout << "I am " << getName() << " and my ClapName is " << ClapTrap::getName() << '\n';
}

void DiamondTrap::attack(const std::string& target){
    if (EnergyPoints == 0)
    {
        std::cout << "DiamondTrap " << name << " is exhausted" << '\n';
        return ;
    }
    else
    {
        if (HitPoints == 0)
        {
            std::cout << "DiamondTrap " << name << " has no Amo" << '\n';
            return ;
        }
        std::cout << "DiamondTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage" << '\n';
        EnergyPoints -= 1;
    }
}