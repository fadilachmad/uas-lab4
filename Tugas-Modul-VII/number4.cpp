#include <iostream>
using namespace std;

void tambah (int *ptr_a, int *ptr_b){
    cout << *ptr_a + *ptr_b;
}
void kurang (int *ptr_a, int *ptr_b){
    cout << *ptr_a - *ptr_b;
}
void kali (int *ptr_a, int *ptr_b){
    cout << *ptr_a * *ptr_b;
}
void bagi (int *ptr_a, int *ptr_b){
    cout << *ptr_a / *ptr_b;
}

int main (){
    int a,b;
    char op;
    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << "pilih operator (+ - * /) : ";
    cin >> op;
    cout << "masukkan angka kedua : ";
    cin >> b;

    cout << "hasil dari " << a << op << b << " = ";
    switch(op){
        case '+' : tambah(&a, &b);
        break;
        case '-' : kurang(&a, &b);
        break;
        case '*' : kali(&a, &b);
        break;
        case '/' : bagi(&a, &b);
        break;
        default : cout << "operator tidak ditemukan";
    }
}