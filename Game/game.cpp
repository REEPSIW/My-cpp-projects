#include "game.h"
#include <conio.h>
#include <conio.h>
using std::cout;
using std::string;
using std::cin;
using std::endl;
class Warrior : public Character {
private:
    
};
int main() {
    setlocale(LC_ALL, "RU");
    string name;
    cout << "����� ���������� � ����." << endl;
    cout << "������� ��� ���������:";
    cin >> name;
    int playerClass;
    cout << "�������� ����� ��������� (����. 1 ��� �������� �������,\n\
2 ��� �������� �����, 3 ��� �������� ����������: )";
    playerClass = getch();
    cout << playerClass << endl;
    
    return 0;
}
