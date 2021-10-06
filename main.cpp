#include "Test.h"
#include "Monopoly.h"

int main(){
    
    Test t;     // testing the program
    t.tests();

    Monopoly m; // the game
    m.menu();
    m.startGame();
    m.updateGame();

    return 0;
}
