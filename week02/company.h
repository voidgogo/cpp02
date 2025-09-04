#pragma once
#include <iostream>
using namespace std;

class Company {
private:
	string name;
	string telephone;
public:
	Company(string name, string telephone);
	void print() const;
};