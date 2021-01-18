#include "box.h"
using namespace std;

Box::Box():m_length(0),m_breadth(0),m_height(0)
{

}

Box::Box(int length, int breadth, int height):m_length(length),m_breadth(breadth),m_height(height)
{

}

Box::Box(int length):m_length(length),m_breadth(0),m_height(0)
{

}

int Box::length(void)
{
    return(m_length);
}

int Box::breadth(void)
{
    return(m_breadth);
}
int Box::height(void)
{
    return(m_height);
}

int Box::volume(void)
{
    return(m_height*m_breadth*m_length);
}