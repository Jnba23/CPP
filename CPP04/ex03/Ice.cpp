/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 21:15:02 by asayad            #+#    #+#             */
/*   Updated: 2025/03/29 07:16:59 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice(){
    std::cout << "Ice Default constructor called !" << '\n';
    setType("ice");
}

Ice::Ice(const Ice& i){
    std::cout << "Ice Copy constructor called !" << '\n';
    *this = i;
}

Ice& Ice::operator=(const Ice& i){
    std::cout << "Ice assignment operator called !" << '\n';
    if (this != &i)
        type = i.type;
    return (*this);
}

Ice::~Ice(){
    std::cout << "Ice Destructor called !" << '\n';
}

AMateria* Ice::clone() const{
    std::cout << "Ice clone called !" << '\n';
    Materia *n_m = new Ice();
    return (n_m);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << '\n';
}