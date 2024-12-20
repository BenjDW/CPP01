/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 06:54:00 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 10:05:02 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// is better to not allocate this zombie because is annunce himself
// so no need to reuse it
// void randomChump( std::string name );
// It creates a zombie, name it, and the zombie announces itself.


void	randomChump(std::string name)
{
	Zombie	luigi(name);

	luigi.announce();
	// std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}