#pragma once
#include "pokemon.h"

class Squirtle : public Pokemon  // is-a
{
public:
	Squirtle();
	~Squirtle();
	void attack() const;
};