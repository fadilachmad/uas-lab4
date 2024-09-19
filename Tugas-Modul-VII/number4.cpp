#include <iostream>
#include <iomanip>
using namespace std;

void tambah (float *ptr_a, float *ptr_b){
    cout << *ptr_a + *ptr_b;
}
void kurang (float *ptr_a, float *ptr_b){
    cout << *ptr_a - *ptr_b;
}
void kali (float *ptr_a, float *ptr_b){
    cout << *ptr_a * *ptr_b;
}
void bagi (float *ptr_a, float *ptr_b){
    cout << *ptr_a / *ptr_b;
}

int main (){
    float a,b;
    char op;
    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << "pilih operator (+ - * /) : ";
    cin >> op;
    cout << "masukkan angka kedua : ";
    cin >> b;

    cout << "hasil dari " << a << op << b << " = ";
    cout << setprecision(2) << fixed;    
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