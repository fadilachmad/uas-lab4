#include <iostream>
using namespace std;
int main(){
    system ("cls");
    int n;
    cout << "input angka : ";
    cin >> n;

    cout << "\nPola 1" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 3" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 2; j <= i; j++){
            cout << " ";
        }
        for(int k = n; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 4" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 5" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        for (int l = 2; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 6" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << " ";
        }
        for (int k = n; k >= i; k--){
            cout << "*";
        }
        for (int l = n; l >= i+1; l--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 7" << endl;
    for (int i = 1; i < n; i++){
        for (int j = n; j >= i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        for (int l = 2; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << " ";
        }
        for (int k = n; k >= i; k--){
            cout << "*";
        }
        for (int l = n; l >= i+1; l--){
            cout << "*";
        }
        cout << endl;
    }
}