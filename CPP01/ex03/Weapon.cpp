/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:41:07 by asayad            #+#    #+#             */
/*   Updated: 2025/03/03 23:11:37 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s){
	type = s;
}

void Weapon::setType(std::string s){
	type = s;
}

std::string Weapon::getType(void) const{
	return (type);
}