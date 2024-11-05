/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:47:11 by umosse            #+#    #+#             */
/*   Updated: 2024/11/05 17:43:15 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	PhoneBook	phoneBook;
	if (argc == 1)
	{
		std::cout << "Enter either ADD, SEARCH or EXIT : ";
		while (1)
		{
			std::string	input;
			std::getline(std::cin, input);
			if (input == "ADD")
				phoneBook.createContact();
			if (input == "SEARCH")
				phoneBook.getContact();
			if (input == "EXIT")
				break ;
			else
				std::cout << "Enter either ADD, SEARCH or EXIT : ";
		}
	}
	return (0);
}
