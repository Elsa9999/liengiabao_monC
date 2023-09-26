#include<iostream>
#include <iomanip> // Để sử dụng setw
using namespace std;
int main(){
    int num, limit;
cout << "Table of squares\n";
cout << "How high to go? ";
cin  >> limit;
cout << "\n\nnumber square\n";
num = 1;
while (num <= limit)
{  cout << setw(5) << num << setw(6)
	      << num*num << endl;
   num++;
}

    return 0;
}