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
	int getHp() const {
		return hp;
	}
	string getName() const {
		return name;
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

ostream& operator<<(ostream& o, Pokemon& right) {
	o << right.getName() << "(hp: " << right.getHp() << ")\n";
	return o;
}

int main()
{
	typedef Stack<Pokemon> PokemonStack;
	typedef Stack<int> iStack;

	Pokemon pikachu;
	Pokemon squirtle(100, "꼬부기");

	iStack stacki(10);
	PokemonStack stackp(3);
  Stack<double> stackd(3);
  stackp.push(pikachu);
  stackp.push(squirtle);

  stacki.push(5);
  stacki.push(6);
  stacki.push(7);
  stacki.push(3);
  cout << stacki.pop() << endl;
  cout << stacki.pop() << endl;
  //cout << stackd.pop() << endl;  // stack is empty!
  stackp.pop();
  stackp.pop();
  //stackp.pop();

  cout << pikachu;
  cout << squirtle;
  return 0;
}