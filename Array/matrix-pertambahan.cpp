#include <iostream>
using namespace std;
int main(){
    system("cls");
    int n, m;
    cout << "Penambahan 2 buah Matriks\n";
    cout << "Masukkan banyak baris pada matriks : ";
    cin >> n;
    cout << "Masukkan banyak kolom pada matriks : ";
    cin >> m;

    system("cls");
    int arr1[n][m];
    cout << "Matriks 1\n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << "masukkan nilai pada baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> arr1[i][j];
        }
    }

    system("cls");
    int arr2[n][m];
    cout << "Matriks 2\n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << "masukkan nilai pada baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> arr2[i][j];
        }
    }
    system("cls");
    cout << "Matriks 1\n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nMatriks 2\n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Penambahan\n";
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}