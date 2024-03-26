#include <iostream>

using namespace std;

int main() {
    system("cls");
    int a,b,max_num;
    bool check;
    a = 5;
    b = 10;

    // max_num = (a > b) ? a : b; 
    check = (a<10) ? true : false;

    // cout << "Bilangan terbesar antara " << a << " dan " << b << " adalah: " << max_num << endl;
    cout << "Bilangan a lebih kecil dari 10? " << check << endl;
    return 0;
}