// Chương trình này ghi dữ liệu vào một tệp.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "Đang ghi dữ liệu vào tệp.\n";

    // Ghi bốn tên vào tệp.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Đóng tệp
    outputFile.close();
    cout << "Hoàn thành.\n";
    return 0;
}
