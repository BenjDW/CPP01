/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 06:43:48 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/20 07:46:08 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <locale>
#include <stdlib.h>

class Zombie
{
	public:
		Zombie(/* args */);
		~Zombie();
		void announce( void );
	private: /* data */
		std::string	name;
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}


#endif