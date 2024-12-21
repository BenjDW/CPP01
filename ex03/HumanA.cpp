/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 01:26:51 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/21 05:15:45 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	// <name> attacks with their <weapon type>
	std::cout << this->name << "attacks with their" << weapon.getType() << std::endl;
}