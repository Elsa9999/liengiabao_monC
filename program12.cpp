// Chương trình này lấy số liệu doanh số hàng ngày trong một khoảng thời gian
// và tính toán tổng của chúng.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int days;         // Số ngày
    double total = 0.0; // Bộ lưu trữ kết quả, khởi tạo bằng 0

    // Nhập số ngày
    cout << "Trong bao nhiêu ngày bạn có số liệu doanh số? ";
    cin >> days;

    // Nhập số liệu doanh số cho mỗi ngày và tích lũy tổng.
    for (int count = 1; count <= days; count++) {
        double sales;
        cout << "Nhập số liệu doanh số cho ngày thứ " << count << ": ";
        cin >> sales;
        total += sales; // Tích lũy tổng.
    }

    // Hiển thị tổng số liệu doanh số.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng số liệu doanh số là $" << total << endl;
    return 0;
}
