#include "Test.h"
#include "Monopoly.h"

int main(){
    
    Test t;     // ���������� ��������
    t.tests();

    Monopoly m; // ���
    m.menu();
    m.startGame();
    m.updateGame();

    return 0;
    
    
}
