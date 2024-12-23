/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:17:46 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/23 13:50:28 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"
// Now, create two classes: HumanA and HumanB. They both have a Weapon and a
// name. They also have a member function attack() 

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		void 	setWeapon(Weapon *weapon);
		std::string	name;
	private:
		Weapon	*weapon;
};

#endif