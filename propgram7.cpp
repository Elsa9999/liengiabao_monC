// Chương trình này tính trung bình của 3 điểm kiểm tra và lặp lại nhiều lần nếu người dùng muốn.
#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3; // Ba điểm kiểm tra
    double average; // Điểm trung bình
    char again; // Để lưu giữ đầu vào Y hoặc N

    do {
        // Nhập ba điểm kiểm tra.
        cout << "Nhập 3 điểm và tôi sẽ tính điểm trung bình của chúng: ";
        cin >> score1 >> score2 >> score3;

        // Tính và hiển thị điểm trung bình.
        average = (score1 + score2 + score3) / 3.0;
        cout << "Điểm trung bình là " << average << ".\n";

        // Người dùng có muốn tính điểm trung bình cho bộ điểm khác không?
        cout << "Bạn có muốn tính điểm trung bình cho bộ điểm khác không? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}
