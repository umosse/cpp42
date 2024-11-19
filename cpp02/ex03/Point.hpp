/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:29:46 by umosse            #+#    #+#             */
/*   Updated: 2024/11/19 18:16:21 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float cfloat1, const float cfloat2);
		Point(const Point &other);
		Point&	operator=(const Point &other);
		~Point();
		const Fixed		&getPointX() const;
		const Fixed		&getPointY() const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point);