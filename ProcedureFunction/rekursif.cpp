#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah dari 1 hingga n
int jumlah(int n) {
    if (n == 0) {
        return 1; // Kondisi dasar untuk menghentikan rekursi
    } else {
        return n + jumlah(n - 1); // Rekursi
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    int total = jumlah(n);
    cout << "Jumlah dari 1 hingga " << n << " adalah " << total << endl;

    return 0;
}
