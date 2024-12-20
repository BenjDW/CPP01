/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 06:43:48 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 10:05:08 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <locale>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <cstdlib>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void announce( void );
	private: /* data */
		std::string	name;
};

Zombie::Zombie(std::string name)
{
	this->name = "luigi";
}

Zombie::~Zombie()
{
}
void	randomChump(std::string name);
Zombie* newZombie(std::string name );

#endif