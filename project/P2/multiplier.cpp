/****************************************************************************
 *
 * Proj.01: An implementation of the so-called "Russian Pesant" or "Ancient
 *          Egyptian" method for multiplication.
 *
 * File Name: multiplier.cpp
 * Name:      Drew Irvine
 * Course:    CPTR 141
 * Date:      Feb 15, 2021
 *
 */

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ofstream fout;
  fout.open("log.log");

  cout << "Welcome to the Russian Peasant Multiplication Calculator Program!"
       << endl;
  cout << "===================================================================="
       << endl;
  cout << "To get started, enter in two numbers that don't have decimals below."
       << endl;
  cout << endl;

  bool exitProgram = false;

  while (!exitProgram) {

    // ask for input
    int num1, num2;
    int tmpNum1, tmpNum2;
    cout << "Enter Your First Number: ";
    cout << endl;
    cout << "-------------------------";
    cout << endl;
    cout << "Number: ";
    cin >> num1;
    while (num1 < 0) {
      cout << "Error, first number must be positive: ";
      cin >> num1;
    }
    tmpNum1 = num1;
    cout << endl;
    cout << "================" << endl;
    cout << endl;
    cout << "Enter Your Second Number: ";
    cout << endl;
    cout << "--------------------------";
    cout << endl;
    cout << "Number: ";
    cin >> num2;
    tmpNum2 = num2;
    cout << endl;

    // SANITIZE INPUT SO NUM1 IS POSITIVE.

    if (num1 < 0) {
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << "Uh oh, your first number has to be positive!" << endl;
      cout << "Please try again. " << endl;
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
      cout << endl;
      return main(); // FIXME is there a way to make it so it skips the intro
                     // and goes back to the top of the while loop?
    }

    // start the algorithm

    // if num2 is odd, we store the current num1 for addition later
    // if num2 is even, we ignore the current num1

    int sum = 0;
    cout << "=========================" << endl;
    cout << endl;
    cout << setw(8) << "Num 1" << setw(8) << " | Num 2" << endl;
    cout << setw(8) << "-------------------" << endl;

    char tableAddtion = ' ';

    while (num2 > 0 || num2 < 0) {
      if (num2 % 2 == 1) { // runs the algorithm is num2 is positive
        sum += num1;
        tableAddtion = '+';
        fout << "Since " << num2 << " is odd, we add "
             << num1 // spits out the since 2 is odd we add num1
             << " to the product." << endl;
      } else if (num2 % 2 == -1) { // runs the algorithm if num2 is negative
        sum += num1;
        tableAddtion = '+';
      }
      if (num2 % 2 == 0) {
        fout << "Since " << num2 << " is even, we ignore " << num1 << endl;
      }
      cout << tableAddtion << setw(7) << num1 << " | " << num2 << endl;
      num1 *= 2;
      num2 /= 2;
      tableAddtion = ' ';
    }
    cout << endl;
    cout << "To find the product of your two numbers, add the numbers in the "
            "table that have the + "
            "next to them";
    cout << endl;
    cout << endl;
    cout << "This is how it works: If the number in column Num 2 is odd, we "
            "add the corresponding number in column Num 1 to the product"
         << endl;
    cout << endl;
    cout << "After the steps above, we double the number in column 1 and "
            "divide the number in column 2 by 2"
         << endl;
    cout << endl;
    cout << "===========================================" << endl;
    cout << "Therefore, the product of " << tmpNum1 << " and "
         << tmpNum2 // FINAL PRODUCT
         << " is ";
    cout << tmpNum1 * tmpNum2 << ". " << endl;
    cout << "===========================================" << endl;
    cout << endl;

    // ask if they want to do another program

    cout << "Do you wish to multiply another set of numbers using this amazing "
            "method? (y / n)";
    char redo;
    cin >> redo;
    while (redo != 'y' && redo != 'n') {
      cout << "Error, must input y or n: ";
      cin >> redo;
    }
    if (redo == 'n') {
      exitProgram = true;
      cout << endl;
    }
  }
  cout << "==================" << endl;
  cout << "Have a good day :)" << endl;
  cout << "==================" << endl;
  cout << endl;

  fout.close();
  return 0;
}