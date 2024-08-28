/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:04:18 by tabreia-          #+#    #+#             */
/*   Updated: 2023/07/14 17:04:18 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

int main(void)
{
	Zombie *zombieExample = newZombie("Marvin");
	zombieExample->announce();
	randomChump("Foo");
	delete zombieExample;
}