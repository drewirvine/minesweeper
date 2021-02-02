/*************************************************************************
 *
 * hw06: Determine if a password meets the required specifications.
 *
 * File Name: pwordChecker.cpp
 * Name:      ???
 * Course:    CPTR 141
 *
 */

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // define variables
  string userPassword;
  bool hasDigit = false;
  bool hasLowerCase = false;
  bool hasUpperCase = false;
  bool hasSpecial = false;
  bool noConsecutive = false;

  /* how to check for deplicate characters:
  if (userPassword.at(10) == userPassword.at(9)) {
      cout << "password is invalid";
      return.1
  }
*/

  // prompt for input
  cout << "Please enter a password with the following characteristics:" << endl;
  cout << "  - at least 10 characters long" << endl;
  cout << "  - contains at least one digit" << endl;
  cout << "  - contains at least one lower-case letter" << endl;
  cout << "  - contains at least one upper-case letter" << endl;
  cout << "  - contains at least one non-alphanumeric character" << endl;
  cout
      << "  - does not contain any consecutive duplicate characters (e.g. 'aa')"
      << endl
      << endl;

  // collect input
  cout << "Password: ";
  cin >> userPassword;

  // duplicate thingy

  char lastDigit = 0;

  // for loop
  int size = userPassword.size();
  for (int i = 0; i < size; ++i) {
    noConsecutive = ((userPassword.at(i) != lastDigit) && (noConsecutive));
    lastDigit = userPassword.at(i);
  }

  for (int i = 0; i < size; ++i) {
    hasDigit = ((isdigit(userPassword.at(i))));
  }

  for (int i = 0; i < size; ++i) {
    hasLowerCase = ((islower(userPassword.at(i))));
  }

  for (int i = 0; i < size; ++i) {
    hasUpperCase = ((isupper(userPassword.at(i))));
  }

  for (int i = 0; i < size; i++) {
    hasSpecial = !(isalnum(userPassword.at(i)));
  }

if (size <=10) {
    cout << "Your password does not meet the above criteria." << endl;
    return 1;
}

  // display result
if (lastDigit && hasDigit && hasUpperCase && hasLowerCase && hasSpecial){
  cout << "Your password has been accepted." << endl;
}
else {
    cout << "Your password does not meet the above criteria." << endl;
}
  // end the program
  return 0;
}
