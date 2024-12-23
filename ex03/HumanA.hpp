/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:17:28 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/23 10:21:06 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

// Now, create two classes: HumanA and HumanB. They both have a Weapon and a
// name. They also have a member function attack() 

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack() const;
		std::string	name;
	private:
		Weapon	&weapon;
};

// HumanA::HumanA(std::string name, Weapon &Weapon) : name(name), weapon(weapon)
// {
// 	// this->name = name;
// 	// this->weapon = Weapon;
// }

// HumanA::~HumanA()
// {
// }


#endif