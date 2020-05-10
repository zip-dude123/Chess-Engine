int main()
{
  Chess chess_obj(0);
  while (!chess_obj.gameOver())
  {
    chess_obj.whiteMove();
    chess_obj.blackMove();
  }
  return 0;
}
