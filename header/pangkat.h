#include <iostream>
using namespace std;
int pangkat (int a, int b){
    int hasil= 1;
    for(int i = 1; i <= b; i++){
        hasil = hasil*a;
    }
    return hasil;
}