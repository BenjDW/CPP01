/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:34:22 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 13:43:14 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N];
    std::string named;

	std::cout << "Voulez vous set vos propre nom ? :";
	std::getline(std::cin, named);
	if (named.compare("no") == 0)
	{
		for(int i = 0; i < N; i++)
			horde[i].setname(name);
	}
	else
	{
		for(int i = 0; i < N; i++)
		{
			std::cout << "Entrez le nom du zombie " << i + 1 << " : ";
    		std::getline(std::cin, named);
			horde[i].setname(named);
		}
	}
	return (horde);
}