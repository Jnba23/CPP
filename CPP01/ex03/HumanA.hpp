/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humana.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:40:49 by asayad            #+#    #+#             */
/*   Updated: 2025/02/12 23:51:02 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon		*weapon;
	public:
		HumanA(std::string n, Weapon& w){
			this->name = n;
			this->weapon = &w;
		}
		void	attack(void) const;
};

#endif