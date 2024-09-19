#include <iostream>
using namespace std;

void nilai(int n){
    switch (n)
    {
    case 0 ... 64 : 
        cout << "D";
        break;
    case 65 ... 74 : 
        cout << "C";
        break;
    case 75 ... 84 : 
        cout << "B";
        break;
    case 85 ... 100 : 
        cout << "A";
        break;
    default:
        cout << "Not in the range num";
        break;
    }
}

int main(){
    int num;
    cout << "Enter a value among 0-100 : ";
    cin >> num;
    cout << "Index : ";
    nilai(num);
}