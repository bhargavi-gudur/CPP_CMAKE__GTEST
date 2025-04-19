/**
 * @file areacircle.cpp
 * @author gandlabhargavi
 * @brief   This file contains the implementation of the areacircle class.
 *          It includes the constructor, destructor, and member functions to set and get the radius and area of a circle.
 * @version 0.1
 * @date 2025-04-17
 *
 */

#include <iostream>
#include "areacircle.hpp"
using namespace std;

void areacircle::setRadius(double r) // Function to set the radius of the circle
{
    radius = r;
    area = 3.14 * radius * radius; // Calculate area using the formula πr²
}

double areacircle::getRadius() const // Function to get the radius of the circle
{
    return radius;
}

void areacircle::setArea(double a) // Function to set the area of the circle
{
    area = a;
}

double areacircle::getArea() const // Function to get the area of the circle
{
    return area;
}

areacircle::~areacircle() // Destructor
{
    cout << "Destructor called" << endl;
}

int main()
{
    areacircle circle; // Create an object of the areacircle class
    double radius;
    cout << "Enter the radius of the circle: ";

    cin >> radius;                                                         // Input radius from user
    circle.setRadius(radius);                                              // Set the radius using the member function
    cout << "The radius of the circle is: " << circle.getRadius() << endl; // Output the radius
    cout << "The area of the circle is: " << circle.getArea() << endl;     // Output the area
    return 0;
}
