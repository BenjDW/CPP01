/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:05:49 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/07 11:39:42 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string 	filename;
	std::string 	s1;
	std::string 	s2;
	std::ifstream	fd_in;
	std::ofstream	fd_out;
	std::string		buffer;
	size_t			pos = 0;
	size_t			lens1;

	if (argc != 4)
		return (std::cout << "error not enough args" << std::endl, 1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	lens1 = s1.length();
	fd_in.open(filename);
	if (!fd_in)
	{
		std::cerr << "file not found" << std::endl;
		return (1);
	}
	else
	{
		std::cerr << "file found" << std::endl;
	}
	if (s1.empty() || s2.empty())
		return (std::cerr << "error s1 or s2 is empty" << std::endl, 1);
	fd_out.open("sortie.txt");
	if (!fd_out)
	{
		std::cerr << "can't create the outputfile" << std::endl;
		return (1);
	}
	while(std::getline(fd_in, buffer))
	{
		pos = 0;
		while ((pos = buffer.find(s1, pos)) != std::string::npos)
		{
			buffer.erase(pos, lens1);
			buffer.insert(pos, s2);
			pos += s2.length();
        }
		fd_out << buffer << std::endl ;
	}
	fd_in.close();
	fd_out.close();
}