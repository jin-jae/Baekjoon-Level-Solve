#include <iostream>

int	main(void) {
	int	king, queen, rook, bishop, knight, pawn;
	std::cin >> king >> queen >> rook >> bishop >> knight >> pawn;
	
	std::cout << 1 - king << ' ' << 1 - queen << ' ' << 2 - rook << ' ';
	std::cout << 2 - bishop << ' ' << 2 - knight << ' ' << 8 - pawn;
	return (0);
}
