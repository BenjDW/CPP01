/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 06:52:15 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 10:05:18 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// need to allocate for reuse later
// Zombie* newZombie( std::string name );
// It creates a zombie, name it, and return it so you can use it outside of the function
// scope

Zombie* newZombie(std::string name)
{
	Zombie	*luigi = new Zombie(name);
	
	return (luigi);
}