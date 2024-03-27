#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    system ("cls");
    int gol, anak, gajiAnak;
    char nama[30];
    float gajiGol, terimaGaji, gajiAkhir;

    cout << "Masukkan nama anda : ";
    cin >> nama;
    cout << "Anda pegawai golongan berapa (1,2,3) : ";
    cin >> gol;
    if (gol == 1)
    {
        gajiGol = 5000000;
    }
    else if (gol == 2)
    {
        gajiGol = 3000000;
    }
    else if (gol == 3)
    {
        gajiGol = 2500000;
    }
    else 
    {
        gajiGol = 0;
    }

    cout << "Tanggungan anak  : ";
    cin >>anak;
    switch (anak)
    {
    case 1:
        gajiAnak = 500000;
        break;
    case 2:
        gajiAnak = 1000000;
        break;
    case 3:
        gajiAnak = 2250000;
        break;
    default:
        gajiAnak = 0;
        break;
    }


    gajiAkhir = gajiGol - (gajiGol*5/100);
    terimaGaji = gajiAkhir + gajiAnak;

    cout << fixed << setprecision(2);
    cout << "Gaji anda sebesar : Rp." << gajiAkhir;
    cout << "\nGaji yang anda terima (+ Tambahan-Anak) : Rp." << terimaGaji;
}