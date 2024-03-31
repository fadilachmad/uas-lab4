#include <iostream>
using namespace std;
int main(){
    char word[] = "KOMPUTER";
    char *ptrWord = &word[4]; // menyimpan alamat elemen ke-4 pada array kedalam pointer
    cout << *ptrWord; // mengembalikan nilai elemen yg telah disimpan
}