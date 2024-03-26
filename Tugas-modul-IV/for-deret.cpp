#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int n;
    cout << "masukkan angka : ";
    cin >> n;

    int hasil = 1;
    cout << hasil << " ";
    for (int i = 1; i < n; i++)
    {
        if (hasil % 2 == 0){
            hasil = hasil + 3;
            cout << hasil << " ";
        }
        else {
            hasil = hasil + 5;
            cout << hasil << " ";
        }

    }   
}