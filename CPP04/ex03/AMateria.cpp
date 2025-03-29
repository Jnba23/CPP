/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:38:07 by asayad            #+#    #+#             */
/*   Updated: 2025/03/29 02:49:01 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(){
    std::cout << "AMateria Default constructor called !" << '\n';
    type = "Default";
}

AMateria::AMateria(const std::string& type){
    std::cout << "AMateria Default constructor called !" << '\n';
    std::cout << "AMateria constructor called !" << '\n';
    this->type = type;
}

AMateria::AMateria(const AMateria& m){
    std::cout << "AMateria Copy constructor called !" << '\n';
    *this = m;
}

AMateria& AMateria::operator=(const AMateria& m){
    std::cout << "AMateria assignment operator called !" << '\n';
    if (this != &m){
        type = m.type;
    }
    return (*this); 
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called !" << '\n';
}

void AMateria::use(ICharacter& target){
    std::cout << "* AMateria Default use function *" << '\n';
}

const std::string& AMateria::getType() const{
    return(type);
}

void AMateria::setType(const std::string& s){
    std::cout << "Amateria setType method called !" << '\n';
    type = s;
}
