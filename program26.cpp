#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int demDVD = 1; // Biến đếm số DVD
    int soDVDs;    // Số lượng DVD thuê
    double tongPhi = 0.0; // Biến tích luỹ tổng phí
    char phienBan; // Phần mềm hiện tại, C hoặc K

    // Nhập số lượng DVD.
    cout << "Bạn đang thuê bao nhiêu DVD? ";
    cin >> soDVDs;

    // Xác định các khoản phí.
    do
    {
        if ((demDVD % 3) == 0)
        {
            cout << "DVD #" << demDVD << " miễn phí!\n";
            continue; // Bắt đầu ngay vòng lặp tiếp theo
        }

        cout << "DVD #" << demDVD;
        cout << " là phiên bản mới? (C/K) ";
        cin >> phienBan;

        if (phienBan == 'C' || phienBan == 'c')
            tongPhi += 3.50;
        else
            tongPhi += 2.50;

    } while (demDVD++ < soDVDs);

    // Hiển thị tổng phí.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng phí là $" << tongPhi << endl;

    return 0;
}
