#include <iostream>
using namespace std;
// Mendefinisikan struct
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // Membuat objek dari struct Person
    Person person1;

    // Mengisi data ke dalam objek
    person1.name = "John";
    person1.age = 30;
    person1.height = 175.5;

    // Menampilkan data dari objek
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height (cm): " << person1.height << endl;

    return 0;
}
