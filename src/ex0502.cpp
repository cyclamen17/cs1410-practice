#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string fullName;

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Hey! You are " << age << " years old! And your full name is "
         << fullName << endl;

    return 0;
}