/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 07:12:23 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 00:15:12 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string n);
        ScavTrap(const ScavTrap& st);
        ScavTrap& operator=(const ScavTrap& st);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
        
};

#endif