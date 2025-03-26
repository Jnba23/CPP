/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 07:02:35 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 09:39:03 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal{
    private:
        Brain* CatB;
    public:
        Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        void makeSound() const;
        ~Cat();
        
};

#endif