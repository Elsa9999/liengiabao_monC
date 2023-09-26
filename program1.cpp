#include <iostream>
using namespace std;

int main() {
    // Chương trình này minh họa cách sử dụng các toán tử ++ và --.

    int num = 4; // num ban đầu có giá trị là 4.

    // Hiển thị giá trị của num.
    cout << "Biến num hiện có giá trị là " << num << endl;
    cout << "Bây giờ tôi sẽ tăng giá trị của num lên.\n\n";

    // Sử dụng toán tử ++ hậu tố để tăng giá trị của num.
    num++;
    cout << "Bây giờ biến num có giá trị là " << num << endl;
    cout << "Tôi sẽ tăng giá trị của num một lần nữa.\n\n";

    // Sử dụng toán tử ++ tiền tố để tăng giá trị của num.
    ++num;
    cout << "Bây giờ biến num có giá trị là " << num << endl;
    cout << "Bây giờ tôi sẽ giảm giá trị của num.\n\n";

    // Sử dụng toán tử -- hậu tố để giảm giá trị của num.
    num--;
    cout << "Bây giờ biến num có giá trị là " << num << endl;
    cout << "Tôi sẽ giảm giá trị của num một lần nữa.\n\n";

    // Sử dụng toán tử -- tiền tố để giảm giá trị của num.
    --num;
    cout << "Bây giờ biến num có giá trị là " << num << endl;

    return 0;
}
