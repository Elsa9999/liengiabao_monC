#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    string filename;
    int number;

    // Nhập tên tệp tin từ người dùng.
    cout << "Nhập tên tệp tin: ";
    cin >> filename;

    // Mở tệp tin.
    inputFile.open(filename);

    // Nếu tệp tin mở thành công, xử lý nó.
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
