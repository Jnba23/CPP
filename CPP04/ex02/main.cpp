/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:50:31 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 14:11:28 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <Brain.hpp>
int main(){
    Animal *an[6];
    
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            an[i] = new Cat();
        else
            an[i] = new Dog();
    }
    for (int i = 0; i < 6; i++)
        an[i]->makeSound();
    for (int i = 0; i < 6; i++){
        delete an[i];
    }
}