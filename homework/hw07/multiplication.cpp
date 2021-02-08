/****************************************************************************
 *
 * hw07: Create a multiplication table and save it to a file.
 *
 * File Name:  multiplication.cpp
 * Name:       Drew Irvine
 * Course:     CPTR 141
 *
 */

#include <iomanip>  // for setw
#include <iostream> // for cout and cin
using namespace std;

int main() {

  // variable declaration
  int userColumns;
  int userRows;

  // Ask for input:
  cout << "Enter desired number of columns and rows: ";
  cin >> userColumns >> userRows;

  // Sanitize input so input is between 1-10:

  if (((userColumns > 10) || (userColumns < 1)) ||
      ((userRows > 10) || (userRows < 1))) {
    cout << "Please enter two integers in the range of 1-10 separated by a "
            "space."
         << endl;
    return (1);
  }

  // Contsruct Times Table :)

  // Header

  for (int i = 0; i < userRows + 2; i++) {
    if (i == 0) {
      cout << setw(6) << "*  ";
      for (int j = 0; j < userColumns; j++) {
        cout << setw(4) << j + 1;
      }
      cout << endl;
    } else if (i == 1) {
      cout << setw(6) << "____";
      for (int j = 0; j < userColumns; j++) {
        cout << setw(4) << "___";
      }
      cout << endl;
    } else {
      cout << setw(3) << " " << (i - 1) << " |";
      for (int j = 0; j < userColumns; j++) {
        cout << setw(4) << (i - 1) * (j + 1);
      }
      cout << endl;
    }
  }

  cout << endl;
  return 0;
}