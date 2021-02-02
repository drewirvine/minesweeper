#include <iostream>
using namespace std;

int main() {
  int number;
  int total = 1;
  for (int i = 1; i <= 5; i += 1) {
    // cout << "Enter a number: ";
    // cin >> number;
    total *= i;
  }
  cout << "The total is: " << total << endl;
}
