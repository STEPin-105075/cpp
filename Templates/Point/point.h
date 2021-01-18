#ifndef __POINT_H
#define __POINT_H

#include<iostream>

enum Quadrant { q1=1, q2, q3, q4};

template<class T>
class point
 {
    T m_x;
    T m_y;
    public:
        point();
        point(T,T);
        void distanceFromOrigin();
        Quadrant quadrant();
        void display();
};

#endif