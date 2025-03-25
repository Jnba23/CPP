/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 05:11:25 by asayad            #+#    #+#             */
/*   Updated: 2025/03/24 07:08:59 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(){
    std::cout << "FragTrap Default Constructor called !" << '\n';
    ClapTrap::name = "Def_ScavTrap";
    ClapTrap::HitPoints = 100;
    ClapTrap::EnergyPoints = 100;
    ClapTrap::Attack_damage = 30;
}

FragTrap::FragTrap(std::string n){
    std::cout << "FragTrap Constructor called !" << '\n';
    ClapTrap::name = n;
    ClapTrap::HitPoints = 100;
    ClapTrap::EnergyPoints = 100;
    ClapTrap::Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& ft): ClapTrap(ft){
    std::cout << "FragTrap Copy Constructor called !" << '\n';
    if (this != &ft)
        *this = ft;
}

FragTrap& FragTrap::operator=(const FragTrap& ft){
    std::cout << "FragTrap assignment operator called !" << '\n';
    ClapTrap::name = ft.name;
    ClapTrap::HitPoints = ft.HitPoints;
    ClapTrap::EnergyPoints = ft.EnergyPoints;
    ClapTrap::Attack_damage = ft.Attack_damage;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << getName() << " Destructor called !" << '\n';
}

void FragTrap::highFivesGuys(void){
    std::cout << "Give me a high Fiive ... !" << '\n';
}