/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:51:48 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 02:17:45 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap{
    private:
        std::string         name;
        unsigned int        HitPoints; //health of the claptrap
        unsigned int        EnergyPoints; // attacking and repairing consumes 1 energy point each
        unsigned int        Attack_damage;
    public:
        ClapTrap();
		ClapTrap(std::string n);
		ClapTrap(const ClapTrap& inst);
		ClapTrap& operator=(const ClapTrap& a);
		~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif