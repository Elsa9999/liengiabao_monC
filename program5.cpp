// Chương trình này tính số đội bóng đá mà một liên đội trẻ có thể tạo ra từ số lượng cầu thủ có sẵn. 
// Kiểm tra đầu vào được thực hiện bằng vòng lặp while.
#include <iostream>
using namespace std;

int main() {
    // Hằng số cho số cầu thủ tối thiểu và tối đa
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    // Biến
    int players,         // Số lượng cầu thủ có sẵn
        teamPlayers,     // Số lượng cầu thủ mong muốn cho mỗi đội
        numTeams,         // Số đội
        leftOver;         // Số cầu thủ còn thừa

    // Nhập số lượng cầu thủ mong muốn cho mỗi đội
    cout << "Bạn muốn bao nhiêu cầu thủ cho mỗi đội? ";
    cin >> teamPlayers;

    // Kiểm tra đầu vào
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS) {
        // Giải thích lỗi
        cout << "Bạn nên có ít nhất " << MIN_PLAYERS 
             << " nhưng không quá " << MAX_PLAYERS << " cho mỗi đội.\n";

        // Nhập lại đầu vào
        cout << "Bạn muốn bao nhiêu cầu thủ cho mỗi đội? ";
        cin >> teamPlayers;
    }

    // Nhập số lượng cầu thủ có sẵn
    cout << "Có bao nhiêu cầu thủ có sẵn? ";
    cin >> players;

    // Kiểm tra đầu vào
    while (players <= 0) {
        // Nhập lại đầu vào
        cout << "Vui lòng nhập số lượng cầu thủ lớn hơn 0: ";
        cin >> players;
    }

    // Tính số đội
    numTeams = players / teamPlayers;

    // Tính số cầu thủ thừa
    leftOver = players % teamPlayers;

    // Hiển thị kết quả
    cout << "Sẽ có " << numTeams << " đội với " 
         << leftOver << " cầu thủ dư thừa.\n";

    return 0;
}
