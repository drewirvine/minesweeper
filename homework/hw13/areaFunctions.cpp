/****************************************************************************
 *
 * Asgn.13: Three functions for computing area
 *
 * File Name:  area.cpp
 * Course:     CPTR 141
 */

#include <cmath> // for sqrt
using namespace std;

#include "areaFunctions.h"

// Area of Circle: Double Radius
double area(double circleRadius) {
  return (PI)*pow(circleRadius, 2);

}

// Area of a rectangle: Double Length, Double Width
double area(double recLength, double recWidth) {
    return recLength * recWidth;
}


// Area of a triangle: Double side1, double side2, double side3
double area(double sideOne, double sideTwo, double sideThree) {
    return (sideOne * sideTwo) / 2;
}