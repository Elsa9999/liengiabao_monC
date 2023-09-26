// Chương trình này tính điểm trung bình của các bài kiểm tra. Nó yêu cầu người dùng nhập
// số lượng học sinh và số điểm kiểm tra cho mỗi học sinh.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numStudents; // Số lượng học sinh
    int numTests;    // Số điểm kiểm tra cho mỗi học sinh
    double total;    // Bộ lưu trữ tổng số điểm
    double average;  // Điểm trung bình kiểm tra

    // Cài đặt định dạng đầu ra số học
    cout << fixed << showpoint << setprecision(1);

    // Nhập số lượng học sinh
    cout << "Chương trình này tính điểm trung bình của các bài kiểm tra.\n";
    cout << "Bạn có bao nhiêu học sinh? ";
    cin >> numStudents;

    // Nhập số điểm kiểm tra cho mỗi học sinh
    cout << "Mỗi học sinh có bao nhiêu điểm kiểm tra? ";
    cin >> numTests;

    // Xác định điểm trung bình của mỗi học sinh
    for (int student = 1; student <= numStudents; student++) {
        total = 0; // Khởi tạo bộ lưu trữ tổng số điểm
        for (int test = 1; test <= numTests; test++) {
            double score;
            cout << "Nhập điểm số " << test << " cho ";
            cout << "học sinh thứ " << student << ": ";
            cin >> score;
            total += score;
        }
        average = total / numTests;
        cout << "Điểm trung bình của học sinh thứ " << student;
        cout << " là " << average << ".\n\n";
    }
    return 0;
}
