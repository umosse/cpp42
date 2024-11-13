/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:16:42 by umosse            #+#    #+#             */
/*   Updated: 2024/11/13 17:14:15 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::fstream	FileName;
		std::fstream	NewFileName;
		std::string		argv1 = argv[1];
		std::string		argv2 = argv[2];
		std::string		argv3 = argv[3];
		FileName.open(argv1, std::ios::in);
		if (!FileName)
			std::cerr << "Cannot open file" << std::endl;
		else
		{
			NewFileName.open(argv1 + ".replace", std::ios::out);
			if (!NewFileName)
				std::cerr << "Error creating file" << std::endl;
			else
			{
				std::cout << "File created" << std::endl;
				std::string	str;
				while (std::getline(FileName, str))
				{
					std::size_t	offset = 0;
					std::size_t	pos = 0;
					pos = str.find(argv2, offset);
					while (pos != std::string::npos)
					{
						str.erase(pos, argv2.size());
						str.insert(pos, argv3);
						offset = pos + argv3.size();
						pos = str.find(argv2, offset);
					}
					NewFileName << str;
					if (!NewFileName.eof())
						NewFileName << std::endl;
				}
				NewFileName.close();
			}
			FileName.close();
		}
	}
	return (0);
}
