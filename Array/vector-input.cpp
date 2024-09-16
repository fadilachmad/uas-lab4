#include <iostream>
#include <vector>
using namespace std;
int main(){
    system("cls");
    int nilai, high = 0, low = 100;
    float mean = 0;
    vector <int> data;
    
    cout << "--Input '0' untuk finished program--\n\n";

    for(int i = 0; i < 100; i++){
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> nilai;
        mean += nilai;
        if(nilai == 0 && data.size() == 0){
            cout << "Tidak ada nilai yang dimasukkan...\n\n";
            goto x;
        } else if (nilai == 0){
            break;
        }
        if(nilai > high){
            high = nilai;
        }
        if(nilai < low){
            low = nilai;
        }
        data.push_back(nilai);
    }

    cout << "Mean       : " << mean/data.size() << endl;
    cout << "Highest    : " << high << endl;
    cout << "Lowest     : " << low << endl;
    x : return 0;
}