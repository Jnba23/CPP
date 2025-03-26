/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 06:59:53 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 10:19:57 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal(){
    std::cout << "Animal default Constructor called !" << '\n';
    type = "Animal";
}

Animal::Animal(const Animal& a){
    std::cout << "Animal copy constructor called !" << '\n';
    if (this != &a)
        *this = a;
}

Animal& Animal::operator=(const Animal& a){
    std::cout << "Animal assignment operator called !" << '\n';
    type = a.type;
    return (*this);
}

void Animal::setType(std::string s){
    type = s;
}

std::string Animal::getType(void) const{
    return (type);
}

void Animal::makeSound() const {
    std::cout << "????" << '\n';
}

Animal::~Animal(){
    std::cout << "Animal Destructor called !" << '\n';
}

