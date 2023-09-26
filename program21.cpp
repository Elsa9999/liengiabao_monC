#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile; // Đối tượng luồng tệp
    int soNgay; // Số ngày bán hàng
    double doanhSo; // Số tiền bán hàng trong một ngày

    // Nhập số ngày.
    cout << "Nhập số ngày bạn có doanh số: ";
    cin >> soNgay;

    // Mở một tệp có tên là Sales.txt.
    outputFile.open("Sales.txt");

    // Nhập doanh số cho mỗi ngày và ghi vào tệp.
    for (int dem = 1; dem <= soNgay; dem++) {
        // Nhập doanh số cho một ngày.
        cout << "Nhập doanh số cho ngày thứ " << dem << ": ";
        cin >> doanhSo;

        // Ghi doanh số vào tệp.
        outputFile << doanhSo << endl;
    }

    // Đóng tệp.
    outputFile.close();

    cout << "Dữ liệu đã được ghi vào Sales.txt\n";
    return 0;
}
