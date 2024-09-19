#include <iostream>
using namespace std;

int main (){
    int n, harga;
    cout << "masukkan kode minuman (1-3) : ";
    cin >> n;

    switch (n){
        case 1:
            harga = 5000;
            cout << "minuman yang anda pilih adalah es teh Rp. 5000";
            break;
        case 2:
            harga = 7000;
            cout << "minuman yang anda pilih adalah es jeruk Rp. 7000";
            break;
        case 3:
            harga = 10000;
            cout << "minuman yang anda pilih adalah es cappucino Rp. 10000";
            break;
        default:
            cout << "minuman yang anda pilih tidak tersedia";
            break;
    }

    int uang, jumlah;
    cout << "\ningin membeli berapa barang? : ";
    cin >> n;
    jumlah = n * harga;
    cout << "\njumlah harga : " << jumlah;
    cout << "\nmasukkan uang : ";
    cin >> uang;
    
    cout << "kembalian : " << uang - jumlah;


}