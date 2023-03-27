#include <iostream>
#include <fstream>

using namespace std;

int main() {
    double summ=0;
    double rezult=0;
    ifstream file("/home/student/labs/laba_5/lab_5_3");
    if (file.is_open()) {
        double chislo;
        int kolichestvo = 0;
        while (file >> chislo)
            kolichestvo++;
        file.close();
        ifstream file1("/home/student/labs/laba_5/lab_5_3");
        double *file = new double[kolichestvo];
        for (int i = 0; i < kolichestvo; i++) {
            file1 >> file[i];
            summ = summ + file[i];
        }
        rezult=summ/kolichestvo;
        cout << "Среднее арифметическое чисел с плавающей запятой = " << rezult << endl;
        file1.close();
        return 0;
    } else {
        cout << "Ошибка! Файл не был открыт" << endl;
        return 0;
    }
}