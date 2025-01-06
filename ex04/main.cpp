/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:05:49 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/06 13:42:49 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.
// It will open the file <filename> and copies its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.
// Of course, handle unexpected inputs and errors. You have to create and turn in your
// own tests to ensure your program works as expected.

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

int	main(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	fd_in(filename);
	std::ofstream	fd_out;
	std::string		buffer;

	if (!fd_in)
	{
		std::cout << "file not found" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "file found" << std::endl;
	}
	while(std::getline(fd_in, buffer))
	{
		
	}
}