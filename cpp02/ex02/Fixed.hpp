/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:08 by umosse            #+#    #+#             */
/*   Updated: 2024/11/19 15:57:00 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int cint);
		Fixed(const float cfloat);
		Fixed(const Fixed &other);
		~Fixed();
		Fixed&	operator=(const Fixed &other);
		bool	operator<(const Fixed &other) const;
		bool	operator>(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		static Fixed	&min(Fixed &n1, Fixed &n2);
		static const Fixed	&min(const Fixed &n1, const Fixed &n2);
		static Fixed	&max(Fixed &n1, Fixed &n2);
		static const Fixed	&max(const Fixed &n1, const Fixed &n2);
		int		getRawBits();
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
	private:
		int					_value;
		static const int	_bits = 8;
};

	std::ostream &operator<<(std::ostream &oss, const Fixed &fixed);

#endif