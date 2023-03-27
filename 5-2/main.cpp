#include <iostream>
#include <iomanip>

using namespace std;

void multitable(int basis) {
    if (basis==8 || basis==10 || basis==16) {
        cout << "Таблица умножения системы с основанием " << basis << ":" << endl;
        if (basis==8) {
            for (int i=1; i<8; i++) {
                for (int j=1; j<8; j++) {
                        cout << oct << setw(5) << i << setw(1) << "*";
                        cout << setw(2) << left << j << setw(2) << "=" << right;
                        cout << setw(2) << j*i << endl;
                }
                cout << endl;
            }
        }
        if (basis==10) {
            for (int i=1; i<10; i++) {
                for (int j=1; j<10; j++) {
                        cout << dec << setw(5) << i << setw(1) << "*";
                        cout << setw(2) << left << j << setw(2) << "=" << right;
                        cout << setw(2) << j*i << endl;
                }
                cout << endl;
            }
        } 
        if (basis==16) {
            for (int i=1; i<16; i++) {
                for (int j=1; j<16; j++) {
                        cout << hex << uppercase << setw(5) << i << setw(1) << "*";
                        cout << setw(2) << left << j << setw(2) << "=" << right;
                        cout << setw(2) << j*i << endl;
                }
                cout << endl;
            }
        }
    }
    else {
        cout << "Ошибка!Данная система счисления не поддерживается" << endl;
    }
}

int main() {
    int basis;
    cout << "Введите основание таблицы умножения" << endl;
    cout << "-8(восмеричная)" << endl;
    cout << "-10(десятеричная)" << endl;
    cout << "-16(шеснадцатеричная)" << endl;
    cin >> basis;
    multitable(basis);
    return 0;
}
