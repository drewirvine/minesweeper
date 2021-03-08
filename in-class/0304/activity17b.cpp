#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin;
  int number;

  fin.open("numbersTwo.txt");
  //   do {
  //     fin >> number;
  //     cout << "Number: " << number << endl;
  //   } while( number != 6 && ! fin.eof() );
  //   fin.close();
  int sum;
  do {
    cin >> number;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(100, '\n');
    } else {
      sum += number;
      cout << sum << endl;
    }
  } while (number != 6);
  fin.close();
}