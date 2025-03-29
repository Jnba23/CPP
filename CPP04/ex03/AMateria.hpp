/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:46:44 by asayad            #+#    #+#             */
/*   Updated: 2025/03/29 02:28:42 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria
{
    protected:
        std::string type;
    public:
        Amateria();
        AMateria(const std::string & type);
        AMateria(const Amateria& m);
        AMateria& operator=(const Amateria& m);
        virtual ~Amateria();
        std::string const & getType() const; //Returns the materia type
        void setType(const std::string& s);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif