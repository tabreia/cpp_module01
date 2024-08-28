#include "Zombie.hpp"

Zombie* zombieHorde(int i, std::string name)
{
	Zombie *horde = new Zombie[i];

	for (int k = 0; k < i; k++)
		horde[k].setName(name);
		
	return (horde);
}