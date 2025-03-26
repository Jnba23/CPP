/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 06:57:24 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 10:55:10 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <Brain.hpp>

class Animal {
    private:
        std::string type;
    public:
        Animal();
        Animal(const Animal& a);
        Animal& operator=(const Animal& a);
        void setType(std::string s);
        std::string getType(void) const;
        virtual void makeSound() const;
        virtual ~Animal();
};
#endif