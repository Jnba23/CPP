/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 07:28:31 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 10:36:06 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog(){
    std::cout << "Dog Constructor called !" << '\n';
    Animal::setType("Dog");
}

Dog::Dog(const Dog& d): Animal(){
    std::cout << "Dog Copy Constructor called !" << '\n';
    if (this != &d)
        *this = d;
}

Dog& Dog::operator=(const Dog& d){
    std::cout << "Dog assignment operator called !" << '\n';
    Animal::operator=(d);
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Ouuf Ouuf" << '\n';
}

Dog::~Dog(){
    std::cout << "Dog Destructor Called !" << '\n';
}