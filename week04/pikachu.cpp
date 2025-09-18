#include "pikachu.h"

Pikachu::Pikachu()
{
	cout << "Default(Pikachu) constructor\n";
}

Pikachu::~Pikachu()
{
	cout << "Derived class (Pikachu) destructor\n";
}

void Pikachu::attack() const {
	cout << "Electric Attack~" << endl;
}