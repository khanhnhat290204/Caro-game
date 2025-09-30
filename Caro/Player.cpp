#include "Player.h"

Player::Player(std::string n, char s) :name(n), symbol(s){}

std::string Player::getName() const {
	return name;
}

char Player::getSymbol() const {
	return symbol;
}