#include <iostream>
using namespace std;

int main() {
    system("cls");
    int angka;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    if (angka % 2 == 0) {
        if (angka % 3 == 0) {
            cout << "Angka yang dimasukkan adalah angka genap dengan kelipatan 6.";
        } else if (angka % 5 == 0) {
            cout << "Angka yang dimasukkan adalah angka genap dengan kelipatan 10.";
        } else {
            cout << "Angka yang dimasukkan adalah bilangan genap tetapi bukan kelipatan 6 atau 10.";
        }
    } else {
        if (angka % 3 == 0 && angka % 5 == 0) {
            cout << "Angka yang dimasukkan adalah angka ganjil dengan kelipatan 3 dan 5.";
        } else if (angka % 3 == 0) {
            cout << "Angka yang dimasukkan adalah angka ganjil dengan kelipatan 3.";
        } else if (angka % 5 == 0) {
            cout << "Angka yang dimasukkan adalah angka ganjil dengan kelipatan 5.";
        } else {
            cout << "Angka yang dimasukkan adalah bilangan ganjil yang bukan kelipatan 3 atau 5.";
        }
    }

    return 0;
}