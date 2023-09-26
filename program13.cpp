// Chương trình này tính tổng số điểm mà một đội bóng đá đã giành được qua một loạt trận đấu.
// Người dùng nhập một loạt giá trị điểm số, sau đó nhập -1 khi hoàn thành.
#include <iostream>
using namespace std;

int main() {
    int game = 1;   // Bộ đếm trận đấu
    int points;     // Để lưu trữ số điểm
    int total = 0;  // Bộ lưu trữ tổng số điểm

    cout << "Nhập số điểm mà đội của bạn đã giành được\n";
    cout << "cho đến nay trong mùa giải, sau đó nhập -1 khi hoàn thành.\n\n";
    cout << "Nhập số điểm cho trận đấu thứ " << game << ": ";
    cin >> points;

    while (points != -1) {
        total += points;
        game++;
        cout << "Nhập số điểm cho trận đấu thứ " << game << ": ";
        cin >> points;
    }

    cout << "\nTổng số điểm là " << total << endl;
    return 0;
}
