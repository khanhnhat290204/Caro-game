#include "Board.h"

Board::Board() {
	minX = minY = -2;
	maxX = maxY = 2;
}

void Board::print() const {
	for (int i = minX; i < maxX; i++) {
		for (int j = minY; j < maxY; j++) {
			auto it = grid.find({i,j});
			if (it != grid.end())
				std::cout << it->second << " ";
			else
				std::cout << ".";
		}
		std::cout << "\n";
	}
}