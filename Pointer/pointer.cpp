#include <iostream>
using namespace std;
int main(){
    int x = 10;
    cout << x << endl;
    int *ptr = &x; // Assigning the address of x to ptr
    cout << ptr << endl;
    int value = *ptr; // Dereferencing ptr to get the value stored at the address
    cout << value << endl << endl;
}