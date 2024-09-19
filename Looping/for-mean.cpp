#include <iostream>
using namespace std;
int main(){
    const int limit = 100;
    int n;
    float mean, total = 0;
    
    for(int i = 0; i < limit; i++){
        repeat :
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> n;

        if(n == -1){
            if(total == 0){
                cout << "Tidak Ada Nilai Yang Dimasukkan";
            }
            else{
                mean = total / i;
                cout << "Nilai rata-rata : " << mean;
            }
            break;
        }
        else if(n < -1){
            cout << "Error! Masukkan sebuah bilangan bulat positif!." << endl;
            goto repeat;
        }
        else{
            total += n; 
        }
    }
}