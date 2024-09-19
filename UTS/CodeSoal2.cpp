#include <iostream>
using namespace std;
int main(){
    system("cls");
    int n;
    cout << "Masukkan n (2 <= n <= 10) : ";
    cin >> n;

    if(n >= 2 && n <= 10){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << "x ";
            }
            cout << endl;
        }
        
        for(int i = 1; i <= n; i++){
            for(int z = 1; z <= n; z++){
                cout << "  ";
            }
            for(int j = 2; j <= i; j++){
                cout << "  ";
            }
            for(int k = n; k >= i; k--){
                    cout << "x ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Inputan Melewati Range Yang Diberikan.";
    }   
}