#include "Zombie.h"

int main()
{
	Zombie	*horde = zombieHorde(5, "HKLC");
	for (size_t i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
}