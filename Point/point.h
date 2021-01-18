#ifndef __POINT_H_
#define __POINT_H_


class Point
{
    int m_x,m_y;

    public:

    Point();
    Point(float,float);
    Point(const Point &);

    int distanceFromorigin(void);
    int quadrant(void);
    int isOrigin(void);
    int isOnXAxis(void);
    int isOnYAxis(void);
    //void display(void);


};


#endif //__POINT_H_
