/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:46:59 by asayad            #+#    #+#             */
/*   Updated: 2025/02/14 11:25:09 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::level_init(level_t *levels){
	levels[0].level = "debug";
	levels[0].f = &Harl::debug;
	levels[1].level = "info";
	levels[1].f = &Harl::info;
	levels[2].level = "warning";
	levels[2].f = &Harl::warning;
	levels[3].level = "error";
	levels[3].f = &Harl::error;
}
void Harl::complain(std::string level){
	level_t levels[4];
	
	level_init(levels);
	for(int i = 0; i < 4; i++){
		if (level == levels[i].level)
		{
			(this->*levels[i].f)();
			return ;
		}
	}
}

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << '\n';
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!!" << '\n';
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
				<< "years whereas you started working here since last month." << '\n';
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';
}

