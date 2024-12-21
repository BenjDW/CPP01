/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:47:49 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/21 00:02:41 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	const std::string	&ref = str;

	std::cout << "affiche les addresses de str :" << std::endl;
	std::cout << "ptr de str = " << &ptr << std::endl;
	std::cout << "ref de str = " << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "affiche la valeur de str :" << std::endl;
	std::cout << "ptr->str = " << (*ptr) << std::endl;
	std::cout << "ref->str = " << ref << std::endl;

}