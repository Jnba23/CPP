/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 07:12:23 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 01:49:06 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string n);
        ScavTrap(const ScavTrap& st);
        ScavTrap& operator=(const ScavTrap& st);
        ~ScavTrap();
        void guardGate() const;
        void attack(const std::string& target);
        
};

#endif