/*************************************************************************
 *
 * hw03: Compute the gross pay, withholdings, and net pay for an
 *       employee given the number of hours worked and number of
 *       dependents.
 *
 * File Name: paycheck.cpp
 * Name:      Drew Irvine
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {

  int numberDependants;
  double hours;
  double hourlyWage = 18.50;
  const double OT_PAY = 27.75;
  const double OT_HOURS = 41;
  const double SOCIAL_SECURITY = 0.062;
  const double MEDICARE = 0.0145;
  const double FED_INCOME_TAX = 0.15;
  double healthCare = 10;
  double GROSS_PAY;
  double socialSecurity;
  double mediCare;
  double federalIncomeTax;
  double healthCareContribution;
  double withholdings;

  // Ask for User Input

  cout << "Enter the number of hours worked: ";
  cin >> hours;
  cout << "Enter the number of dependents: ";
  cin >> numberDependants;
  cout << endl;
cout << fixed << setprecision(2);
  // compute gross pay
  if (hours < OT_HOURS) {
    cout << "Your gross pay is: $" << hours * hourlyWage << endl;
    GROSS_PAY = hours * hourlyWage;
  } else {
    cout << "Your gross pay is: $" << 40 * hourlyWage + (hours - 40) * (OT_PAY) << endl;
    GROSS_PAY = 40 * hourlyWage + (hours - 40) * (OT_PAY);
  }

  // rounding
  //   int temp = (GROSS_PAY + 0.005) * 100;
  //   withholdings = temp / 100.0;

  // compute withholdings
  socialSecurity = SOCIAL_SECURITY * GROSS_PAY;
  mediCare = MEDICARE * GROSS_PAY;
  federalIncomeTax = (FED_INCOME_TAX - (numberDependants * 0.01)) * GROSS_PAY;
  healthCareContribution = GROSS_PAY - healthCare;
  withholdings = socialSecurity + mediCare + federalIncomeTax + healthCare;

  // rounding
  //    int temp = (withholdings + 0.005) * 100;
  //   withholdings = temp / 100.0;

  // result of withholdings
  cout << "The withholdings are: $" << fixed << setprecision(2) << withholdings
       << endl;

  // Calculations of net pay
  cout << "So that your net pay is: $" << GROSS_PAY - withholdings << endl;

  return 0;
}
