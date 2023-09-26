// Chương trình này đọc dữ liệu từ một tệp.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;
    string name;

    inputFile.open("Friends.txt");
    cout << "Đang đọc dữ liệu từ tệp.\n";

    inputFile >> name; // Đọc tên thứ nhất từ tệp
    cout << name << endl; // Hiển thị tên thứ nhất

    inputFile >> name; // Đọc tên thứ hai từ tệp
    cout << name << endl; // Hiển thị tên thứ hai

    inputFile >> name; // Đọc tên thứ ba từ tệp
    cout << name << endl; // Hiển thị tên thứ ba

    inputFile.close(); // Đóng tệp
    return 0;
}
A