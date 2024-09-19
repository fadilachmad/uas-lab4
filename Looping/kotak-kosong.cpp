#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "n : ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "* ";
        }
        for(int k = 1; k <= i-1; k++){
            cout << "  ";
        }
        for(int l = 1; l <= i-1; l++){
            cout << "  ";
        }
        for(int m = n; m >= i; m--){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        for(int k = n; k >= i+1; k--){
            cout << "  ";
        }
        for(int l = n; l >= i+1; l--){
            cout << "  ";
        }
        for(int m = 1; m <= i; m++){
            cout << "* ";
        }
        cout << endl;
    }
}