#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "masukkan n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "x ";
        }
        for(int k = n; k >= i+1; k--){
            cout << "  ";
        }
        for(int l = n; l >= i+1; l--){
            cout << "  ";
        }
        for(int m = 1; m <= i; m++){
            cout << "x ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i+1; j--){
            cout << "  ";
        }
        
        for(int k = 1; k <= i; k++){
            cout << "x ";
        }
        for(int l = 1; l <= i; l++){
            cout << "x ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n*2; i++){
        for(int j = 1; j <= n*2; j++){
            cout << "x ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "  ";
        }
        for(int k = n; k >= i+1; k--){
            cout << "x ";
        }
        for(int l = n; l >= i+1; l--){
            cout << "x ";
        }
        for(int m = 1; m <= i; m++){
            cout << "  ";
        }
        cout << endl;
    }
    
}