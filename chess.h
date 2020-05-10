#ifndef CHESS_H
#define CHESS_H

#include <vector>

class Chess
{
  public:
    Chess();
    bool gameOver();
    void aiMove();
    void userMove();

  private:
    //game states
    uint32_t m_turnNum;
    bool m_whiteTurn;
    uint8_t m_board[64];

};

#endif
