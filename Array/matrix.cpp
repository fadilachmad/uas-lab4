#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Anda akan membuat sebuah matriks?\n";
    cout << "masukkan banyak baris : ";
    cin >> n;
    cout << "masukkan banyak kolom : ";
    cin >> m;

    int matrix[n][m];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << "Masukkan nilai baris ke-" << i+1 << ", kolom ke-" << j+1 << " : ";
            cin >> matrix[i][j];
        }
    }

	cout << "\nMatrix yang anda masukkan : \n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}