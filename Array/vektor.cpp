#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector <int> iniVektor;
    cout << "panjang awal vektor : " << iniVektor.size() << endl;
    iniVektor.push_back(5);
    cout << "panjang vektor setelah ditambah elemen : " << iniVektor.size() << endl;
    cout << "isi vektor pada index 0 : " << iniVektor[0];
}