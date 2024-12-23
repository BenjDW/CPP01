/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:09:20 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/23 13:58:41 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as parameter.

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iomanip>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const &getType();
		void setType(std::string newtype);
	private:
		std::string	type;
};

#endif