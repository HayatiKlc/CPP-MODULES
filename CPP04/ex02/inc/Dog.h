#ifndef DOG_H
# define DOG_H

# include "Animal.h"
# include "Brain.h"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &cpy);
	Dog &operator=(const Dog &src);
	void makeSound(void) const;
	~Dog();
};

#endif