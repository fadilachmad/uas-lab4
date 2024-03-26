#include <iostream>
using namespace std;
int main (){
    system ("cls");
    int n;
    cout << "masukkan angka faktorial: ";
    cin >> n;

    int faktorial = 1;
    for (int i = 1; i <= n; i++){
        faktorial *= i;
    }
    cout << n << "! = " << faktorial << endl;
}