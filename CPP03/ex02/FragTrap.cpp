/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 05:11:25 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 02:00:40 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(): ClapTrap("Def_ScavTrap", 100, 100, 30){
    std::cout << "FragTrap Default Constructor called !" << '\n';
}

FragTrap::FragTrap(std::string n): ClapTrap(n, 100, 100, 30){
    std::cout << "FragTrap Constructor called !" << '\n';
}

FragTrap::FragTrap(const FragTrap& ft): ClapTrap(ft){
    std::cout << "FragTrap Copy Constructor called !" << '\n';
    if (this != &ft)
        *this = ft;
}

FragTrap& FragTrap::operator=(const FragTrap& ft){
    std::cout << "FragTrap assignment operator called !" << '\n';
    ClapTrap::operator=(ft);
    return (*this);
}

void FragTrap::attack(const std::string& target){
    if (EnergyPoints == 0)
    {
        std::cout << "FragTrap " << name << " is exhausted" << '\n';
        return ;
    }
    else
    {
        if (HitPoints == 0)
        {
            std::cout << "FragTrap " << name << " has no Amo" << '\n';
            return ;
        }
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage" << '\n';
        EnergyPoints -= 1;
    }
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << getName() << " Destructor called !" << '\n';
}

void FragTrap::highFivesGuys(void) const{
    std::cout << "Give me a high Fiive ... !" << '\n';
}