#include <iostream>
using namespace std;

// Mendefinisikan class
class Person {
public: // Bagian akses
    // Variabel anggota (data member)
    string name;
    int age;
    double height;

    // Metode (fungsi anggota)
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    // Membuat objek dari class Person
    Person person1;

    // Mengisi data ke dalam objek
    person1.name = "John";
    person1.age = 30;
    person1.height = 175.5;

    // Memanggil metode dari objek
    person1.displayInfo();

    return 0;
}
