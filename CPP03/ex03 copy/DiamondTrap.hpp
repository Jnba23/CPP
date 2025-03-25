/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:14:16 by asayad            #+#    #+#             */
/*   Updated: 2025/03/23 21:55:42 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string name;
    public:
        DiamondTrap(std::string n);
        DiamondTrap(const DiamondTrap& dt);
        DiamondTrap& operator=(const DiamondTrap& dt);
        ~DiamondTrap();
        void whoAmI();
        std::string getName() const;
};


/*
    VPTR*
        CLAPTRAP | vptr.SCAVTRAP | vptr.FRAGTRAP | DIAMONDTRAO
*/

#endif