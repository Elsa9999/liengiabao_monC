#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    int number;

    // Mở tệp tin.
    inputFile.open("BadListOfNumbers.txt");

    // Nếu tệp tin mở thành công, xử lý tệp tin.
    if (inputFile) {
        // Đọc các số từ tệp tin và hiển thị chúng.
        while (inputFile >> number) {
            cout << number << endl;
        }

        // Đóng tệp tin.
        inputFile.close();
    } else {
        // Hiển thị thông báo lỗi.
        cout << "Lỗi khi mở tệp tin.\n";
    }

    return 0;
}
