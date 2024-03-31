#include <iostream>
using namespace std;
int main() {
    system ("cls");
    // Deklarasi dan inisialisasi string
    char str[] = "Hello, world!";

    // Pointer karakter yang menunjuk ke alamat karakter pertama dalam string
    char *ptr = str;

    // Menampilkan string menggunakan pointer
    cout << "String menggunakan pointer: ";
    while (*ptr != '\0') {  // Loop sampai karakter null-terminator
        cout << *ptr;  // Menampilkan karakter yang ditunjuk oleh pointer
        ptr++;              // Pindah ke karakter berikutnya dalam string
    }
    cout << endl;

    return 0;
}
