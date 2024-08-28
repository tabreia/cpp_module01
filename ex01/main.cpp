/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <@student.42porto.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 05:37:39 by tabreia-          #+#    #+#             */
/*   Updated: 2023/11/22 05:41:15 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int i, std::string name);

int main(void)
{
    Zombie *horde = zombieHorde(10, "Marvin");

    for (int i = 0; i < 10; i++)
        horde[i].announce();
    
    delete [] horde;
}