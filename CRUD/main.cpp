#include <iostream>
#include <string>
using namespace std;
void menu(){
    cout << "Program CRUD\n";
    cout << "==========================\n";
    cout << "1. Create\n";
    cout << "2. Read\n";
    cout << "3. Update\n";
    cout << "4. Delete\n";
    cout << "5. Exit\n";
    cout << "==========================\n";
    cout << "Input [1-5] : ";
}

int create(int input){
    string nama[5];
    cout << "Masukkan Nama : ";
    cin >> nama;
}

int main(){
    int input;
    menu();
    cin >> input;
    while(input != 5){
        switch(input){
            case 1 : cout << "Masukkan Nama : ";
            break;
            case 2 : cout << "1. Create\n";
            break;
            case 3 : cout << "1. Create\n";
            break; 
            case 4 : cout << "1. Create\n";
            break;
            case 5 : cout << "Exit...";
            break;
            default : cout << "Input not found";
            break;
        }
    }
}