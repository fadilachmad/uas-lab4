#include <iostream>

using namespace std;

int main() {
    system("CLS");
    string nama;
    char kom;
    int umur;
    float tinggi;
    
    // tipe data string
    cout << "Masukkan nama anda: ";
    cin >> nama;
 
    // tipe data char
    cout << "Masukkan kom: ";
    cin >> kom;

    // tipe data integer
    cout << "Masukkan umur: ";
    cin >> umur;

    // tipe data float
    cout << "Masukkan tingi: ";
    cin >> tinggi;

    cout << "nama anda " << nama << " dari kom " << kom << " umur " << umur << " tahun dengan tinggi " << tinggi << " cm";
    // TODO : Buatlah keluaran dengan data yang telah dimasukkan user
    // contoh : Nama anda adalah bita, dari kom c, umur 18 tahun, dengan tinggi 168cm
    
    return 0;
}