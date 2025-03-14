/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:22:39 by asayad            #+#    #+#             */
/*   Updated: 2025/03/14 03:04:39 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float ab, bc, ca;
	
	ab = cross_product(a, b);
	bc = cross_product(b, c);
	ca = cross_product(c, a);
}

float cross_product(Point const p1, Point const p2){
	
}