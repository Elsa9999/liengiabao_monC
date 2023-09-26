#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;

    // Mở tệp tin.
    inputFile.open("Numbers.txt");

    // Đọc các số từ tệp tin và hiển thị chúng.
    while (inputFile >> number) {
        cout << number << endl;
    }

    // Đóng tệp tin.
    inputFile.close();

    return 0;
}

