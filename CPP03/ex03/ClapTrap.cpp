/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:51:44 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 00:10:10 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap(): name("Def_ClapTrap"), HitPoints(10), EnergyPoints(10), Attack_damage(10){
    std::cout << "ClapTrap Default Constructor called" << '\n';
}

ClapTrap::ClapTrap(std::string n): name(n), HitPoints(10), EnergyPoints(10), Attack_damage(10){
    std::cout << "ClapTrap Constructor called" << '\n';
}

ClapTrap::ClapTrap(std::string n, unsigned int h_p, unsigned e_p, unsigned int a_d)
    : name(n), HitPoints(h_p), EnergyPoints(e_p), Attack_damage(a_d){
    std::cout << "Claptrap Constructor called !" << '\n';
}
ClapTrap::ClapTrap(const ClapTrap& inst){
    std::cout << "ClapTrap Copy Constructor called" << '\n';
    *this = inst;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& a){
    std::cout << "ClapTrap Assignement operator called" << '\n';
    if (this != &a)
    {
        name = a.name;
        HitPoints = a.HitPoints;
        EnergyPoints = a.EnergyPoints;
        Attack_damage = a.Attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap Destructor called" << '\n';
}

void ClapTrap::attack(const std::string& target){
    if (EnergyPoints == 0)
    {
        std::cout << "Claptrap " << name << " is exhausted" << '\n';
        return ;
    }
    else
    {
        if (HitPoints == 0)
        {
            std::cout << "Claptrap " << name << " has no Amo" << '\n';
            return ;
        }
        std::cout << "Claptrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage" << '\n';
        EnergyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "Claptrap " << name << " took " << amount << " points of damage" << '\n';
    if (HitPoints != 0)
    {
        if (amount > HitPoints)
            HitPoints = 0;
        else
            HitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (EnergyPoints == 0)
    {
        std::cout << "Claptrap " << name << " is exhausted" << '\n';
        return ;
    }
    else
    {
        std::cout << "Claptrap " << name << " gained " << amount << " Energy point(s)" << '\n';
        HitPoints += amount;
        EnergyPoints -= 1;
    }
}

std::string ClapTrap::getName() const{
    return (name);
}