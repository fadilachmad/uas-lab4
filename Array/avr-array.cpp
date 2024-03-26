#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "masukkan banyak data : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i){
        cout << "masukkan nilai ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    float jumlah = 0.00;
    for (int i = 0; i < n; ++i){
        cout << arr[i] << endl;
        jumlah += arr[i];
    }
    
    cout <<"Total nilai : " << jumlah << endl;
    
    cout << setprecision(2) << fixed;
    float avr = jumlah / n;
    cout << "Rata-rata : " << avr;
    

}