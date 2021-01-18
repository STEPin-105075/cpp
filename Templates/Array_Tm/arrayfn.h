#ifndef __ARRAYFN_H_
#define __ARRAYFN_H_

#include<iostream>

template<class T>
class Myarray{
T m_arr();
T m_len();
public:
    Myarray();
    Myarray(T);
    ~Myarray();
    void search();
    void sum();
    void min();
    void max();
    void reverse();
    void sort();
    void append();
    void at();
};


#endif