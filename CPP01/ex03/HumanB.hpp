/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanb.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:40:59 by asayad            #+#    #+#             */
/*   Updated: 2025/02/12 23:52:05 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon		*weapon;
	public:
		HumanB(std::string n){
			name = n;
			weapon = NULL;
		}
		void attack() const;
		void setWeapon(Weapon& w);
};

#endif