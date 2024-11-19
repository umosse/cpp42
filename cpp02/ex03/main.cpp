/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:28:15 by umosse            #+#    #+#             */
/*   Updated: 2024/11/19 18:46:13 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// int main()
// {
// 	Point	a(1, 1);
// 	Point	b(1, 5);
// 	Point	c(5, 1);
// 	Point	point(1, 2);
// 	if (bsp(a, b, c, point))
// 		std::cout << "The point is inside the triangle" << std::endl;
// 	else
// 		std::cout << "The point is not inside the triangle" << std::endl;
// 	return (0);
// }

int main() {
    {
        Point a(0, 0);
        Point b(20, 0);
        Point c(10, 30);
        Point to_check(10, 0);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(0, 0);
        Point b(20, 0);
        Point c(10, 30);
        Point to_check(10, 30);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(10.2, 15.6);
        Point b(20.55, 15.6);
        Point c(15.78, 42.42);
        Point to_check(13.8, 15.6);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(10.2, 15.6);
        Point b(20.55, 15.6);
        Point c(15.78, 42.42);
        Point to_check(15.78, 42.42);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(10.2, 15.6);
        Point b(20.55, 15.6);
        Point c(15.78, 42.42);
        Point to_check(15.78, 41.42);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(10.2, 15.6);
        Point b(20.55, 15.6);
        Point c(15.78, 42.42);
        Point to_check(15.78, 39.42);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(10.2, 15.6);
        Point b(20.55, 15.6);
        Point c(15.78, 42.42);
        Point to_check(12.28, 16.6);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    {
        Point a(10.2, 15.6);
        Point b(20.55, 15.6);
        Point c(15.78, 42.42);
        Point to_check(19.54, 16.7);

        if (bsp(a, b, c, to_check))
            std::cout << "Inside" << std::endl;
        else
            std::cout << "Not Inside" << std::endl;
    }
    return 0;
}