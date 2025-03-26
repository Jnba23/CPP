/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 07:04:43 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 10:39:35 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <Animal.hpp>

class Dog : public Animal{
    private:
        Brain* DogB;
    public:
        Dog();
        Dog(const Dog& d);
        Dog& operator=(const Dog& d);
        ~Dog();
        void makeSound() const;
};

#endif