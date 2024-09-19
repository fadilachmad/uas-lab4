#include <iostream>
using namespace std;

int pangkat(int x, int y);
int main (){
    int n, p;
    cout << "masukkan angka : ";
    cin >> n;
    cout << "masukkang pangkat : ";
    cin >> p;
    cout << "hasil : " << pangkat(n, p);
}

int pangkat(int x, int y){
    int z = 1;
    for(int i = 1; i <= y; i++){
        z *= x;
    }
    return z;
}