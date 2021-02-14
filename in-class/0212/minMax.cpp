/*************************************************************************
 *
 * In-Class Exercise: Define Minimum and Maximum Function
 *
 * File Name: minMax.cpp
 * Course:    CPTR 141
 */

#include <iostream>  // for cin and cout
using namespace std;


// Define Maximum Here

int myMax(int x, int y) {
    int theMax;
    if (x > y) {
        theMax = x;
    } else {
        theMax = y;
    }
    return theMax; 
}

// Define Minimum Here

int myMin(int x, int y) {
    int theMin;
    if (x > y) {
        theMin = y;
    } else {
        theMin = x; 
    }
    return theMin;
}

// maxThree function definition

int maxThree(int x, int y, int z) {
    int maxOfThree;
    if((x > y) && (x > z)) {
        maxOfThree = x;
    } 
    else if((y > z) && (y > x)) {
        maxOfThree = y;
    }
    else {
        maxOfThree = z;
    }
    return maxOfThree;
}

// middleNumber function that returns the middle number;

int MiddleNumber(int x, int y, int z) {
    int middleNumber = x;
    if (y > x) {
        middleNumber = y;
    }
    else if((z < y) && (z > x)) {
        middleNumber = z;
    }
        return middleNumber;
    }
}

// Stretch Goals:
// ==============
//   * Define a "maxThree" function that returns the maximum of three integers.
//     Can you do this using the existing myMax function?
//
//   * Define a "middle" function that returns the middle number in a list of
//     three integers.  Use the existing two-number myMax amd myMin functions
//     to help.


// Here is the main program
int main() {
    int x;
    int y;
    int z;

    

   
    // Use Minimum and Maximum Here
    // cout << "Enter first integer: ";
    // cin >> x;
    // cout << "Enter second integer: ";
    // cin >> y;

    // cout << "The smaller of these two is: " << myMin(x, y) << endl;

    return 0;
}