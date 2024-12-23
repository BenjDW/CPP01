/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 05:18:12 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/23 13:55:24 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon	club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	HumanB Johndoe("Johndoe");
	std::cout << "HumanA :" << std::endl;
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << std::endl << "HumanB :" << std::endl;
	Johndoe.attack();
	Johndoe.setWeapon(&club);
	Johndoe.attack();
}