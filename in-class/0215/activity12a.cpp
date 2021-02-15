#include <iostream>
using namespace std;

double getSmaller(double num1, double num2) {
  double smaller;
  if (num1 < num2) {
    smaller = num1;
  } else {
    smaller = num2;
  }
  return smaller;
}

int main() {
  double userNum1, userNum2;
  cout << "Enter two numbers separated by a space: ";
  cin >> userNum1 >> userNum2;
  double smallerNum = getSmaller(userNum1, userNum2);
  cout << "The smaller number is " << smallerNum << endl;
}
