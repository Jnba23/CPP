/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:51:52 by asayad            #+#    #+#             */
/*   Updated: 2025/03/15 13:57:50 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main(){
    ClapTrap a("Trap");
    ClapTrap b("Trap v2.0");
    for (int i = 0; i < 12; i++){
        a.attack("Trap v2.0");
    }
    a.beRepaired(1);
    b.beRepaired(1);
}