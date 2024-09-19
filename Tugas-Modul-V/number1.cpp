#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    // Kemaren udah pernah bikin yg pake fungsi tapi malah ilang,
    // sekarang bikin ulang yg sederhana aja, males dipakein fungsi lagi, yg penting algoritma nya dapat
    
    int n, tipe, penambah = 0, deret = 0;
    cout << "Masukkan n (3 - 100): ";
    cin >> n;
    
    if(n >= 3 && n <= 100){
        for(int i = 1; i <= n; i++){
            penambah += 2;
            deret += penambah;
            if(deret % 3 == 0 && deret % 5 == 0){
                cout << "FizzBuzz ";
            } else if(deret % 3 == 0){
                cout << "Fizz ";
            } else if(deret % 5 == 0){
                cout << "Buzz ";
            } else {
                cout << deret << " ";
                tipe = deret;
            }
        }
        cout << "\nTipe data " << tipe << " adalah : " << typeid(tipe).name() << endl;
    } else {
        cout << "Input tidak valid, masukkan nilai (3 - 100)";
    }

}