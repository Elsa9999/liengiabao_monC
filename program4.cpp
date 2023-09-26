// Chương trình này hỗ trợ một kỹ thuật viên trong quá trình 
// kiểm tra nhiệt độ của một chất.
#include <iostream>
using namespace std;

int main() {
    const double MAX_TEMP = 102.5; // Nhiệt độ tối đa
    double temperature; // Để lưu trữ nhiệt độ

    // Nhập nhiệt độ hiện tại.
    cout << "Nhập nhiệt độ theo độ Celsius của chất: ";
    cin >> temperature;

    // Khi cần thiết, hướng dẫn kỹ thuật viên điều chỉnh bộ điều khiển nhiệt độ.
    while (temperature > MAX_TEMP) {
        cout << "Nhiệt độ quá cao. Hãy giảm bộ điều khiển nhiệt độ và đợi 5 phút.\n";
        cout << "Sau đó, đo lại nhiệt độ theo độ Celsius và nhập nó vào đây: ";
        cin >> temperature;
    }

    // Nhắc nhở kỹ thuật viên kiểm tra nhiệt độ lại sau 15 phút.
    cout << "Nhiệt độ đã chấp nhận được.\n";
    cout << "Hãy kiểm tra nó lại sau 15 phút.\n";

    return 0;
}
