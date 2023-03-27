#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file1("/home/student/labs/laba_5/lab_5_5_1.bin");
    file1.seekg(0, ios::end);
    const int file_size = file1.tellg();
    file1.seekg(0, ios::beg);
    char *buf = new char[file_size];
    float *buf2 = new float[file_size];
    file1.read(buf, file_size);
    file1.close();
    for (int i = 0; i < file_size; i++) {
        buf2[i] = 1/((float)buf[i]);
        cout << buf2[i] << endl;
    }
    delete[] buf;
    delete[] buf2;
    ofstream file2("/home/student/labs/laba_5/lab_5_5_2.bin");
    file2.write((char*)buf2, file_size);
    file2.close();
    return 0;
}