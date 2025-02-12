/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:15:50 by asayad            #+#    #+#             */
/*   Updated: 2025/02/11 12:20:06 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		~Zombie(){
			std::cout << "destructor called on Zombie : " << name << std::endl;
		}
		void announce (void);
		static Zombie* newZombie( std::string name );
		void randomChump( std::string name );
} ;
#endif