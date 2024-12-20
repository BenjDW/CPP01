/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:34:15 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 13:39:20 by bde-wits         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void announce( void );
		void setname(std::string name);
	private: /* data */
		std::string	name;
};
Zombie* zombieHorde( int N, std::string name );

// Zombie::Zombie()
// {
// 	// this->name = named;
// }

// Zombie::~Zombie()
// {
// }

#endif