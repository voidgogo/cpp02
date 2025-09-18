#pragma once
#include "pokemon.h"

class Pikachu : public Pokemon  // is-a
{
public:
	Pikachu();
	~Pikachu();
	void attack() const;
};