#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon();
	virtual ~Pokemon();
	virtual void attack() const;
};
