/*************************************************************************
 *
 * hw04: Determine a final letter grade and if the user needs to take
 *       the final exam.
 *
 * File Name: gradeCalculator.cpp
 * Name:      ???
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // define variables
  double TEST_AVERAGE;
  double HOMEWORK_AVERAGE;
  double PART_AVERAGE;
  double TOTAL_TEST;
  double TOTAL_HOMEWORK;
  double TOTAL_PART;
  double FINAL_GRADE;

  // rounding
  cout << fixed << setprecision(2);

  // gather input
  cout << "Enter your test, homework, and participation averages separated by "
          "spaces: ";
  cin >> TEST_AVERAGE >> HOMEWORK_AVERAGE >> PART_AVERAGE;

  // validate that input

  if ((TEST_AVERAGE > 100) || (HOMEWORK_AVERAGE > 100) ||
      (PART_AVERAGE > 100)) {
    cout << "All averages must be between 0 and 100." << endl;
    return 1;
  }
  if ((TEST_AVERAGE < 0) || (HOMEWORK_AVERAGE < 0) || (PART_AVERAGE < 0)) {
    cout << "All averages must be between 0 and 100." << endl;
    return 1;
  }

  TOTAL_TEST = TEST_AVERAGE * 0.45;
  TOTAL_HOMEWORK = HOMEWORK_AVERAGE * 0.35;
  TOTAL_PART = PART_AVERAGE * 0.20;

  FINAL_GRADE = TOTAL_TEST + TOTAL_HOMEWORK + TOTAL_PART;

  // branching statements to produce output
  if ((FINAL_GRADE < 100) && (FINAL_GRADE >= 90)) {
    cout << "You have an A in the class and do not need to take the final."
         << endl;
  } else if ((FINAL_GRADE < 90) && (FINAL_GRADE >= 80)) {
    cout << "You have a B in the class and must take the final." << endl;
  } else if ((FINAL_GRADE < 80) && (FINAL_GRADE >= 70)) {
    cout << "You have a C in the class and must take the final." << endl;
  } else if ((FINAL_GRADE < 70) && (FINAL_GRADE >= 60)) {
    cout << "You have a D in the class and must take the final." << endl;
  } else {
    cout << "You have an F in the class and must take the final." << endl;
  }

  return 0;
}
