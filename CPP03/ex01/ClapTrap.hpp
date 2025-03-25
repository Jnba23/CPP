/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:51:48 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 02:06:49 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap{
    protected :
        std::string         name;
        unsigned int        HitPoints; //health of the claptrap
        unsigned int        EnergyPoints; // attacking and repairing consumes 1 energy point each
        unsigned int        Attack_damage;
    public :
        ClapTrap();
		ClapTrap(std::string n);
		ClapTrap(std::string n, unsigned int h_p, unsigned int e_p, unsigned int a_d);
		ClapTrap(const ClapTrap& inst);
		ClapTrap& operator=(const ClapTrap& a);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        virtual void attack(const std::string& target);
		virtual ~ClapTrap();
};
#endif