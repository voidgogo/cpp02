#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon() { cout << "Default(Pokemon) constructor\n"; }
	~Pokemon() { cout << "Base class (Pokemon) destructor\n"; }
	virtual void attack() const { cout << "Attack!" << endl; }
};

class Pikachu : public Pokemon  // is-a
{
public:
	Pikachu() { cout << "Default(Pikachu) constructor\n"; }
	~Pikachu() { cout << "Derived class (Pikachu) destructor"; }
	void attack() const { cout << "Electric Attack~" << endl; }
};
int main()
{
	Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}