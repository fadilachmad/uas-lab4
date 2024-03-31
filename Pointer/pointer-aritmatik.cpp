#include <iostream>
using namespace std;
int main (){
    int arr[5] = {9, 8, 7, 6, 5};
    int *ptrArr = arr; // Pointer to the first element of the array
    // Accessing array elements using pointer arithmetic
    cout << ptrArr << endl; // alamat awal dari arr
    cout << *ptrArr << endl; // memanggil nilai arr[0] dengan menggunakan addres dari arr
    cout << *(ptrArr + 2) << endl << endl; // memanggil nilai arr[2] dengan menggunakan addres dari arr

    ptrArr = &arr[3];
    cout << ptrArr << endl;
    cout << *ptrArr << endl;
    cout << ptrArr + 1 << endl;
    cout << *ptrArr + 1 << endl;
}