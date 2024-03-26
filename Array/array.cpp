#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int nilai[] = {70,83,66,75,90};
    int awal = 0;
    float avg;
    for (int i = 0; i < 5; i++){
        awal += nilai[i];
    }
    cout << setprecision(2) << fixed;
    avg = awal / 5.00;
    cout << avg << endl;
}