#include<iostream>
using namespace std;
template<typename T>


T sum(T x ,T y)
{
T res;
res=x+y;
return res;
}

int main()
{
    
    int a,b,c;
    float x,y,z;
    c=sum(10,20);
    z=sum(10.2,22.3);
    cout<<c;
    cout<<z;
    }