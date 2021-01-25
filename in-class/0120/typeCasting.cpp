/*************************************************************************
 *
 * In-Class Quiz:  Can you determine the output of each block without 
 *                 running this program?
 * 
 * File Name: typeCasting.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
   
   // block #1
  //int a = 4, b = 8;
//    cout << a / b << endl;
//    cout << static_cast<double>(a) / b << endl;
//    cout << a / static_cast<double>(b) << endl;
//    cout << static_cast<double>(a / b) << endl;
//    cout << "---------------------------" << endl << endl;
   
  // block #2
//    int myInt = 2;
//    double myDouble = 2.5;
//    cout << myDouble / myInt << endl;
//    cout << static_cast<int>(myDouble / myInt) << endl;
//    cout << "---------------------------" << endl << endl;

   // block #3
//    int myInt = 2;
//    double myDouble = 2.5;
//    myDouble = myInt;
//    cout << myDouble << endl;   
//    myDouble = 2.5;
//    myInt = myDouble;
//    cout << myInt << endl;
//    cout << "---------------------------" << endl << endl;
   
   // block #4 (recall that a short int has range -32768 to 32767)
   cout << (3 + 1 * 5) * (2 / 3) << endl;

   return 0;
}
