/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 01:59:47 by asayad            #+#    #+#             */
/*   Updated: 2025/03/03 02:48:54 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

void	Fixed::setRawBits(int i){
	this->fp_nbr_value = i;
}

Fixed& Fixed::operator=(const Fixed& a){
	std::cout << "Copy assignment operator called" << "\n";
	this->fp_nbr_value = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << "\n";
	return(fp_nbr_value);
}
