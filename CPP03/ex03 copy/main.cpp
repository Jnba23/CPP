/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 08:35:22 by asayad            #+#    #+#             */
/*   Updated: 2025/03/23 21:47:29 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int main(){

    ClapTrap* DIM = new DiamondTrap("C!");
    ScavTrap scav("dx");

    scav.attack("tar");
    DIM->attack("ka3ka3");
    std::cout << DIM->getName() << std::endl;
    delete DIM;
    // ClapTrap a("C1", 10, 20, 30);
    // DiamondTrap b("D1");
    // DiamondTrap c(b);
    // c.attack("C1");
    // c.whoAmI();
}