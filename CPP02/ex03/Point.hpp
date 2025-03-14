/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:22:37 by asayad            #+#    #+#             */
/*   Updated: 2025/03/14 08:18:11 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>
#include <Fixed.hpp>

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point& p);
		Point& operator=(const Point& a);
		~Point();
		Fixed get_point_coor(char coo) const;
	};
	bool	bsp(Point const a, Point const b, Point const c, Point const point);
	float	cross_product(Point const p1, Point const p2, Point const point);

#endif