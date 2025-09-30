#include "Board.h"
#include "Player.h"

int main() {
	Player p1("Nhat", 'X');
	Player p2("Bich", 'O');

	Board board;
	board.print();

	return 0;
}