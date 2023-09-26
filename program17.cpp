// Chương trình này ghi dữ liệu nhập từ người dùng vào một tệp.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outputFile;
    string name1, name2, name3;

    // Mở một tệp đầu ra.
    outputFile.open("Friends.txt");

    // Nhận tên của ba người bạn.
    cout << "Nhập tên của ba người bạn.\n";
    cout << "Bạn thứ nhất: ";
    cin >> name1;
    cout << "Bạn thứ hai: ";
    cin >> name2;
    cout << "Bạn thứ ba: ";
    cin >> name3;

    // Ghi các tên vào tệp.
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "Các tên đã được lưu vào một tệp.\n";

    // Đóng tệp
    outputFile.close();
    return 0;
}
