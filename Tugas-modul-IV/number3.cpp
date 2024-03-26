// kabisat
#include <iostream>
using namespace std;
int main () 
{
    system ("cls");
    int year;
    int interval;
    cout << "masukkan tahun : ";
    cin >> year;
    cout << "masukkan interval : ";
    cin >> interval;
    if (interval >= 0){
        for (int i = 0; i <= interval; i++)
        {
            if (year % 4 == 0) {
                cout << year << " merupakan kabisat" << endl;
            }
            else {
                cout << year << " bukan kabisat" << endl;
            }
            year++;
        }
    }

    else {
        for (int i = 0; i >= interval; i--)
        {
            if (year % 4 == 0) {
                cout << year << " merupakan kabisat" << endl;
            }
            else {
                cout << year << " bukan kabisat" << endl;
            }
            year--;
        }
    }
}