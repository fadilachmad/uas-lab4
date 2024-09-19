#include <iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = n; k > i; k--){
            cout << "*";
        }
        for(int l = n; l > i+1; l--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1; i < n; i++){
        for(int j = n-1; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        for(int l = 0; l < i+1; l++){
            cout << "*";
        }
        cout << endl;
    }
}