/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:56:13 by asayad            #+#    #+#             */
/*   Updated: 2025/03/11 07:12:47 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fp_nbr_value;
        static const int nb_fraction_bits;
    public:
        Fixed();
        Fixed(const int a); //convert a to the corresponding fp value
        Fixed(const float a); //convert a to the corresponding fp value
        Fixed(const Fixed& a);
        ~Fixed();
        Fixed& operator=(const Fixed& a);
        int getRawBits() const;
        void setRawBits(int const a);
        float toFloat(void) const; //convert fp_nbr_value to a floating point value
        int   toInt(void) const; //convert fp_nbr_value to an int value
};
std::ostream& operator<<(std::ostream& out,  const Fixed& fp);
#endif