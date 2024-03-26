#include <iostream>
using namespace std;

// tipe data void digunakan untuk fungsi yang tidak memerlukan nilai balik (return)
void cetak (){
    cout << "fungsi pertama menggunakan void\n";
    cout << "hello world!\n";
    int hasil = 5 + 2;
    cout << hasil << endl << endl;
}

// untuk fungsi yang memerlukan nilai balik tidak bisa menggunakan void
int tambah (int a, int b){
    return a + b;
}

int main () {
    system ("cls");
    cetak();

    cout << "pemanggilan fungsi kedua yang menggunakan return a + b\n";
    int x, y;
    cout << "masukkan angka pertama : ";
    cin >> x;
    cout << "masukkan angka kedua : ";
    cin >> y;
    cout << "hasil tambah :" << tambah(x, y);

    return 0;
}