/*

This houses the meat and potatoes of the engine

0 : empty

white
1 : pawn
2 : knight
3 : bishop
4 : rook
5 : queen
6 : king

black
9 : pawn
10 : knight
11 : bishop
12 : rook
13 : queen
14 : king

black
56 57 58 59 60 61 62 63
...
 0  1  2  3  4  5  6  7
white

*/

#include "Chess.cpp"
#include <iostream>

Chess::Chess()
{
  m_whiteTurn = false;
  m_turnNum = 0;

  //rank 0
  m_board[0] = 4;
  m_board[1] = 2;
  m_board[2] = 3;
  m_board[3] = 5;
  m_board[4] = 6;
  m_board[5] = 3;
  m_board[6] = 2;
  m_board[7] = 4;

  //rank 1
  m_board[8] = 1;
  m_board[9] = 1;
  m_board[10] = 1;
  m_board[11] = 1;
  m_board[12] = 1;
  m_board[13] = 1;
  m_board[14] = 1;
  m_board[15] = 1;

  //rank 2 - 5
  for (int i = 16; i < 48; i++)
    m_board[i] = 0;

  //rank 6
  m_board[48] = 9;
  m_board[49] = 9;
  m_board[50] = 9;
  m_board[51] = 9;
  m_board[52] = 9;
  m_board[53] = 9;
  m_board[54] = 9;
  m_board[55] = 9;

  //rank 7
  m_board[56] = 12;
  m_board[57] = 10;
  m_board[58] = 11;
  m_board[59] = 13;
  m_board[60] = 14;
  m_board[61] = 11;
  m_board[62] = 10;
  m_board[63] = 12;



}

void Chess::userMove()
{
  std::cout << "Please enter move." << std::endl;
  std::cin >>
}
