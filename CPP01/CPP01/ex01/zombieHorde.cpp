/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:02:02 by asayad            #+#    #+#             */
/*   Updated: 2025/03/11 06:49:33 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	if (N < 0 || N >= 2147483647)
		return (NULL);
	Zombie *horde = new Zombie [N];
	for (int i = 0; i < N; i++){
		horde[i].name = name;
	}
	return (horde);
}