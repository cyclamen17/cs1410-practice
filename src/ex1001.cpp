#include <iostream>
#include <vector>

using namespace std;

class Animal {
public:
    void speak () {
        cout << "Some noise\n";
    }
    ~Animal() {
        cout << "Animal cleaning\n";
    }
};

class Mouse : public Animal {
public:
    void speak () {
        cout << "Squeak\n";
    }
    ~Mouse() {
        cout << "Mouse cleaning\n";
    }
};

    class Cat : public Animal {
public:
    void speak () {
        cout << "Meow\n";
    }
    ~Cat() {
        cout << "Cat cleaning\n";
    }
};

int main() {
    vector<Animal*> pets;
    pets.push_back(new Mouse());
    pets.push_back(new Cat());

    for(Animal* pet : pets){
        pet->speak();
    }

    for(Animal* pet : pets){
        delete pet;
    }

    return 0;
}