/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:05:22 by asayad            #+#    #+#             */
/*   Updated: 2025/03/03 02:47:52 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
class Fixed{
	private:
		int	fp_nbr_value;
		static const int nb_fraction_bits = 8;
	public:
		Fixed(){
			std::cout << "Default constructor called !" << '\n';
			fp_nbr_value = 0;
		}
		Fixed(const Fixed& a){
			std::cout << "Copy constructor called !" << '\n';
			*this = a;
		}
		Fixed& operator=(const Fixed& a);
		~Fixed(){
			std::cout << "Destructor called !" << '\n';
		}
		int	getRawBits(void) const;
		void	setRawBits(int i);
		
};
#endif