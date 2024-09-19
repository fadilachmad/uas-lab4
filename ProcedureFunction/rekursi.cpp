#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Kondisi dasar untuk menghentikan rekursi
    } else {
        return n * faktorial(n - 1); // Rekursi
    }
}

int main() {
    int angka;
    cout << "masukkan angka faktorial : ";
    cin >> angka;
    cout << angka << "! = " << faktorial(angka) << endl;
    return 0;
}
