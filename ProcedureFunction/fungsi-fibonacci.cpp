#include <iostream>
using namespace std;
long rek(long n){
    if(n == 1 || n ==2){
        return 1;
    } else {
        return rek(n - 1) + rek(n-2);
    }
}

int main(){
    int n;
    cout << "n : ";
    cin >> n;
    cout << "fibonaci : " << rek(n);
}