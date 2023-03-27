#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int mass[10];
    cout << "Введите последовательность из 10 чисел:" << endl;
    for (int i=0; i<10; i++) {
        cout << i+1 << ".";
        cin >> mass[i];
    }
    for (int i=0; i<10; i++) {
        int a=10;
        cout << setw(a) << oct << mass[i] << setw(a);
        cout << setw(a) << dec << mass[i] << setw(a);
        cout << setw(a) << hex << uppercase << mass[i] << endl;
    }
    return 0;
}
