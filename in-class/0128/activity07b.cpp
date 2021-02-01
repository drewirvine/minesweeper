#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  int number;
  int num1;
  int num2;
//   cout << "Enter a positive integer: ";
//   cin >> number;
//   int x = 1;
//   while (x <= number) {
//     if (x % 10 == 0) {
//       cout << setw(2) << x << endl;
//     } else {
//       cout << setw(2) << x << " ";
//     }
//     x = x + 1;
//   }
// int x = 1;
// while (number <= 10) {
//     cout << number << endl;
//     number = number + 1;
// }
//   cout << endl;

// cout << "Pick a number between 1 and 10: ";
// cin >> num1;
// while ((num1 < 1) || (num1 > 10)) {
// cout << "Pick another number between 1 and 10: ";
// cin >> num1;
// }
// cout << "Pick another number between 1 and 10: ";
// cin >> num1;

// cout << "You entered a valid number.";

string word;
char doAgain = 'y';
while (doAgain == 'y') {
    cout << "Enter a word: ";
    cin >> word;
    cout << "the first letter is " << word.at(0) << endl;
    cout << "Type 'y' to enter another word, anything else to quit. ";
    cin >> doAgain;
}
cout << "Done!" << endl;

}