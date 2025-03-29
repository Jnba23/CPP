/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 07:18:02 by asayad            #+#    #+#             */
/*   Updated: 2025/03/29 07:43:37 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <AMateria.hpp>

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure& c);
        Cure& operator=(const Cure& c);
        ~Cure();
        void use(ICharacter& target);
        Amateria* clone() const;
};

#endif