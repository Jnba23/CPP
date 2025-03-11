/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:54:42 by asayad            #+#    #+#             */
/*   Updated: 2025/02/11 13:31:23 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		~Zombie(){
			std::cout << "destructor called on Zombie : " << name << std::endl;
		}
		void announce (void);
		static Zombie* zombieHorde( int N, std::string name );
} ;

#endif