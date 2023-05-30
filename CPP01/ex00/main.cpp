#include "Zombie.h"

int main()
{
	Zombie	*z = newZombie("Hayati");
	z->announce();
	randomChump("İso");
	delete z;
}