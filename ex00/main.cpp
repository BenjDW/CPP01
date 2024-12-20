/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 07:46:21 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 10:27:39 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// call the 2 alternative function and delete the alloc
#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main()
{
	Zombie*	alloc;

	alloc = newZombie("mario");
	alloc->announce();
	delete(alloc);
	randomChump("luigi");
}