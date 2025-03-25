/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:29:24 by asayad            #+#    #+#             */
/*   Updated: 2025/03/23 21:43:34 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name", 100, 50, 30), FragTrap(n), ScavTrap(n){
    std::cout << "DiamondTrap " << n << " constructor called !" << '\n';
    this->name = n;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt): ClapTrap(dt), FragTrap(dt.ClapTrap::getName()), ScavTrap(dt.ClapTrap::getName()){
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

void DiamondTrap::whoAmI(void){
    std::cout << "I am " << getName() << " and my ClapName is " << ClapTrap::getName() << '\n';
}