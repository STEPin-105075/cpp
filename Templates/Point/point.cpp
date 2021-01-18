#include"point.h"
#include <cmath>


template<typename T>
point<T>::point() : m_x(), m_y() {}
template<typename T>
point<T>:: point(T x, T y): m_x(x), m_y(y) {}
template<typename T>
void point<T>:: distanceFromOrigin()
{
    return sqrt((m_x*m_x)+(m_y*m_y));
}
template<typename T>
Quadrant point<T>::quadrant()
{
    if(m_x>=0 && m_y>=0)
    {
        return q1;
    }
    else if(m_x<=0 && m_y>=0)
    {
        return q2;
    }
    else if(m_x<=0 && m_y<=0)
    {
        return q3;
    }
    else
    return q4;
}
template<typename T>
void point<T> :: display()
{
    std::cout<< m_x << "," << m_y << "\n";
}


int main()
{
    point <int> a(2,6);
    point <float> b(2.3, -4.8);
    a.display();
    b.display();
    std::cout<<a.quadrant();
    std::cout<<b.quadrant();
return 0;

}