/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 21:15:19 by asayad            #+#    #+#             */
/*   Updated: 2025/03/29 07:43:28 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include <AMateria.hpp>

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& i);
        Ice& operator=(const Ice& i);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif