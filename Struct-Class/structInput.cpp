#include <iostream>
using namespace std;

struct penanggalan {
    int tanggal, tahun;
    string hari, bulan;
};

int main(){
    penanggalan data;

    cout << "Tanggal berapa sekarang? : ";
    cin >> data.tanggal;
    cout << "Hari apa sekarang? : ";
    cin >> data.hari;
    cout << "Bulan apa sekarang? : ";
    cin >> data.bulan;
    cout << "Tahun berapa sekarang? : ";
    cin >> data.tahun;
    cout << "Hari : " << data.hari << endl;
    cout << "Tanggal : " << data.tanggal << endl;
    cout << "Bulan : " << data.bulan << endl;
    cout << "Tahun : " << data.tahun << endl;
}
