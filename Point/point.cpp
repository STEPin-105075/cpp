#include "point.h"
#include <math.h>

Point::Point():m_x(0),m_y(0)
{

}

Point::Point(float x,float y):m_x(x),m_y(y)
{

}

int Point::distanceFromorigin(void)
{
    int dist;
    dist = sqrt((m_x*m_x)+(m_y*m_y));
    return(dist);
}

int Point::quadrant(void)
{
    if(m_x==0)
    {
        if(m_y==0)
        {
            return(0);
        }
        else
        {
            return(-1);
        }
        
    }
    else if (m_y==0)
    {
        if(m_x==0)
        {
            return(0);
        }
        else
        {
            return(-2);
        }
        
    }
    
    else if(m_x>0)
    {
        if(m_y<0)
        {
            return(4);
        }
        else
        {
            return(1);
        }
        
    }
    else
    {
        if(m_y<0)
        {
            return(3);
        }
        else
        {
            return(2);
        }
        
    }
    
}

int Point::isOrigin(void)
{
    if(m_x==0 && m_y==0)
    {
        return(1);
    }
    else
    {
        return(0);
    }
    
}
int Point::isOnXAxis(void)
{
    if((m_y==0)&&(m_x>0))
    {
        return(1);
    }
    else
    {
        return(0);
    }
    
}
    
int Point::isOnYAxis(void)
{
    if((m_x==0)&&(m_y>0))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
// void display(void);