#include <iostream>
using namespace std;
int main(){
    int y = 20;
    cout << y << endl; // memanggil nilai y
    cout << &y << endl << endl; // memanggil alamat variabel y

    int *ptr2 = &y; // memasukkan alamat variabel y kedalam pointer ptr2
    cout << *ptr2 << endl; // memanggil nilai yang ada pada pointer ptr2
    cout << ptr2 << endl << endl; // memanggil ptr2, yaitu alamat dari var y

    int **ptr_to_ptr = &ptr2; // memasukkan alamat dari ptr2(alamat var y) kedalam pointer ptr-to-ptr
    cout << **ptr_to_ptr << endl; // memanggil nilai yang ada pada pointer ptr-to-ptr, yaitu nilai pada pointer ptr2, yang juga merupakan nilai dari var y
    cout << *ptr_to_ptr << endl; // memanggil ptr-to-ptr, yaitu alamat dari ptr2 yg juga merupakan alamat dari var y
}