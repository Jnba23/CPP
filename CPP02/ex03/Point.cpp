/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:22:34 by asayad            #+#    #+#             */
/*   Updated: 2025/03/12 12:24:06 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point(): x(0), y(0) {
	std::cout << "Default Constructor called" << '\n';
}

Point::Point(const float a, const float b): x(a), y(b){
	std::cout << "Constructor called" << '\n';
}

Point::Point(Point& p): x(p.x), y(p.y){
	std::cout << "Copy Constructor called" << '\n';
}

Point& Point::operator=(const Point& a){
	if(this != &a)
		*this = a;
	return (*this);
}

Point::~Point(){
	std::cout << "Destructor called" << '\n';
}