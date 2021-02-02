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
  for (int i = 0; i < size - 1; ++i) {
    noConsecutive = userPassword.at(i) != (userPassword.at(i+1));
  }

  for (int i = 0; i < size; ++i) {
    if (!hasDigit) {
        hasDigit = ((isdigit(userPassword.at(i)))); 
    }
    if (!hasLowerCase) {
    hasLowerCase = ((islower(userPassword.at(i))));
    }
    if (!hasUpperCase) {
    hasUpperCase = ((isupper(userPassword.at(i))));
    }
    if (!hasSpecial) {
    hasSpecial = !(isalnum(userPassword.at(i)));
    }
  }
 

    // cout << "noConsec: " << noConsecutive << endl;
    // cout << "hasdigit: " << hasDigit << endl;
    // cout << "Has upper case: " << hasUpperCase << endl;
    // cout << "has lower: " << hasLowerCase << endl;
    // cout << "has special: " << hasSpecial << endl;
    // cout << "size: " << (size > 10) << endl;

  // display result
  if (noConsecutive && hasDigit && hasUpperCase && hasLowerCase && hasSpecial &&
      (size > 10)) {
    cout << "Your password has been accepted." << endl;
  } else {
    cout << "Your password does not meet the above criteria." << endl;
  }

  // end the program
  return 0;
}
