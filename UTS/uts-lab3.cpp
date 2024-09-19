#include <iostream>     // Memasukkan library iostream
using namespace std;        // Menghilangkan kebutuhan untuk menambahkan std:: disetiap objek namespace c++
int main(){     // Main function
    long long num;      // Variable penampung inputan numcard
    cout << "Masukkan Angka Kartu : ";      // Meminta user memasukkan num
    cin >> num;     // Menerima input user sebagai num
    cout << "Nomor Kartu Anda : " << num;       // Menampilkan num yang telah diinput user

    int Mastercard = num / 100000000000000;     // Variable untuk mengecek tipe kartu mastercard yg berdigit 16
    int Visa16 = num / 1000000000000000;        // Variable untuk mengecek tipe kartu visa yg berdigit 16
    int Visa13 = num / 1000000000000;       // Variable untuk mengecek tipe kartu visa yg berdigit 13
    int plusNum = 0;        // Variable ruang penyimpanan penjumlahan digit num
    
    // Algoritma Luhn
    do{     // Lakukan
        int lastNum = num % 10;     // Mengambil digit terakhir dari num
        plusNum += lastNum;     // Menambahkan digit terakhir tadi ke variable plusNum
        num /= 10;      // Menghapus digit terakhir dari num
        int multipleLastNum = (num % 10) * 2;       // Mengambil digit terakhir dan dikali 2
        if(multipleLastNum >= 10){      // Jika digit terakhir yg dikali 2 lebih besar atau sama dengan 10
            multipleLastNum = (multipleLastNum % 10) + 1;       // Ambil digit terakhirnya dan tambah dengan 1
        }
        plusNum += multipleLastNum;     // Menambahkan angka yg sudah diolah diatas
        num /= 10;      // Menghapus digit terakhir dari num
    } while(num != 0);      // Kerjakan program diatas ketika num tidak sama dengan 0

    // Menenetukan tipe kartu
    if(plusNum % 10 == 0){      //  Jika hasil penjumlahan pada algoritma luhn mod 10 sama dengan 0
        if(Mastercard == 51 || Mastercard == 52 || Mastercard == 53 || Mastercard == 54 || Mastercard == 55){
            cout << "\nTipe Kartu Anda : Mastercard";       // Jika 2 digit awal pada num bernilai 51-55, cetak ini 
        }
        else if(Visa16 == 4 || Visa13 == 4){
            cout << "\nTipe Kartu Anda : Visa";     // Atau, jika digit pertama pada num bernilai 4, cetak ini
        }
        else{
            cout << "\nTipe Kartu Anda : Tidak Diketahui";      // Selain 2 kriteria di atas, cetak ini
        }
    }
    else{
        cout << "\nTipe Kartu Anda : Tidak Valid";      // Jika hasil penjumlahan pada algoritma luhn mod 10 tidak sama dengan 0, cetak ini
    }
    cout << "\nChecksum : " << plusNum;     // Tampilkan hasil penjumlahan pada algoritma luhn mod 10
}