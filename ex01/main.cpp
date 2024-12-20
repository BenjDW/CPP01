/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:35:11 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 13:34:48 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

int	main()
{
	int	N = 5;
	Zombie*	horde = zombieHorde(N, "Brr is Yoshi");// = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
        horde[i].announce();
    }
	delete[] horde;
}