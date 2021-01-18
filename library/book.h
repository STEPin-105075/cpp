#ifndef __BOOK_H_
#define __BOOK_H_

#include<iostream>
#include<string>

class Book{
int m_Id;
std::string m_Name;
std::string m_Author;
std::string m_Publisher;
double m_price;
int m_pages;

public:
    Book();
    Book(int,std::string,std::string,std::string,double,int);
    Book(int,std::string,std::string,std::string);
    int getId() const;
    std::string Name() const;
    std::string Author() const;
    std::string Publisher() const;
    double getprice() const;
    int pages() const;
    void display();
};
#endif