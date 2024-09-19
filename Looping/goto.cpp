#include <iostream>
using namespace std;
int main ()
{
    system ("cls");
    int a;
    cout << "Program hitung mundur\n\n";
    cout << "masukkan angka : ";
    cin >> a;

    ulang : 
    cout << a;
    --a;
    
    if (a > 0) {
        cout << ", ";
        goto ulang;
    }
}
