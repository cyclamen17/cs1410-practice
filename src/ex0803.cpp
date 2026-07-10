#include <iostream>
#include <string>
#include "book.h"

using namespace std;

class Book {
private:
    string title;
    int year;
    Author author;

public:
    Book(const string& title, int year, const Author& author)
        : title(title), year(year), author(author) {}

    string getTitle() const {
        return title;
    }

    int getYear() const {
        return year;
    }

    Author getAuthor() const {
        return author;
    }

    void setTitle(const string& title) {
        this->title = title;
    }

    void setYear(int year) {
        this->year = year;
    }

    void setAuthor(const Author& author) {
        this->author = author;
    }

    void show() const {
        const int currentYear = 2026;
        int age = currentYear - year;

        cout << "─────────────────" << endl;
        cout << "Book: " << title << " (" << year << ")" << endl;
        cout << "Author: " << author.getName()
             << " [" << author.getNationality() << "]" << endl;
        cout << "Book age: " << age << " years" << endl;
        cout << "─────────────────" << endl;
    }
};

int main() {
    Author a("Emily Dickinson", "American");
    Book b("The Daisy Follows Soft the Sun", 1865, a);

    b.show();

    return 0;
}