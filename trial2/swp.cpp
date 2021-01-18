#include<iostream>
using namespace std;
template<typename T>

T swap(T a, T b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x=10;
    int y=20;
    int c = swap(10,20);
    cout<< c;
    return 0;
}

