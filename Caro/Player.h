#pragma once
#include <string>

class Player {
private:
	std::string name;
	char symbol;
public:
	Player(std::string n, char s);
	std::string getName() const;
	char getSymbol() const;
};