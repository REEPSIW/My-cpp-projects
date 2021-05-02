#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>
double crashgen () {   
    double crash;
    int random = rand() % 1001 + 1;
    if(random <= 5) {
        crash = double(((rand() % 200 + 1.01) + (0.01 * (rand() % 99 + 1))\
        / (rand() % 3 + 1) - 1.5) / 3) / 1.6;
    }
    else if(random <= 100 && random > 5) {
        crash = double(((rand() % 100 + 1.01) + (0.01 * (rand() % 99 + 1))\
        / (rand() % 3 + 1) - 1.5) / 3) / 1.5;
    }
    else if(random <= 300 && random > 100) {
        crash = double(((rand() % 50 + 1.01) + (0.01 * (rand() % 99 + 1))\
        / (rand() % 3 + 1) - 1.5) / 3) / 1.4;
    }
    else if(random <= 600 && random > 300) {
        crash = double(((rand() % 20 + 1.01) + (0.01 * (rand() % 99 + 1))\
        / (rand() % 3 + 1) - 1.5) / 3) / 1.3;
    }
    else {
        crash = double(((rand() % 10 + 1.01) + (0.01 * (rand() % 99 + 1))\
        / (rand() % 3 + 1) - 1.5) / 3) / 1.2;
    }
    if(crash >= 1.01) {
    return round(crash * 100) / 100;
    }
    else {
        crashgen();
    }
}
void draw(double crash, bool isWin, double crashthink ) {
    system("color 3");
    bool protect = true;
    bool win = false;
    for (double i = 1; i <= crash - 0.01; i += 0.01) {
        // ����� �������
        Sleep(10);
        std::cout << "\t" << "\t" <<"|" << " " << i << " " << "|" << std::endl;
        if(i - crashthink >= 0 && protect == true \
        || i - crashthink == 0.01 && protect == true) {
            system("color 2");
            std::cout << "������." << std::endl;
            protect = false;
            Sleep(1000);
            win = true;
        }
    }
    if(win == false) {
        system("color 4");
    }
    std::cout << "\t" << "\t" << "======== " << crash << std::endl;
} 
bool winLose(double  crash, double crashthink) {
    if (crashthink <= crash) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    while (true) {
        setlocale(LC_ALL, "Russian");
        srand(time(NULL) + time(NULL) * time(NULL) * time(NULL));
        double crashthink;
        std::cout << "������� �����������, ��� ������� �� \
������ �� ��������� ���� (������� ����� 123456, ����� ����� �� ����.): " << std::endl;
        std::cin >> crashthink; // ���������� � ������������, ��� �� �� ����� ��������� ����
        if(crashthink == 123456) {
            std::cout << "�� ����� ������." << std::endl;
            exit(0);
        }
        else if(crashthink <= 1 || crashthink > 200) {
            std::cout << "������� ���������� �����." << std::endl;
            continue;
        }
        system("cls");
        crashgen(); // ���������� ��������� ����������� (����� ������ ������ �� ����, ���� ����������)
        double crash = crashgen();
        bool isWin = winLose(crash, crashthink); // ������� ��� ���
        std::cout << "\t*****" << std::endl;
        Sleep(1000);
        std::cout << "\t*****" << std::endl;
        Sleep(1000);
        std::cout << "\t*****" << std::endl;
        Sleep(1000);
        draw(crash, isWin, crashthink);
        system("pause > nul");
        system("color 07");
        system("cls");
        system("color 07");
    }
    return 0;
}
