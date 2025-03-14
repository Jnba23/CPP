/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:51:27 by asayad            #+#    #+#             */
/*   Updated: 2025/03/12 12:27:14 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::nb_fraction_bits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << '\n';
	fp_nbr_value = 0;
}

Fixed::Fixed(const int a){
	std::cout << "Int constructor called" << '\n';
	fp_nbr_value = a * (1 << nb_fraction_bits);
}

Fixed::Fixed(const float a){
	std::cout << "Float constructor called" << '\n';
	fp_nbr_value = roundf(a * (1 << nb_fraction_bits));
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << '\n';
	*this = a;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << '\n';
}

int Fixed::getRawBits(void) const{
	return (fp_nbr_value);
}

void Fixed::setRawBits(const int i){
	fp_nbr_value = i;
}

float Fixed::toFloat(void) const{
	return (float(fp_nbr_value) / (1 << nb_fraction_bits));
}

int	Fixed::toInt(void) const{
	return (fp_nbr_value / (1 << nb_fraction_bits));
}

Fixed& Fixed::operator=(const Fixed& a){
	std::cout << "Copy assignment operator called" << "\n";
	if (this != &a)
		fp_nbr_value = a.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fp){
	out << fp.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed& a){
	if (fp_nbr_value > a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& a){
	if (fp_nbr_value < a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& a){
	if (fp_nbr_value >= a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& a){
	if (fp_nbr_value <= a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& a){
	if (fp_nbr_value == a.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& a){
	if (fp_nbr_value != a.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& a){
	Fixed c(*this);
	c.fp_nbr_value += a.getRawBits();
	return (c);
}

Fixed Fixed::operator-(const Fixed& a){
	Fixed c;
	c.setRawBits(fp_nbr_value - a.getRawBits());
	return (c);
}

Fixed Fixed::operator*(const Fixed& a){
	Fixed c(*this);
	c.fp_nbr_value *= (a.getRawBits() / (1 << nb_fraction_bits));
	return (c);
}

Fixed Fixed::operator/(const Fixed& a){
	Fixed c(*this);
	c.fp_nbr_value = (a.getRawBits() * (1 << nb_fraction_bits));
	return (c);
}

Fixed& Fixed::operator++(){ //pre-increment
	fp_nbr_value += 1;
	return (*this);
}

const Fixed Fixed::operator++(int){ //post-increment
	Fixed tmp(*this);
	fp_nbr_value += 1;
	return (tmp);
}

Fixed& Fixed::operator--(){
	fp_nbr_value -= 1;
	return (*this);
}

const Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	fp_nbr_value -= 1;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}