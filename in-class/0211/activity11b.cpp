#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// void printArea(double radius) {
    void diameter(double radius) {
        // double diameter; 
        cout << radius * 2;
        cout << endl;
    }
//   double area = 3.14159 * pow(radius, 2);
//   cout << fixed << setprecision(2);
//   cout << "The area of a circle with radius " << radius << " is " << area
//        << endl;


int main() {
  double tacoBell;

  cout << "Enter in a radius: ";
  cin >> tacoBell;
  diameter(tacoBell);
  //    printArea(3);
  //    printArea(4.5);
}