#include "pikachu.h"
#include "squirtle.h"

int main()
{
	Pokemon* pokemons[4];

	pokemons[0] = new Squirtle();
	pokemons[1] = new Pikachu();
	pokemons[2] = new Pokemon();
	pokemons[3] = new Pikachu();

	for (int i = 0; i < 4; i++) {
		pokemons[i]->attack();
	}

	for (int i = 0; i < 4; i++) {
		delete pokemons[i];
	}

	//Pokemon pokemon;	
	//pokemon.attack();

	//Pikachu pikachu;
	//pikachu.attack();

	//Pokemon* pokemon;
	//pokemon = new Pokemon();
	//pokemon->attack();
	//delete pokemon;

	//pokemon = new Pikachu();
	//pokemon->attack();
	//delete pokemon;
	return 0;
}