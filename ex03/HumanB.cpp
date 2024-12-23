/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:48:27 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/23 13:59:53 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void	HumanB::attack() const
{
	if (weapon)
	{
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
	else
	{
		if (time(NULL) % 2 == 0)
		{
            std::cout << name << " attacks with their rocket punch" << std::endl;
        } 
		else 
		{
            std::cout << name << " attacks with their head" << std::endl;
        }
	}
}