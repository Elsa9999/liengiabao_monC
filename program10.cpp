// Chương trình này minh họa một vòng lặp for được điều khiển bởi người dùng.
#include <iostream>
using namespace std;

int main() {
    int minNumber, // Số bắt đầu để bình phương
        maxNumber; // Số tối đa để bình phương

    // Nhận giá trị tối thiểu và tối đa để hiển thị.
    cout << "Tôi sẽ hiển thị một bảng số và bình phương của chúng.\n"
         << "Nhập số bắt đầu: ";
    cin >> minNumber;
    cout << "Nhập số kết thúc: ";
    cin >> maxNumber;

    // Hiển thị bảng.
    cout << "Số\t\tBình phương của số\n"
         << "-------------------------\n";

    for (int num = minNumber; num <= maxNumber; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
