#include "squirtle.h"

Squirtle::Squirtle()
{
	cout << "Default(Squirtle) constructor\n";
}

Squirtle::~Squirtle()
{
	cout << "Derived class (Squirtle) destructor\n";
}

void Squirtle::attack() const {
	cout << "Water Attack~~" << endl;
}