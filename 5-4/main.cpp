#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream first("/home/student/labs/laba_5/lab_5_4_1", ios::in);
    string buf;
    if (first.is_open()) {
        while(getline(first, buf)) {
            ofstream file("/home/student/labs/laba_5/lab_5_4_2", ios::app);
            if (file.is_open()) {
                file << buf;
            }
            file.close();
        }
        ifstream file2("/home/student/labs/laba_5/lab_5_4_2", ios::in);
        string buf2;
        if (file2.is_open()) {
            while(getline(file2, buf2))
            cout << buf2 << endl;
        }
    }
    return 0;
}
