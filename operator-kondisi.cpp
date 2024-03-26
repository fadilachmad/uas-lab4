#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d;
    cout << "masukkan nilai pertama : ";
    cin >> a;
    cout << "masukkan nilai kedua : ";
    cin >> b;

    c = (a < b) ? a : b;
    d = (a > b) ? a : b;

    cout << "nilai minimal : " << c << endl;
    cout << "nilai maksimal : " << d;
}