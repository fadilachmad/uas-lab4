#include <iostream>
using namespace std;
int main(){
    system("cls");
    int n, m;
    cout << "PERKALIAN 2 BUAH MATRKS\n\n";
    cout << "DISCLAIMER!!!\n";
    cout << "SAAT INI PERKALIAN 2 BUAH MATRIKS HANYA BISA DILAKUKAN PADA MATRIKS YANG BERORDO SAMA\n";
    cout << "TOLONG MASUKKAN BARIS DAN KOLOM DENGAN ANGKA YANG SAMA!\n\n";
    ulang :
    cout << "Masukkan banyak baris pada matriks : ";
    cin >> n;
    cout << "Masukkan banyak kolom pada matriks : ";
    cin >> m;

    if (n != m){
        cout << "\nSAAT INI PERKALIAN 2 BUAH MATRIKS HANYA BISA DILAKUKAN PADA MATRIKS YANG BERORDO SAMA\n";
        cout << "TOLONG MASUKKAN BARIS DAN KOLOM DENGAN ANGKA YANG SAMA!\n\n";
        goto ulang;
    }
    else {
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
                cout << arr1[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "\nMatriks 2\n";
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cout << arr2[i][j] << "\t";
            }
            cout << endl;
        }

        int arrKali[n][m];
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                arrKali[i][j] = 0;
                for (int k = 0; k < n; ++k){
                    arrKali[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        cout << "\nHasil Perkalian\n";
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                cout << arrKali[i][j] << "\t";
            }
            cout << endl;
        }
    }
}