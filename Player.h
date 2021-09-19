#pragma once

class Player {
private:
  int points;
  int cash;
  bool bankrot;
  struct pos {
    int x,y;
  }
  int fieldCount;
public:
  Player();
  bool buy(int*& money);
  bool ifBankrot(int*& money, bool*& bankrot);
  int getPos();
  int pointCount(int*& points);
}
