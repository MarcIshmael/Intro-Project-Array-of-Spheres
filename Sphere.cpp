/*
* Author: Marc Ishmael
* Assignment Title: Program 20
* Assignment Description: This program prints
* data about spheres read from a file
* Due Date: 11/07/2016
* Date Created: 11/07/2016
* Date Last Modified: 11/07/2016
*/

#include "Sphere.h"
#include <cmath>
#include <string>

const double PI = 3.14159;

void Sphere::setRadius(double r)
{
    if(r >= 0)
    {
        radius = r;
    }
}

void Sphere::setColor(std::string c)
{
    color = c;
}

double Sphere::getRadius() const
{
    return radius;
}

std::string Sphere::getColor() const
{
    return color;
}

double Sphere::area()
{
    return 4*PI*pow(radius,2);
}

double Sphere::volume()
{
    return (4.0/3.0)*PI*pow(radius, 3);
}

Sphere::Sphere()
{
    radius = 1.0;
    color = "green";
}

Sphere::Sphere(double r)
{
    radius = r;
    color = "green";
}

Sphere::Sphere(double r, std::string c)
{
    radius = r;
    color = c;
}
