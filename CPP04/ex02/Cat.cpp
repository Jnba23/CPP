/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 07:02:35 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 14:14:02 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat(){
    std::cout << "Cat default Constructor called !" << '\n';
    Animal::setType("Cat");
    CatB = new Brain();
}

Cat::Cat(const Cat& c): Animal(c){
    std::cout << "Cat Copy Constructor called !" << '\n';
    *this = c;
}

Cat& Cat::operator=(const Cat& c){
    std::cout << "Cat assignment operator called !" << '\n';
    if (this != &c)
    {
        Animal::operator=(c);
        delete CatB;
        CatB = new Brain(*c.CatB);
    }
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Miaaaoo" << '\n';
}

Cat::~Cat(){
    std::cout << "Cat Destructor called !" << '\n';
    delete (CatB);
}