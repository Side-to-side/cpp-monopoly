#pragma once

class Player {
private:
  int points;
  int cash;
  bool bankrot;
  int pos;
  int fieldCount;
public:
  Player();
  Player(int*& money);
  ~Player();
  bool buy(int*& money);
  bool ifBankrot(int*& money, bool*& bankrot);
  int getPos();
  int pointCount(int*& points);
}
