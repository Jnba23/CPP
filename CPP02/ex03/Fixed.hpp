/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:40:59 by asayad            #+#    #+#             */
/*   Updated: 2025/03/12 11:07:04 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include<iostream>
#include<cmath>

class Fixed{
	private:
		int	fp_nbr_value;
		static const int nb_fraction_bits;
	public:
		Fixed();
		Fixed(const int a);
		Fixed(const float a);
		Fixed(const Fixed& nb);
		Fixed& operator=(const Fixed& nb);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(const int i);
		float toFloat(void) const;
		int	toInt(void) const;
		bool	operator>(const Fixed& a);
		bool	operator>=(const Fixed& a);
		bool	operator<(const Fixed& a);
		bool	operator<=(const Fixed& a);
		bool	operator==(const Fixed& a);
		bool	operator!=(const Fixed& a);
		Fixed	operator+(const Fixed& a);
		Fixed	operator-(const Fixed& a);
		Fixed	operator*(const Fixed& a);
		Fixed	operator/(const Fixed& a);
		Fixed&	operator++();
		const Fixed	operator++(int);
		Fixed&	operator--();
		const Fixed	operator--(int);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};
std::ostream& operator<<(std::ostream& out, const Fixed& fp);
#endif