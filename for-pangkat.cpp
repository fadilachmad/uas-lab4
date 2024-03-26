#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int n, p;
    cout << "masukkan angka : ";
    cin >> n;
    cout << "masukkan pangkat : ";
    cin >> p;

    int hasil = 1;
    for (int i = 1; i <= p; i++)
    {
        hasil = hasil * n;
    }
    cout << n << "^" << p << " = " << hasil << endl;
}