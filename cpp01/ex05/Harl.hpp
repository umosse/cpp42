/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:58:03 by umosse            #+#    #+#             */
/*   Updated: 2024/11/13 15:47:40 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

# include <iostream>


class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		struct	Complaint {
			void		(Harl::*Complaint)(void);
			std::string	complaint;
		};
		Complaint	_complaints[4];
};

#endif