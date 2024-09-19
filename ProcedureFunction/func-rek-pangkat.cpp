#include <iostream>
using namespace std;
int pangkat(int x, int y){
    if(y == 0){
        return 1;
    } else{
        return x * pangkat (x, y - 1);
    }
}

int main (){
    int n, p;
    cout << "masukkan angka : ";
    cin >> n;
    cout << "masukkang pangkat : ";
    cin >> p;
    cout << "hasil : " << pangkat(n, p);
}