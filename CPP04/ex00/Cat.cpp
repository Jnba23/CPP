/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 07:02:35 by asayad            #+#    #+#             */
/*   Updated: 2025/03/25 10:22:53 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(){
    std::cout << "Cat default Constructor called !" << '\n';
    Animal::setType("Cat");
}

Cat::Cat(const Cat& c): Animal(c){
    std::cout << "Cat Copy Constructor called !" << '\n';
    if (this != &c)
        *this = c;
}

Cat& Cat::operator=(const Cat& c){
    std::cout << "Cat assignment operator called !" << '\n';
    Animal::operator=(c);
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Miaaaoo" << '\n';
}

Cat::~Cat(){
    std::cout << "Cat Destructor called !" << '\n';
}