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
  if (circleRadius < 0) {
    return -1.0;
  }
  return (PI)*pow(circleRadius, 2);
}

// Area of a rectangle: Double Length, Double Width
double area(double recLength, double recWidth) {
  if (recLength < 0 || recWidth < 0) {
    return -1.0;
  }
  return recLength * recWidth;
}

// Area of a triangle: Double side1, double side2, double side3
double area(double sideOne, double sideTwo, double sideThree) {
  if (sideOne < 0 || sideTwo < 0 || sideThree < 0) {
    return -1.0;
  }
  if (sideOne > sideTwo + sideThree || sideTwo > sideOne + sideThree ||
      sideThree > sideOne + sideTwo) {
    return -1.0;
  }
  double s = (sideOne + sideTwo + sideThree) / 2;
  return sqrt(s * (s - sideOne) * (s - sideTwo) * (s - sideThree));
}