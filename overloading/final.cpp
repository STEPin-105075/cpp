#include <cstring>
#include <iostream>
#include "stdint.h"
using namespace std;
class Mystring
{
private:
    /* data */
    uint8_t len;
    char* array;

public:
    Mystring(/* args */);
    Mystring(const char*);
    Mystring(const Mystring&);
    Mystring& operator = (const Mystring&);
 
    Mystring operator +(const Mystring &ref);
    Mystring operator +(const char* q);
    Mystring operator +=(const char* q);
    Mystring& operator == (const Mystring& ref);
    Mystring& operator << (const Mystring& ref);
    Mystring& operator >> (const Mystring& ref);
    ~Mystring();
    void display();
    friend istream& operator>>(istream& in, const Mystring& dt);
    friend ostream& operator<<(ostream& os, const Mystring& S1);
};

Mystring :: Mystring() :
 len(0) , array(nullptr)
{
   
}
Mystring :: Mystring(const char* ptr):
 len(strlen(ptr)) ,array(nullptr)
{
//cout<<"Entered this member function\n";
  array = new char[len + 1];
  strncpy(array, ptr,len);

}
Mystring :: Mystring(const Mystring& ref) :
    len(ref.len),array(nullptr)
{
    array = new char[len + 1];
    strncpy(array, ref.array,len);
}

Mystring& Mystring :: operator = (const Mystring& ref)
{
    strncpy(this->array, "0", this->len);
    this->len = ref.len;
    strncpy(this->array, ref.array, this->len);
    return *this;
}
Mystring :: ~Mystring()
{
    if (nullptr != array)
         delete[] array;
}

Mystring Mystring :: operator +(const char* s)
{
    Mystring E;
    E.len=this->len+strlen(s);
    E.array = new char [E.len + 1];
    E.array = strcat(this->array,s);
    return E;
}

Mystring& Mystring::operator == (const Mystring& ref)
{

    this->len = ref.len;
    int a = strcmp(this->array, ref.array);
    if (a ==0)
    cout<<"They are equal";
    else
    {
        cout<<"Not equal";
    }
    
    return *this;
    
}
/*Mystring& Mystring::operator << (const Mystring& ref)
{
     Mystring s;
     s << ref.array;
     return s;
}*/
ostream& operator<<(ostream& os, const Mystring& dt)
{

    os << dt.array;
    return os;
}
istream& operator>> (istream& in, const Mystring& dt)
{

    in >> dt.array;
    return in;
}
void Mystring :: display()
{
    std::cout << array << "\n";
}
int main()
{
    Mystring S1("Hello");
    Mystring S2("");
    Mystring S3("");

/*
  S2 = S1 + xyz
*/

  S2 = S1 + "xyz";
  S2.display();

/*
  S2 = "Welcome"
*/

S2 = "Welcome";
S2.display();

/*
s1==s2
*/
S1 == S2;

/*
cout<<S1;
*/
cout <<"\n" <<S1;

/*
cin>>s1;
*/
cin >> S3;
S3.display();

return 0;
}