#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name, nationality;

public: 
Author(const string& names, const string& nationality): name(name), nationality(nationality){}

string getName() const {return name;}
string getNationality() const {return nationality;}

void setName(const string& name){this->name = name;}
void setNationality(const string& nat) {nationality = nat;}

};

class Book{
private: 
    string title;
    int year;
    Author author;

public: 
    Book(const string& t, int y, const Author& a):title(t), year(y), author(a){}

    string getTitle() const {return title;}
    int getYear() const {return year;}
    Author getAuthor() const {return author;}

    void setTitle(const string& a) {title = a;}
    void setYear(int y){year = y;}
    void setAuthor(const Author& a) {author = a;}

    void show() const{
        cout << "Book:" << title << "(" << year << ")\n"
        << "  Author:" << author.getName() << "[" << author.getNationality() << ")\n";

    }
};

int main(){
    Author a ("Emily Dickinson", "American");
    Book b("The Daisy Follows Soft the Sun", 1865, a);

    b.show();
    return 0;
}