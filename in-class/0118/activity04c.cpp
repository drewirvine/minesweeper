#include <iostream>
using namespace std;

int main() {
  // ----------------------------------------- declare variables
  double floatOne,floatTwo;
  int integer = 35;  
  // ----------------------------------------- part I
  floatOne = integer;
  cout << "original number: " << integer << endl;
  cout << "after conversion: " << floatOne << endl << endl;   
  // ----------------------------------------- part II
  floatOne = 3.9;
  floatTwo = static_cast<int>(floatOne);
  cout << "second number: " << floatOne << endl;
  cout << "after conversion: " << floatTwo << endl << endl;
// ------- Part III
// Write a snipped of code that will output the string WWU without using the "w" or U" characters 
char charOne = '*';
char charTwo = '-';

char charThree = '*';
char charFour = '+';

char sum1 = charOne + charTwo;
char sum2 = charThree + charFour;
cout << sum1 << sum1 << sum2 << endl << endl;


}