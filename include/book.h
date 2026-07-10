#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <string>
#include "author.h"

class Book{
private: 
    std::string title;
    int year;
    Author author;

public: 
    Book(const std::string& t, int y, const Author& a):title(t), year(y), author(a){}

    std::string getTitle() const {return title;}
    int getYear() const {return year;}
    Author getAuthor() const {return author;}

    void setTitle(const std::string& a) {title = a;}
    void setYear(int y){year = y;}
    void setAuthor(const Author& a) {author = a;}

};

#endif