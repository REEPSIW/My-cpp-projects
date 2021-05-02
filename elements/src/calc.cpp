#include <iostream>
#include <cmath>
#include "mainClass.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "����� ����������!" << endl;
    while(true) {
        int menu;
        cout << "�������� ����� ����: 1 - ����� �� �������," << endl;
        cout << "2 - ����� �� ������, 3 - ����� �� �������� �� ������," << endl;
        cout << "4 - ����� �� �����, 5 - ����� �� �������� �� �������," << endl;
        cout << "6 - ������� ��� ��������. (������� 12345, ����� �����): " << endl;
        cin >> menu;
        switch (menu) {
            case 1: { // ����� �� �������
                string a;
                cin >> a;
                bool search = true;
                for(int i = 0; i < table.size(); i++) {
                    if ((table[i - 1].GetSymbol() == a) && (search == true)) {
                        table[i - 1].PrintElem();
                        search = false;
                    }
                }
                if(search == true) {
                    cout << "������� �� ������." << endl;
                }
                break;
            }
            case 2: { // �� ������
                int a;
                cin >> a;
                if(a <=0 || a > 118) {
                    cout << "������� �� ������." << endl;
                }
                else {
                    table[a - 1].PrintElem();
                }
                break;
            }
            case 3: { // �� �������� �� ������
                string c;
                cin >> c;
                bool search2 = true;
                for(int i = 0; i < table.size(); i++) {
                    if ((table[i].GetLatin() == c) && (search2 == true)) {
                        table[i].PrintElem();
                        search2 = false;
                    }
                }
                if(search2 == true) {
                    cout << "������� �� ������." << endl;
                }
                break;
            }
            case 4: { // �� �����
                double c;
                cin >> c;
                bool search5 = true;
                cout << "������� ��������:" << endl;
                for(int i = 0; i < table.size(); i++) {
                    if (int(round(table[i].GetMass()) == int(c))) {
                        table[i].PrintElem();
                        search5 = false;
                    }
                }
                if(search5 == true) {
                    cout << "�������� �� �������." << endl;
                }
                break;
            }
            case 5: { // �� �������� ��������
                string b;
                cin >> b;
                bool search3 = true;
                for(int i = 0; i < table.size(); i++) {
                    if ((table[i].GetName() == b) && (search3 == true)) {
                        table[i].PrintElem();
                        search3 = false;
                    }
                }
                if(search3 == true) {
                    cout << "������� �� ������." << endl;
                }
                break;
            }
            case 6: { // ��� ��������
                for(int i = 1; i < table.size(); i++) {
                    table[i].PrintElem();
                }
                break;
            }
            case 12345:
                cout << "�����." << endl;
                return 0;
            default:
                cout << "������� �� �������." << endl;
        }
    }
    return 0;
}
