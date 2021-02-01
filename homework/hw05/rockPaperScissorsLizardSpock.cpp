/*************************************************************************
 *
 * hw05: Implement the classic game "Rock-Paper-Scissors-Lizard-Spock"
 *
 * File Name: rockPaperScissorsLizardSpock.cpp
 * Name:      Drew Irvine
 * Course:    CPTR 141
 *
 */

#include <cstdlib>  // for rand and srand commands
#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  int seed;
//   int rock = 0;
//   int paper = 1;
//   int scissors = 2;
//   int lizard = 3;
//   int spock = 4;
  int userValue;

  // initialize user seed
  cout << "Enter a random seed: ";
  cin >> seed;
  cout << endl;

  srand(seed);

  // Main body of text
  cout << "The computer has chosen and so must you." << endl;
  cout << "  0) Rock" << endl;
  cout << "  1) Paper" << endl;
  cout << "  2) Scissors" << endl;
  cout << "  3) Lizard" << endl;
  cout << "  4) Spock" << endl;
  cout << "Make your choice: ";
  cin >> userValue;

  // Sanitize user input
  if ((userValue > 4) || (userValue < 0)) {
    cout << "Invalid choice. Please enter a number between 0 and 4." << endl;
    return 1;
  }

  string message = "The computer chose ";
  string obj;    // = "Rock ";
  string result; // = "-- It's a tie!";
                 // cout << message << obj << result << endl;

  // Computer makes his choice
  int computerValue = rand() % 5;

  // Enter Logic for Object
  switch (computerValue) {
  case 0:
    obj = "Rock ";
    break;
  case 1:
    obj = "Paper ";
    break;
  case 2:
    obj = "Scissors ";
    break;
  case 3:
    obj = "Lizard ";
    break;
  case 4:
    obj = "Spock ";
    break;
  default:
    cout << "Number must be between 0 and 4";
    break;
  }

  string tie = "-- it's a tie!";
  string win = "-- you win!";
  string lose = "-- you lose!";

  // Enter Logic for Result
  if (userValue == computerValue) {
    result = tie;
  } else {
    switch (computerValue) {
    case 0: {
      if ((userValue == 3) || (userValue == 2)) {
        result = lose;
      } else {
        result = win;
      }
      break;
    }
    case 1: {
      if ((userValue == 0) || (userValue == 4)) {
        result = lose;
      } else {
        result = win;
      }
      break;
    }
    case 2: {
      if ((userValue == 1) || (userValue == 3)) {
        result = lose;
      } else {
        result = win;
      }
      break;
    }
    case 3: {
      if ((userValue == 1) || (userValue == 4)) {
        result = lose;
      } else {
        result = win;
      }
      break;
    }
    case 4: {
      if ((userValue == 2) || (userValue == 0)) {
        result = lose;
      } else {
        result = win;
      }
      break;
    }
    }
  }

  cout << message << obj << result << endl;
  return 0;
}
