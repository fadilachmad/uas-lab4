#include <iostream>
using namespace std;
int main(){
    system("cls");
    int a = 0;
    int *ptrA = &a;
    while(a < 20){
        a++;
        if (a % 2 != 0){
            cout << a << "\t" << ptrA << endl;
        }
    }
}