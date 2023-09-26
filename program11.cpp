// Chương trình này chuyển đổi tốc độ từ 60 kph đến 130 kph (các khoảng cách 10 kph) sang mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Hằng số cho tốc độ
    const int START_KPH = 60, // Tốc độ bắt đầu
              END_KPH = 130,  // Tốc độ kết thúc
              INCREMENT = 10; // Tăng tốc độ

    // Hằng số cho hệ số chuyển đổi
    const double CONVERSION_FACTOR = 0.6214;

    // Biến
    int kph;   // Để lưu trữ tốc độ theo kph
    double mph; // Để lưu trữ tốc độ theo mph

    // Thiết lập định dạng đầu ra số học
    cout << fixed << showpoint << setprecision(1);

    // Hiển thị tiêu đề bảng
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Hiển thị các tốc độ
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT) {
        // Tính tốc độ theo mph
        mph = kph * CONVERSION_FACTOR;

        // Hiển thị tốc độ theo kph và mph
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
