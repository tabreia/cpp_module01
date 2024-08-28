/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:46:11 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/05 17:46:11 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	Weapon		*weapon;
	std::string	name;
public:
	HumanB();
	HumanB(const std::string &name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack(void);

};



#endif