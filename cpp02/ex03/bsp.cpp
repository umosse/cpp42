/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:28:51 by umosse            #+#    #+#             */
/*   Updated: 2024/11/19 18:45:23 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	float	areaT = (a.getPointX().toFloat() * (b.getPointY().toFloat() - c.getPointY().toFloat()) + b.getPointX().toFloat() * (c.getPointY().toFloat() - a.getPointY().toFloat()) + c.getPointX().toFloat() * (a.getPointY().toFloat() - b.getPointY().toFloat())) / 2;
	float	areaA = (point.getPointX().toFloat() * (a.getPointY().toFloat() - b.getPointY().toFloat()) + a.getPointX().toFloat() * (b.getPointY().toFloat() - point.getPointY().toFloat()) + b.getPointX().toFloat() * (point.getPointY().toFloat() - a.getPointY().toFloat())) / 2;
	float	areaB = (point.getPointX().toFloat() * (b.getPointY().toFloat() - c.getPointY().toFloat()) + b.getPointX().toFloat() * (c.getPointY().toFloat() - point.getPointY().toFloat()) + c.getPointX().toFloat() * (point.getPointY().toFloat() - b.getPointY().toFloat())) / 2;
	float	areaC = (point.getPointX().toFloat() * (a.getPointY().toFloat() - c.getPointY().toFloat()) + a.getPointX().toFloat() * (c.getPointY().toFloat() - point.getPointY().toFloat()) + c.getPointX().toFloat() * (point.getPointY().toFloat() - a.getPointY().toFloat())) / 2;
	if (areaT < 0)
		areaT *= -1;
	if (areaA < 0)
		areaA *= -1;
	if (areaB < 0)
		areaB *= -1;
	if (areaC < 0)
		areaC *= -1;
	if (areaA == 0 || areaB == 0 || areaC == 0)
		return (false);
	return (roundf(areaT) == roundf(areaA + areaB + areaC));
}
