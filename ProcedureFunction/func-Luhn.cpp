#include <iostream>
using namespace std;
void Luhn (long long num);
int main(){
    long long num;
    cout << "Masukkan Angka Kartu : ";
    cin >> num;
    cout << "Nomor Kartu Anda : " << num;
    Luhn(num);

}

void Luhn (long long num){
    int Mastercard = num / 100000000000000;
    int Visa16 = num / 1000000000000000;
    int Visa13 = num / 1000000000000;
    int plusNum = 0;
    // Algoritma Luhn
    do{
        int lastNum = num % 10;
        plusNum += lastNum;
        num /= 10;
        int multipleLastNum = (num % 10) * 2;
        if(multipleLastNum >= 10){
            multipleLastNum = (multipleLastNum % 10) + 1;
        }
        plusNum += multipleLastNum;
        num /= 10;
    } while(num != 0);

    // Menenetukan tipe kartu
    if(plusNum % 10 == 0){
        if(Mastercard == 51 || Mastercard == 52 || Mastercard == 53 || Mastercard == 54 || Mastercard == 55){
            cout << "\nTipe Kartu Anda : Mastercard";
        }
        else if(Visa16 == 4 || Visa13 == 4){
            cout << "\nTipe Kartu Anda : Visa";
        }
        else{
            cout << "\nTipe Kartu Anda : Tidak Diketahui";
        }
    }
    else{
        cout << "\nTipe Kartu Anda : Tidak Valid";
    }
    cout << "\nChecksum : " << plusNum;
}

// lastNum adalah angka terakhir dari num
// multipleLastNum adalah lastNum yang telah di lastNum dan dikali 2
// plusNum adalah jumlah angka terakhir yg telah dikalikan