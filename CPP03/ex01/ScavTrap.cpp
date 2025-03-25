/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 07:13:17 by asayad            #+#    #+#             */
/*   Updated: 2025/03/24 08:26:28 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default Constructor called !" << '\n';
    ClapTrap::name = "Def_Scavtrap";
    ClapTrap::HitPoints = 100;
    ClapTrap::EnergyPoints = 50;
    ClapTrap::Attack_damage = 20;    
}

ScavTrap::ScavTrap(std::string n){
    std::cout << "ScavTrap " << n << " Constructor called !" << '\n';
    ClapTrap::name = n;
    ClapTrap::HitPoints = 100;
    ClapTrap::EnergyPoints = 50;
    ClapTrap::Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& st): ClapTrap(st){
    std::cout << "ScavTrap Copy Constructor called !" << '\n';
    if (this != &st)
        *this = st;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st){
    std::cout << "ScavTrap assignment operator called !" << '\n';
    name = st.name;
    HitPoints = st.HitPoints;
    EnergyPoints = st.EnergyPoints;
    Attack_damage = st.Attack_damage;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << getName() << " Destructor called !" << '\n';
}

void ScavTrap::guardGate(){
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