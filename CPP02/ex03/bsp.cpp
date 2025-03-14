/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:22:39 by asayad            #+#    #+#             */
/*   Updated: 2025/03/14 10:34:52 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float ab, bc, ca, area;
	
	area = cross_product(a, b, c);
	if (area < powf(2, -23))
		return (0);
	ab = cross_product(a, b, point);
	bc = cross_product(b, c, point);
	ca = cross_product(c, a, point);
	if (ab < 0 && bc < 0 && ca < 0)
		return (1);
	if (ab > 0 && bc > 0 && ca > 0)
		return (1);
	return (0);
}

float cross_product(Point const p1, Point const p2, Point const point){
	float p1_x = p1.get_point_coor('x').toFloat();
	float p1_y = p1.get_point_coor('y').toFloat();
	float p2_x = p2.get_point_coor('x').toFloat();
	float p2_y = p2.get_point_coor('y').toFloat();
	float point_x = point.get_point_coor('x').toFloat();
	float point_y = point.get_point_coor('y').toFloat();

	return ((p2_x - p1_x)*(point_y - p1_y) - (point_x - p1_x)*(p2_y - p1_y));
}