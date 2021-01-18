#ifndef __CMPLX_H_
#define __CMPLX_H_

#include<iostream>

template <class T>
class Complex{
T m_real;
T m_imag;
public:
    void display();
    Complex();
    Complex(T,T);
};

#endif