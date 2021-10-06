#include "Test.h"
#include "Monopoly.h"

int main(){
    
    Test t;     // тестування програми
    t.tests();

    Monopoly m; // гра
    m.menu();
    m.startGame();
    m.updateGame();

    return 0;
    
    
}
