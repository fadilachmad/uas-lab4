#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    system ("cls");
    string kata = "I ENIL SIHTHSIREBBIG S";
    cout << kata << endl << endl;
    string fix1 = kata.substr(0,11);
    cout << fix1 << endl;
    string fix2 = kata.substr(11,11);
    cout << fix2 << endl << endl;

    reverse(fix1.begin(), fix1.end());
    reverse(fix2.begin(), fix2.end());
    cout << fix1 << fix2;
}