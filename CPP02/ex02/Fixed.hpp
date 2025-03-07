/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:40:59 by asayad            #+#    #+#             */
/*   Updated: 2025/03/07 09:16:32 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include<iostream>

class Fixed{
	private:
		int	fp_nb_value;
		static const int nb_fraction_bits;
	public:
		Fixed();
		Fixed(const int a);
		Fixed(const flaot a);
		Fixed(Fixed& nb);
		Fixed& operator=(const Fixed& nb);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const i);
		float toFlaot(void) const;
		int	toInt(void) const;
		friend std::ostream& operator<<(std::ostream& out, const Fixed& fp);
		bool	operator>(const Fixed& a);
		bool	operator>=(const Fixed& a);
		bool	operator<(const Fixed& a);
		bool	operator<=(const Fixed& a);
		bool	operator==(const Fixed& a);
		bool	operator!=(const Fixed& a);
		
}
#endif