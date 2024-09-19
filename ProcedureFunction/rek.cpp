#include <iostream>
using namespace std;

void isEven(int num){
    if(num == 0){
        cout << "genap";
    }
    else if (num == 1){
        cout << "ganjil";
    }
    else{
        isEven(num - 2);
    }
}

int main(){
    int a;
    cout << "masukkan num : ";
    cin >> a;
    isEven(a);
}