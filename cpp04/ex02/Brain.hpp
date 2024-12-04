/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:43:04 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 17:43:06 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain{
	public:
		Brain();
		Brain(std::string _name);
		Brain(const Brain &other);
		~Brain();
		Brain&	operator=(const Brain &other);
		void	setIdea(const std::string idea);
		void	printIdea()const;
	private:
		std::string	_ideas[100];
};