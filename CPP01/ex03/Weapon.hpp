/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:41:11 by asayad            #+#    #+#             */
/*   Updated: 2025/02/12 23:51:44 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string s){
			type = s;
		}
		std::string getType() const;
		void	setType(std::string n);
	
};

#endif