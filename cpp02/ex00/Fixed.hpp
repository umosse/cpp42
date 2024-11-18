/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:08 by umosse            #+#    #+#             */
/*   Updated: 2024/11/18 16:12:25 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed& operator=(const Fixed &other);
		int		getRawBits();
		void	setRawBits(int const raw);
	private:
		int					_value;
		static const int	_bits = 8;
};

#endif