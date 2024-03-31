#include <iostream>
using namespace std;
int main(){
    system("cls");
    // int a = 0;
    // int *ptrA = &a;
    // while(a < 20){
    //     a++;
    //     if (a % 2 != 0){
    //         cout << a << "\t" << ptrA << endl;
    //     }
    // } 
    // hasil alamat dari program ini sama karna hanya semua angka berasal dari variabel yg sama yaitu a dan hanya memiliki 1 alamat memori
    
    int a[10] = {1,3,5,7,9,11,13,15,17,19};
    int *ptrA = a;

    int **incPtr = &ptrA;
    for(int i = 0; i < 10; i++){
        cout << *ptrA << " " << *incPtr << endl;
        *incPtr = ptrA + 1;

    
    }
    
}