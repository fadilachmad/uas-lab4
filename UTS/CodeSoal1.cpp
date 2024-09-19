#include <iostream>
using namespace std;
int main(){
    int n, i = 0; 
    float mean, total = 0; 
    system("cls"); 
    cout << "---Masukkan Nilai -1 Untuk Menghitung Mean---\n\n";
    do{ 
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> n;

        if(n == -1){
            if(total == 0){
                cout << "Tidak Ada Nilai Yang Dimasukkan";
            }
            else{
                mean = total / i;
                cout << "\nNilai rata-rata : " << mean;
            }
            break;
        }
        else if(n < -1){
            cout << "Error! Masukkan sebuah bilangan bulat positif!." << endl;
        }
        else{
            total += n; 
            i++;
        }
    } while(true);  
}