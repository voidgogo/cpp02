#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	void attack() const { cout << "Attack!" << endl; }
};

class Pikachu : public Pokemon  // is-a
{
public:
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