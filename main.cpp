/*
* Author: Marc Ishmael
* Assignment Title: Program 20
* Assignment Description: This program prints
* data about spheres read from a file
* Due Date: 11/07/2016
* Date Created: 11/07/2016
* Date Last Modified: 11/07/2016
*/

 /*
 * Data Abstraction:
 * 		Input stream declared
 *      Six variables relating to process of building
 *      return table are declared/initialized
 * Input:
 * 		Program asks uses for datafile name
 * Process:
 * 		Program checks to ensure file opened
 *      Program looks through line by line, calling method
 *      functions from sphere.cpp
 * Output:
 * 		Info contained in each sphere is displayed in table
 *      Data on all spheres displayed after
 * Assumptions:
 * 		It is assumed that the user eventually enters
 *      A valid file name.
 */

#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include "Sphere.h"

using namespace std;

int main()
{
    /*Data Abstraction*/
    ifstream inputFile;
    string fileName;

    string color;
    double radius, totalArea = 0, redNum = 0.0;
    int num = 0, volNum = 0;

    //Array Declaration
    const int SIZE = 100;
    Sphere someSphere[SIZE];

    /*Input*/
    cout << "Enter file name: ";
    getline(cin, fileName);
    cout << fileName << endl;

    /*Process and output*/

    inputFile.open(fileName.c_str());
    //Check to ensure file opens
    if(inputFile.fail())
    {
        do{
            cout << "ERROR: File Not Open." << endl;
            cout << "Enter file name: ";
            getline(cin, fileName);
            cout << fileName << endl;
            inputFile.open(fileName.c_str());
        }while(inputFile.fail());
    }

    cout << "   Number" << "    Radius" << "    Color"
    << "    Area" << "  Volume" << endl;
    //Skip first two lines of file
    getline(inputFile, fileName);
    getline(inputFile, fileName);

    while(inputFile >> radius >> color)
    {
        someSphere[num].setColor(color);
        someSphere[num].setRadius(radius);

        if(color == "red")
        {
            redNum++;
        }

        cout << "     " << num << "    ";
        cout << fixed << setprecision(2) <<
        someSphere[num].getRadius() << "    ";
        cout << fixed << setprecision(2) <<
        someSphere[num].getColor() << "    ";
        cout << fixed << setprecision(2) <<
        someSphere[num].area() << "    ";
        cout << fixed << setprecision(2) <<
        someSphere[num].volume() << "   " << endl;

        if(someSphere[num].volume() > 215)
        {
            volNum++;
        }
        //Total area for later division
        totalArea += someSphere[num].area();
        //Add to count of spheres
        num++;
    }

    /*Secondary (non array) Output*/

    cout << "Total Number of Spheres = " << num << "." << endl;
    cout << (redNum/(num))*100 << "% of Spheres are red." << endl;
    cout << volNum << " Spheres have a Volume over 215." << endl;
    cout << "Average Area = " << totalArea/(num) << endl;


    inputFile.close();

    return 0;
}
