#include "Test.h"
#include "Monopoly.h"

int main(){
    
    Test t;     // штука для тестиков, если вам надо что-то проверить заливайте туда
    t.tests();

    Monopoly m; // сама игра
    m.menu();
    m.startGame();
    m.updateGame();

    return 0;
    
    
}
