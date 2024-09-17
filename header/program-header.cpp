#include <iostream>
#include "pangkat.h"
using namespace std;
int main(){
    int n, p;
    cout << "masukkan angka : ";
    cin >> n;
    cout << "masukkan pangkat : ";
    cin >> p;
    cout << pangkat(n, p) << endl;
}