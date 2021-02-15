/****************************************************************************
 *
 * hw08: Prompt the user to enter two sets of lowercase alphabet characters,
 *       store them in vectors, and then display the intersection.
 *
 * File Name: intersection.cpp
 * Course:    CPTR 141
 *
 */

#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // define variables
  char userVal;
  bool userDone = false;

  // setOne.resize(numValsOne); // setting the size of Vector 1
  // setOne.resize(numValsTwo); // setting the size of Vector 2

  // welcome message
  cout << "Welcome to the Intersection Calculator(TM)" << endl;
  cout << "==========================================" << endl;
  cout << "Please enter two sets of lowercase alphabet characters." << endl;

  cout << endl;

  // get set one
  while (!userDone) {
    vector<char> setOne;
    vector<char> setTwo;
    bool done = false;
    cout << "Set One (enter ! when done):" << endl;
    cout << "----------------------------" << endl;
    // cout << "  Element: ";

    while (!done) {
      cout << "  Element: ";
      cin >> userVal;
      if (userVal == '!') {
        done = true;
        break;
      } else if (!(isalpha(userVal))) {
        cout << "Error: Only lower case alphbet letters are allowed." << endl;
      } else if (tolower(userVal) != userVal) {
        cout << "Error: Only lower case alphbet letters are allowed." << endl;
      } else {
        setOne.push_back(userVal);
      }
    }
    cout << endl;

    // COUT SET ONE BUG CHECK

    // cout << "SetOne debug" << endl;
    // for(int i = 0; i < setOne.size(); i++) {
    //     cout << setOne.at(i);
    // }
    // cout << endl;

    // SET TWO

    done = false;

    cout << "Set Two (enter ! when done):" << endl;
    cout << "----------------------------" << endl;
    // cout << "  Element: ";

    while (!done) {
      cout << "  Element: ";
      cin >> userVal;
      if (userVal == '!') {
        done = true;
        break;
      } else if (!(isalpha(userVal))) {
        cout << "Error: Only lower case alphbet letters are allowed." << endl;
      } else if (tolower(userVal) != userVal) {
        cout << "Error: Only lower case alphbet letters are allowed." << endl;
      } else {
        setTwo.push_back(userVal);
      }
    }
    cout << endl;
    // find and display the intersection of sets one and two

    cout << "The intersection of { ";
    for (int i = 0; i < setOne.size(); i++) {
      cout << setOne.at(i);
      if (i < setOne.size() - 1) {
        cout << ", ";
      }
    }
    cout << " } and { ";
    for (int i = 0; i < setTwo.size(); i++) {
      cout << setTwo.at(i);
      if (i < setTwo.size() - 1) {
        cout << ", ";
      }
    }
    cout << " } is { ";
    int intersectionCount = 0;
    for (int i = 0; i < setOne.size(); i++) {
      for (int j = 0; j < setTwo.size(); j++) {
        if (setOne.at(i) == setTwo.at(j)) {
          cout << setOne.at(i);
          intersectionCount++;
          if (i < setOne.size() - 1) {
            cout << ", ";
          }
          break;
        }
      }
    }
    if (intersectionCount > 0) {
      cout << " }.";
    } else {
      cout << "}.";
    }
    cout << endl;
    cout << endl;

    // prompt the user to see if they want to do another
    char redo;
    cout << "Would you like to compute another intersection (y/n)? ";
    cin >> redo;
    if (redo == 'n') {
      userDone = true;
    }
    cout << endl;
  }

  // end the program
  return 0;
}
