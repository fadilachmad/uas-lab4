#include <iostream>
#include <vector>
using namespace std;
int main(){
    system("cls");
    
    // Deklarasi vector : vector <tipe_data> nama_vector
    vector <int> vec = {2, 3, 7};

    // Mengakses elemen vektor dan mencetaknya
    cout << "Isi nilai pada vektor : ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;   

    // Mengetahui banyak data yang tersimpan dalam vector
    cout << "Banyak data pada vektor : " << vec.size() << endl << endl; 

    // Menambahkan elemen ke vektor dari belakang
    vec.push_back(19);
    vec.push_back(14);

    // Untuk menambahkan elemen ke vektor dari belakang secara banyak bisa menggunakan fungsi insert :
    // vec.insert(numbers.end(), {17, 19, 23});


    cout << "Isi nilai pada vektor setelah ditambah nilai dari belakang : ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    // Menghapus elemen terakhir dari vektor
    vec.pop_back();

    cout << "Isi nilai pada vektor setelah dihapus 1 nilai dari belakang : ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

     // Menyisipkan elemen baru ke dalam vektor pada posisi tertentu
    vec.insert(vec.begin() + 2, 5); // Menyisipkan angka 10 di posisi ke-2
    vec.insert(vec.begin() + 4, {11, 13, 17}); // Menyisipkan angka 20, 30, dan 40 di posisi ke-4

    cout << "Isi nilai pada vektor setelah disisipkan nilai : ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    // Mengetahui banyak data yang tersimpan dalam vector setelah ditambahkan data
    cout << "\nBanyak data pada vektor saat ini : " << vec.size() << endl;

    // Memeriksa data pada vektor apakah kosong apa tidak
    cout << "Apakah data pada vector kosong? : " << vec.empty();

    // Menghapus seluruh seluruh data pada vektor
    vec.clear();
    cout << "\n\nHapus seluruh data vektor menggunakan vec.clear\n";
    cout << "Banyak data pada vektor saat ini : " << vec.size() << endl;

    // Memeriksa kembali data pada vektor apakah kosong apa tidak
    cout << "Apakah data pada vector kosong? : " << vec.empty();
}