#include "library.h"
#include "book.h"

void Library :: addBook(int m_Id, std::string m_Name, std::string m_Author, std::string m_Publisher){
    books.push_back(Book(m_Id, m_Name, m_Author, m_Publisher));
}

void Library :: displayAll(){
    std::list<Book>::iterator iter;
    for(iter=books.begin(); iter!=books.end(); ++iter)
        iter->display();
}

Book* Library ::findBookbyID(int key) {
  std::list<Book>::iterator iter;
    for(iter=books.begin();iter!=books.end(); ++iter)
        if(iter->getId()==key)
            return &(*iter);
  return nullptr;
}

void Library :: removeBook(int Id)
{
    std::list<Book>::iterator iter;
  for(iter=books.begin();iter!=books.end();++iter)
    if(iter->getId()== Id) break;
  if(iter!=books.end())
     books.erase(iter);
}

double Library::findAveragePrice() {
  double totalPrice=0;
  std::list<Book>::iterator iter;
  for(iter=books.begin(); iter!=books.end(); ++iter){
           totalPrice += iter->getprice();
    }
  return totalPrice/books.size();
}