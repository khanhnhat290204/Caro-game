#pragma once
#include <map>
#include <utility>
#include<iostream>

class Board {
private:
	std::map <std::pair<int, int>, char> grid;
	int minX, minY, maxX, maxY;
public:
	Board();
	void print() const;
};