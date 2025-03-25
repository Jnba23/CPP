/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 05:11:23 by asayad            #+#    #+#             */
/*   Updated: 2025/03/23 07:13:48 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& ft);
        FragTrap& operator=(const FragTrap& ft);
        ~FragTrap();
        void highFivesGuys(void);
};
#endif