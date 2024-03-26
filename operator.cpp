#include <iostream>
using namespace std;

int main()
{
    system ("cls");
    float a, b;
    char aritmatika;
    cout << "Input bilangan pertama : ";
    cin >> a;
    cout << "Input operator (+,-,*,/) : ";
    cin >> aritmatika;
    cout << "Input bilangan kedua : ";
    cin >> b;
    cout << "hasilnya adalah : ";
    
    if (aritmatika == '+')
    {
        cout << a + b;
    }
    else if (aritmatika == '-')
    {
        cout << a - b;
    }
    else if (aritmatika =='*')
    {
        cout << a * b;
    }
    else if (aritmatika == '/')
    {
        cout << a / b;
    }
    else
    {
        cout << " Operator salah";
    }
}
