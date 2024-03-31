#include <iostream>
using namespace std;
int main(){
    system ("cls");
    int n, m;
    cout << "Masukkan banyak data pada array : "; // meminta pengguna untuk mengisi banyaknya elemen array
    cin >> n;

    int arr[n];
    int *ptrArr = arr;

    for (int i = 0; i < n; i++){
        cout << "Masukkan data ke-" << i+1 << " : "; // mengisi setiap elemen pada array dengan nilai yg di input
        cin >> arr[i];
    }
    
    system ("cls");
    for (int i = 0; i < n; i++){
        cout << "Elemen ke-" << i << ", nilai : " << arr[i] << ". Berada pada alamat : " << &ptrArr[i] << endl; // memanggil alamat array pada setiap elemennya
    }

    cout << "\nElemen array ke berapa yang anda ingin lihat alamatnya? [0-" << n-1 << "] : "; // meminta pengguna untuk mengisi index elemen array untuk melihat alamatnya
    cin >> m;
    if(m > n-1){
        cout << "Alamat dan nilai tidak ditemukan!";
    }
    else {
        cout << ptrArr + m << ", nilai : " << arr[m]; // menampilkan alamat pada elemen array beserta nilai nya yg telah diinput
    }
}