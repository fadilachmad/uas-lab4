#include <iostream>
using namespace std;
int main (){
    system ("cls");
    char a;
    cout << "masukkan input apapun : ";
    cin >> a;

    switch (a){
        case 'a' ... 'z' : cout << "anda memasukkan huruf kecil";
        break;
        case 'A' ... 'Z' : cout << "anda memasukkan huruf besar";
        break;
        case '0' ... '9' : cout << "anda memasukkan angka numerik";
        break;
        default : cout << "anda memasukkan karakter simbol";

    }
}