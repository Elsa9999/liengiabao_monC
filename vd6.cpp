#include<iostream>
using namespace std;

int main() {
    char choice; // Khai báo biến choice
    do {
        // Mã để hiển thị menu
        // và thực hiện các hành động
        cout << "Lựa chọn khác? (Y/N) ";
        cin >> choice; // Nhập giá trị cho biến choice
    } while (choice == 'Y' || choice == 'y');

    // Điều kiện có thể được viết lại như sau
    // (toupper(choice) == 'Y');
    // hoặc như sau
    // (tolower(choice) == 'y');

    return 0;
}
