#include "Board.hpp"
#include "Player.hpp"

#ifndef GAME_H
#define GAME_H

enum state {P1_WIN, P2_WIN, UNFINISHED};

class Game
{
	private: 
		Player p1;
		Board p1Board;
		Player p2;
		Board p2Board;
	public:		
		//bool playGame(Player firstPlayer);
		//void startGame();
		void initializeBoard(Board b);
		void initializeBoardAuto(Board b);
		state gameCondition();
		//void printGameState(Player p);
		bool makeNextMove(Board b, int x, int y);
		//bool makeNextMoveAuto(Board b);


};


#endif 