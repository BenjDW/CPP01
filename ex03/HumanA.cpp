/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 01:26:51 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/23 10:24:39 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	// this->name = name;
	// this->weapon = Weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	// <name> attacks with their <weapon type>
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}