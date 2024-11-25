/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:57:52 by umosse            #+#    #+#             */
/*   Updated: 2024/11/13 16:17:02 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_complaints[0].Complaint = &Harl::debug;
	_complaints[1].Complaint = &Harl::info;
	_complaints[2].Complaint = &Harl::warning;
	_complaints[3].Complaint = &Harl::error;
	_complaints[0].complaint = "debug";
	_complaints[1].complaint = "info";
	_complaints[2].complaint = "warning";
	_complaints[3].complaint = "error";
	std::cout << "Harl constructor has been called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor has been called" << std::endl;
}

void	Harl::debug()
{
	std::cout << "I will rid our country of these bugs !" << std::endl;
}

void	Harl::info()
{
	std::cout << "You are fake news !" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I'm warning you : I'm building that wall !" << std::endl;
}

void	Harl::error()
{
	std::cout << "The dems cheated the election !" << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == _complaints[i].complaint)
		{
			(this->*_complaints[i].Complaint)();
			return ;
		}
	}
	std::cerr << "Make America great again !" << std::endl;
}
