#include "stack.cpp"

class Pokemon {
private:
	int hp;
	string name;
public:
	Pokemon() : hp(1), name("무명") {

	}
	Pokemon(int hp, string name) : hp(hp), name(name) {
		cout << name << " 포켓몬 생성됨\n";
	}
};
//class Pikachu : public Pokemon {
//public:
//	Pikachu() {};
//	void attack() { "전기공격!\n"; };
//};
//class Squirtle : public Pokemon {
//public:
//	Squirtle() {};
//	void attack() { "물대포공격!\n"; };
//};

int main()
{
	Pokemon pikachu;
	Pokemon squirtle(100, "꼬부기");

  Stack<int> stacki(10);
  Stack<Pokemon> stackPokemon(3);
  Stack<double> stackd(3);
  stackPokemon.push(pikachu);
  stackPokemon.push(squirtle);

  stacki.push(5);
  stacki.push(6);
  stacki.push(7);
  stacki.push(3);
  cout << stacki.pop() << endl;
  cout << stacki.pop() << endl;
  cout << stackd.pop() << endl;  // stack is empty!
  
  return 0;
}