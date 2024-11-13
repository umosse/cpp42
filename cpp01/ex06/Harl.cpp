/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:45:03 by umosse            #+#    #+#             */
/*   Updated: 2024/11/13 17:09:29 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_complaints[0].Complaint = &Harl::debug;
	_complaints[1].Complaint = &Harl::info;
	_complaints[2].Complaint = &Harl::warning;
	_complaints[3].Complaint = &Harl::error;
	_complaints[0].complaint = "DEBUG";
	_complaints[1].complaint = "INFO";
	_complaints[2].complaint = "WARNING";
	_complaints[3].complaint = "ERROR";
	std::cout << "Harl constructor has been called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor has been called" << std::endl;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I will rid our country of these bugs !" << std::endl;
	std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "You are fake news !" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I'm warning you : I'm building that wall !" << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "The dems cheated the election !" << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	for (; i < 4; i++)
	{
		if (level == _complaints[i].complaint)
			break ;
	}
	switch (i)
	{
		case 0: debug();
		case 1: info();
		case 2: warning();
		case 3: error(); break;
		default: std::cerr << "Make America great again !" << std::endl; break;
	}
}
