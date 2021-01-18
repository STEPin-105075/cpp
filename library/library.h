#ifndef __LIBRARY_H_
#define __LIBRARY_H_

#include "book.h"
#include<list>

class Library{
std::list<Book> books;
public:
    void addBook(int,std::string,std::string,std::string);
    void removeBook(int);
    void displayAll();
    Book* findBookbyID(int);
    double findAveragePrice();
};

#endif