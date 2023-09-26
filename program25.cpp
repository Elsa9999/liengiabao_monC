#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double giaTri;
    char luaChon;

    cout << "Nhập một số: ";
    cin >> giaTri;
    cout << "Chương trình này sẽ tính lũy thừa của " << giaTri;
    cout << " từ 0 đến 10.\n";

    for (int count = 0; count <= 10; count++)
    {
        cout << giaTri << " lũy thừa ";
        cout << count << " là " << pow(giaTri, count);
        cout << "\nNhập Q để thoát hoặc bất kỳ phím nào khác ";
        cout << "để tiếp tục: ";
        cin >> luaChon;

        if (luaChon == 'Q' || luaChon == 'q')
            break;
    }

    return 0;
}
