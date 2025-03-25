/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 08:35:22 by asayad            #+#    #+#             */
/*   Updated: 2025/03/24 08:19:10 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

int main(){

    // ClapTrap* DIM = new DiamondTrap("C!");
    // ScavTrap scav("dx");

    // scav.attack("tar");
    // DIM->attack("ka3ka3");
    // std::cout << DIM->getName() << std::endl;
    // delete DIM;
    ClapTrap a("C1");
    DiamondTrap b("D1");
    DiamondTrap c(b);
    c.attack("C1");
    c.whoAmI();
}