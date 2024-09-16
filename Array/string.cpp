#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    system("cls");
    string a = "abcdefghijklmnopqrstuvwxyz :3";
    cout << a << endl;

    // ukuran panjang array string
    cout << "Ini ukuran panjang array string a : ";
    cout << a.length() << endl << endl;

    // pengurutan arrray string
    cout << "Ini mengurutkan array string menjadi kalimat\n";
    cout << 
    a[0] << a[10] << a[20] << 
    a[26] << a[18] << a[0] << a[24] << a[0] << a[13] << a[6] << 
    a[26] << a[10] << a[0] << a[12] << a[20] << a[26] <<
    a[27] << a[28] << endl << endl;

    // penggabungan string (concatenation)
    cout << "Ini menggabungkan kata\n";
    string kata1 = "hello";
    string kata2 = "world!";
    string kata3 = " ";
    cout << kata1 + kata3 + kata2 << endl << endl;

    // merubah isi string
    cout << "Ini mengubah isi string\n";
    kata1 = kata2;
    cout << kata1 << endl << endl;

    // mengambil sebagian huruf ke n dan sepanjang m
    cout << "Ini substring\n";
    cout << kata2.substr(5,1) << kata1 << endl << endl;

    // reverse kata
    cout << "Ini reverse string\n";
    reverse(kata1.begin(), kata1.end());
    cout << kata1;
    
}