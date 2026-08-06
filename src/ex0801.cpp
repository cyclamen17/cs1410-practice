#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name;
    string nationality;

public:
    Author(const string& name, const string& nationality)
        : name(name), nationality(nationality) {}

    string getName() const { return name; }
    string getNationality() const { return nationality; }

    void setName(const string& name) { this->name = name; }
    void setNationality(const string& nationality) {
        this->nationality = nationality;
    }
};

class Book {
private:
    string title;
    int year;
    Author author;

public:
    Book(const string& t, int y, const Author& a)
        : title(t), year(y), author(a) {}

    string getTitle() const { return title; }
    int getYear() const { return year; }
    Author getAuthor() const { return author; }

    void setTitle(const string& t) { title = t; }
    void setYear(int y) { year = y; }
    void setAuthor(const Author& a) { author = a; }

    void show() const {
        int currentYear = 2026;
        int age = currentYear - year;

        cout << "─────────────────" << endl;
        cout << "Book: " << title << " (" << year << ")" << endl;
        cout << "Author: " << author.getName()
             << " [" << author.getNationality() << "]" << endl;
        cout << "Book Age: " << age << " years" << endl;
        cout << "─────────────────" << endl;
    }
};

int main() {
    Author a("Emily Dickinson", "American");
    Book b("The Daisy Follows Soft the Sun", 1865, a);

    b.show();

    return 0;
}