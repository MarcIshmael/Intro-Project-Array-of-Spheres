/*
* Author: Marc Ishmael
* Assignment Title: Program 20
* Assignment Description: This program prints
* data about spheres read from a file
* Due Date: 11/07/2016
* Date Created: 11/07/2016
* Date Last Modified: 11/07/2016
*/

#ifndef SPHERE_H_INCLUDED
#define SPHERE_H_INCLUDED
#include <string>

class Sphere
{
private:
    double radius;
    std::string color;
public:
    //Setters
    /*
    * description: set radius of sphere
    * return: none
    * precondition:
    * postcondition: sets radius
    */
    void setRadius(double r);
    /*
    * description: set color of sphere
    * return: none
    * precondition:
    * postcondition: sets color
    */
    void setColor(std::string c);

    /*
    * description: get radius of sphere
    * return: double
    * precondition: radius is set
    * postcondition: returns radius
    */
    double getRadius() const;
    /*
    * description: get color of sphere
    * return: string
    * precondition: color is set
    * postcondition: returns color
    */
    std::string getColor() const;

    /*
    * description: return area of sphere
    * return: double
    * precondition: radius is set
    * postcondition: returns area
    */
    double area();
    /*
    * description: return volume of sphere
    * return: double
    * precondition: radius is set
    * postcondition: returns volume
    */
    double volume();

    //Default Constructor
    Sphere();
    //Custom constructor for only radius
    Sphere(double r);
    //Custom constructor for radius & color
    Sphere(double r, std::string c);
};

#endif // SPHERE_H_INCLUDED
