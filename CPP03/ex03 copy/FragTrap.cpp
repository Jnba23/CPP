/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 05:11:25 by asayad            #+#    #+#             */
/*   Updated: 2025/03/23 06:08:21 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap(std::string n): ClapTrap(n, 100, 100, 30){
    std::cout << "FragTrap Constructor called !" << '\n';
}

FragTrap::FragTrap(const FragTrap& ft): ClapTrap(ft){
    std::cout << "FragTrap Copy Constructor called !" << '\n';
}

FragTrap& FragTrap::operator=(const FragTrap& ft){
    std::cout << "FragTrap assignment operator called !" << '\n';
    *this = ft;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << getName() << " Destructor called !" << '\n';
}

void FragTrap::highFivesGuys(void){
    std::cout << "Give me a high Fiive ... !" << '\n';
}