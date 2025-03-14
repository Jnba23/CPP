/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:22:34 by asayad            #+#    #+#             */
/*   Updated: 2025/03/14 10:29:48 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point(): x(0), y(0) {
	// std::cout << "Point Default Constructor called" << '\n';
}

Point::Point(const float a, const float b): x(a), y(b){
	// std::cout << "Point Constructor called" << '\n';
}

Point::Point(const Point& p): x(p.x), y(p.y){
	// std::cout << "Point Copy Constructor called" << '\n';
}

Point& Point::operator=(const Point& a){
	if(this != &a)
		*this = a;
	return (*this);
}

Point::~Point(){
	// std::cout << "Point Destructor called" << '\n';
}

Fixed Point::get_point_coor(char coo) const{
	if (coo == 'x')
		return (this->x);
	else if (coo == 'y')
		return (this->y);
	else
	{
		std::cout << "Wrong coordinates !" << '\n';
		exit (1);
	}
	return (Fixed(0));
}