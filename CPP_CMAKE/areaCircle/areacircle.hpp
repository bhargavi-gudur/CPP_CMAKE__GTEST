#ifndef AREA_CIRCLE_HPP
#define AREA_CIRCLE_HPP

#include <iostream>

using namespace std;
class areacircle
{
private:
    double radius;
    double area;
public:
    void setRadius(double r);
    double getRadius() const;
    void setArea(double a);
    double getArea() const;
    ~areacircle();
};

#endif