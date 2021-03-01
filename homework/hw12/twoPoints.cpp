/****************************************************************************
 *
 * hw13: A line information program
 *
 * File Name:  twoPoint.cpp
 * Name:       Drew Irvine
 * Course:     CPTR 141
 *
 */
#include <iostream>
#include <ostream>
#include <string>
#include <cmath>
using namespace std;

/*---------------------------------------------------------------------------
 * Prompts the user for a numbered point, in the first parameter, in the form
 *  (x,y) and validates the input before returning it in second and third
 *  parameters.
 */
void getPoint(int, double &, double &);

/*--------------------------------------------------------------------------
 * Takes points (x1,y1), from the first two parameters, and (x2,y2), from the
 *  second two parameters, and computes the x and y coordinates of the
 *  midpoint returning them in the fifth and sixth parameter.  The finds
 *  the length of the line segment and returns it as the function value.
 */
double lineInfo(double, double, double, double, double &, double &);

// The main program
int main() { 
    double x1;
    double y1;
    double x2;
    double y2;
    double xMid;
    double yMid;
    double lineLength;
    getPoint(1, x1, y1);
    // cout << x1 << endl;
    // cout << y1 << endl;
    getPoint(2, x2, y2);
    // cout << x2 << endl;
    // cout << y2 << endl;

    lineLength = lineInfo(x1, x2, y1, y2, xMid, yMid);
    cout << "The line segment length is: " << lineLength << endl;
    cout << "The midpoint is: (" << xMid << "," << yMid << ")" << endl;
    return 0; 
}

// define functions
void getPoint(int point, double &xOut, double &yOut) {
  double x;
  double y;
  char trash;
  bool invalid = true;
  
    cout << "Enter a point number " << point << " in the form (x,y): ";
    cin >> trash >> x >> trash >> y >> trash;
    // if (!cin) {
    //     cout << "Invalid input " << endl;
    //     invalid = true;
    //     cin.clear();
    //     cin.ignore(1000 , '\n');
    // } else {
    //     invalid = false;
    // }
  
  xOut = x;
  yOut = y;
}

double lineInfo(double x1, double y1, double x2, double y2, double &xMid, double &yMid) {
    // finding the midpoints
    xMid = (x1 + x2) / 2;
    yMid = (y1 + y2) / 2;

    // Calculating the line length
    return sqrt(pow(x2 - x1 ,2) + (pow(y2 -y1,2)));
    
}