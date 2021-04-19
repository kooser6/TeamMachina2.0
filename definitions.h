#ifndef DEFINITIONS_H_INCLUDED
#define DEFINITIONS_H_INCLUDED

#pragma once

#include <string>
#include <iostream>

using namespace std;

typedef int Turn;
typedef int Depth;
typedef int Score;
typedef int Board[288];
typedef int Castling[8];
typedef string Enpassants[];
typedef string Moves[];

typedef struct Move {
	int from;
	int to;
	int promotion;
};

typedef struct Position {
	Turn turn;
	Board board;
	Score score;
	Castling castling;
	Enpassants enpassants;
	Moves* genMoves();
	Position move(Move move);
	Score value(Move move);
};

#endif
