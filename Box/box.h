#ifndef __BOX_H_
#define  __BOX_H_
#include <iostream>
#include <string.h>
using namespace std;

class Box
{
    int m_length,m_height,m_breadth;

    public:

    Box();
    Box(int, int, int);
    Box(int);
    //Box(const Box &);

    int length(void);
    int breadth(void);
    int height(void);
    int volume(void);

};





#endif //__BOX_H_