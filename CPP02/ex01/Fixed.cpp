/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:06:56 by asayad            #+#    #+#             */
/*   Updated: 2025/03/03 23:25:13 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed(){
	std::cout << "Default constructor called" << '\n';
	fp_nbr_value = 0;
}

Fixed::Fixed(const int a){
	std::cout << "Float constructor called" << '\n';
	fp_nbr_value = a << 8;
} //convert a to the corresponding fp value

Fixed(const float a){
	std::cout << "Float constructor called" << '\n';
	fp_nbr_value = a << 8;
} //convert a to the corresponding fp value

Fixed::Fixed(const Fixed& a){
	std::cout << "Copy constructor called" << "\n";
	*this = a;
}

Fixed::~Fixed(){
	std::cout << "Default destructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed& a){
	std::cout << "Copy assignment operator called" << "\n";
	fp_nbr_value = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << "\n";
	return (fp_nbr_value);
}

void	setRawBits(int i){
	fp_nbr_value = i;
}

std::ostream& operator<<(std::ostream& out, const Fixed& a){
	out << a.toFloat();
	return (out);
}


