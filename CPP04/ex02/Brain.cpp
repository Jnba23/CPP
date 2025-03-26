/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 09:14:58 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 12:12:48 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain(){
    std::cout << "Brain Constructor called !" << '\n';
    for (int i = 0; i < 100; i++){
        ideas[i] = "Random";
    }
}

Brain::Brain(std::string ids[], size_t size){
    if (size > 0){
        for (size_t i = 0; i < size; i++)
            ideas[i] = ids[i];
        for (size_t i = size; i < 100; i++)
            ideas[i] = "Random";
    }
    else{
        for (int i = 0; i < 100; i++)
            ideas[i] = "Random";
    }
}

Brain::Brain(const Brain& b){
    *this = b;
}

Brain& Brain::operator=(const Brain& b){
    std::cout << "Brain Assignment operator called !" << '\n';
    if (this != &b)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = b.ideas[i];
    }
    return (*this);
}

Brain::~Brain(){
    std::cout << "Brain Destructor called !" << '\n';
}