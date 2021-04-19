#ifndef DEFINITIONS_H_INCLUDED
#define DEFINITIONS_H_INCLUDED

#pragma once

#include <string>
#include <vector>
#include <sstream>
#include <utility>
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
  Position load(string fen);
};

vector<string> explode(string const& text, char seperator)
{
  vector<string> result;
  istringstream iss(text);
  for (string token; getline(iss, token, seperator); )
  {
    result.push_back(move(token));
  };
  return result;
};

#endif
