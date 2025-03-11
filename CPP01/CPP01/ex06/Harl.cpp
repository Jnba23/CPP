/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:46:59 by asayad            #+#    #+#             */
/*   Updated: 2025/02/14 13:43:59 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::level_init(level_t *levels){
	levels[0].f = &Harl::debug;
	levels[1].f = &Harl::info;
	levels[2].f = &Harl::warning;
	levels[3].f = &Harl::error;
}

int	 Harl::get_complaint_level(std::string& level){
	switch (level[0]){
		case 'D':
			{if (level == "DEBUG"){return DEBUG;}}
			break ;
		case 'I':
			{if (level == "INFO"){return INFO;}}
			break ;
		case 'W':
			{if (level == "WARNING"){return WARNING;}}
			break ;
		case 'E':
			{if (level == "ERROR"){return ERROR;}}
			break ;
	}
	return (0);
}

void Harl::complain(std::string level){
	level_t levels[4];
	int		lvl;
	
	level_init(levels);
	lvl = get_complaint_level(level);
	if (!lvl){
		std::cerr << "Harl: unavailable level !" << '\n';
		return ;
	}
	for(int i = lvl - 1; i < 4; i++){
		(this->*levels[i].f)();
	}
}

void Harl::debug(){
	std::cout << "[ DEBUG ]" << '\n';
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << '\n';
}

void Harl::info(){
	std::cout << "[ INFO ]" << '\n';
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!!" << '\n';
}

void Harl::warning(){
	std::cout << "[ WARNING ]" << '\n';
	std::cout << "I think I deserve to have some extra bacon for free.\n" 
			<< "I've been coming for years whereas you started working here since last month." << '\n';
}

void Harl::error(){
	std::cout << "[ ERROR ]" << '\n';
	std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';
}

