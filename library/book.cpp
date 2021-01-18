#include "book.h"

Book :: Book(): m_Id(0), m_Name(""), m_Author(""), m_Publisher(""), m_price(0), m_pages(0){}
Book::Book(int Id, std::string Name, std::string Author, std::string Publisher, double price, int pages) : m_Id(Id), m_Name(Name), m_Author(Author), m_Publisher(Publisher), m_price(price), m_pages(pages){}

int Book::getId() const{
    return m_Id;
}
std::string Book::Name() const{
    return m_Name;
}
std::string Book::Author() const{
    return m_Author;
}
std::string Book::Publisher() const{
    return m_Publisher;
}
double Book::getprice() const{
    return m_price;
}
int Book::pages() const{
    return m_pages;
}
void display()
{
    std::cout<<"Book ID: "<< m_Id<< "\n";
}