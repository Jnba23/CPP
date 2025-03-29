/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 07:23:53 by asayad            #+#    #+#             */
/*   Updated: 2025/03/29 07:35:11 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure(){
    std::cout << "Cure Default Constructor's Called !" << '\n';
    setType("cure");
}

Cure::Cure(const Cure& c){
    std::cout << "Cure Copy Constructor's called !" << '\n';
    *this = c;
}

Cure& Cure::operator=(const Cure& c){
    std::cout << "Cure Assignment operator's called !" << '\n';
    if (this != &c)
        type = c.getType();
    return (*this);
}

Cure::~Cure(){
    std::cout << "Cure Destructor's called !" << '\n';
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << '\n';
}

AMateria* Cure::clone() const{
    std::cout << "Cure Clone called !" << '\n';
    AMateria* c_n = new AMateria();
    return (c_n);
}