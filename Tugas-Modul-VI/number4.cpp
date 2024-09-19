#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    int n, nilai;
    cout << "Masukkan n: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "angka : ";
        cin >> nilai;
        vec.push_back(nilai);
    }

    system("cls");
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Panjang vektor : " << vec.size() << endl;
    for(int i = 0; i < n; i++){
        cout << vec[i] << endl;
    }
    vec.clear();
    cout << "Panjang vektor : " << vec.size();
}