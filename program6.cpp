// Chương trình này hiển thị một danh sách các số và bình phương của chúng.
#include <iostream>
using namespace std;

int main() {
    // Hằng số cho số bắt đầu và số tối đa
    const int MIN_NUMBER = 1, // Số bắt đầu để bình phương
              MAX_NUMBER = 10; // Số tối đa để bình phương

    int num = MIN_NUMBER; // Biến đếm

    cout << "Số\t\tBình phương của số\n";
    cout << "-------------------------\n";

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Tăng biến đếm.
    }

    return 0;
}
