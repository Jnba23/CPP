/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 07:13:17 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 02:12:58 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(): ClapTrap("Def_Scavtrap", 100, 50, 20){
    std::cout << "ScavTrap Default Constructor called !" << '\n';
}

ScavTrap::ScavTrap(std::string n): ClapTrap(n, 100, 50, 20){
    std::cout << "ScavTrap " << n << " Constructor called !" << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& st): ClapTrap(st){
    std::cout << "ScavTrap Copy Constructor called !" << '\n';
    if (this != &st)
        *this = st;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st){
    std::cout << "ScavTrap assignment operator called !" << '\n';
    ClapTrap::operator=(st);
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << getName() << " Destructor called !" << '\n';
}

void ScavTrap::guardGate() const{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode !" << '\n';
}

void ScavTrap::attack(const std::string& target){
    if (EnergyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " is exhausted" << '\n';
        return ;
    }
    else
    {
        if (HitPoints == 0)
        {
            std::cout << "ScavTrap " << name << " has no Amo" << '\n';
            return ;
        }
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage" << '\n';
        EnergyPoints -= 1;
    }
}