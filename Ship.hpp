/******************************************************************************
** Author: Christina Brasco
** Date created: 3/11/2018
** Last modified date: 3/11/2018
** Description: header file for the Ship class
******************************************************************************/


#ifndef SHIP_H
#define SHIP_H

class Ship
{
	private: 
		char* shipSquares;
		int shipSize;
		int xpos, ypos; //limits of ship
		bool isSunk;
		bool isHorizontal;


	public:	
		Ship(int size, int x, int y, bool h);//constructor
		Ship(const Ship &oldShip); //copy constructor
		~Ship(); //destructor
		int getSize() const;
		int getX() const;
		int getY() const;
		bool isShipSunk() const;
		bool isShipHorizontal() const;
		void printShip();
		void recordHit(int hitLocX, int hitLocY);
};

#endif