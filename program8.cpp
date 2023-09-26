// Chương trình này hiển thị một menu và yêu cầu người dùng chọn một mục.
// Một vòng lặp do-while lặp lại chương trình cho đến khi người dùng chọn mục 4 từ menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Hằng số cho lựa chọn menu
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // Hằng số cho mức phí thành viên
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    // Biến
    int choice;     // Lựa chọn menu
    int months;     // Số tháng
    double charges; // Các khoản phí hàng tháng

    // Thiết lập định dạng đầu ra số học
    cout << fixed << showpoint << setprecision(2);

    do {
        // Hiển thị menu
        cout << "\n\t\tMenu Thành Viên Câu Lạc Bộ Sức Khỏe\n\n"
             << "1. Thành Viên Người Lớn\n"
             << "2. Thành Viên Trẻ Em\n"
             << "3. Thành Viên Người Cao Tuổi\n"
             << "4. Thoát Khỏi Chương Trình\n\n"
             << "Nhập lựa chọn của bạn: ";
        cin >> choice;

        // Kiểm tra lựa chọn menu
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE) {
            cout << "Vui lòng nhập một lựa chọn hợp lệ: ";
            cin >> choice;
        }

        // Xử lý lựa chọn của người dùng
        if (choice != QUIT_CHOICE) {
            // Nhập số tháng
            cout << "Thành viên sẽ tham gia trong bao nhiêu tháng? ";
            cin >> months;

            // Xử lý lựa chọn menu của người dùng
            switch (choice) {
                case ADULT_CHOICE:
                    charges = months * ADULT;
                    break;
                case CHILD_CHOICE:
                    charges = months * CHILD;
                    break;
                case SENIOR_CHOICE:
                    charges = months * SENIOR;
            }

            // Hiển thị tổng cước hàng tháng
            cout << "Tổng cước là $" << charges << endl;
        }
    } while (choice != QUIT_CHOICE);

    return 0;
}
