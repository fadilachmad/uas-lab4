#include <iostream>
using namespace std;
int main(){
    int a = 5, b = 20;
    int *ptrA = &a, *ptrB = &b;

    cout << "nilai a = " << a << endl;
    cout << "nilai b = " << b << endl;
    cout << "alamat a = " << ptrA << endl;
    cout << "alamat b = " << ptrB << endl << endl;

    if(*ptrA > *ptrB){
        cout << "Nilai 'a' > 'b' \n"; 
    }
    else if(*ptrA < *ptrB){
        cout << "nilai 'a' < 'b' \n";
    }
    else{
        cout << "nilai 'a' = 'b' \n";
    }

    if(ptrA > ptrB){
        cout << "Nilai alamat 'a' > 'b' \n"; 
    }
    else if(ptrA < ptrB){
        cout << "nilai alamat 'a' < 'b' \n";
    }
    else{
        cout << "nilai alamat 'a' = 'b' \n";
    }    
}