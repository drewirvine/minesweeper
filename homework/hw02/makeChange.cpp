/*************************************************************************
 *
 * hw02: A change computation program
 *
 * File Name: makeChange.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {

  // define variables
  const double QUARTER_AMOUNT = 25;
  const double DIME_AMOUNT = 10;
  const double NICKLE_AMOUNT = 5;
  const double PENNY_AMOUNT = 1;
  const double TWENTY_AMOUNT = 2000;
  const double TEN_AMOUNT = 1000;
  const double FIVE_AMOUNT = 500;
  const double ONE_AMOUNT = 100;
  double totalCost;
  double amountPaid;
  double change;
  int numTwenties;
  int numTens;
  int numFives;
  int numOnes;
  int numQuarters;
  int numDimes;
  int numNickles;
  int numPennies;

  // Prompt for and collect input
  cout << "Enter the cost in dollars and cents: $";
  cin >> totalCost; // 13.59
  cout << "Enter the amount paid in dollars and cents: $";
  cin >> amountPaid; // 45
  cout << endl;

  // convert to cents and compute change
  change = amountPaid - totalCost; // 31.41
  change = change * 100;           // 3141

  cout << "Your change is: " << endl;
  // How many twenties can I fit? (21.68) (25)
  numTwenties = change / TWENTY_AMOUNT;
  change = change - (numTwenties * TWENTY_AMOUNT);
  cout << " - twenty-dollar bills: " << numTwenties << endl;
  // How many Tens?
  numTens = change / TEN_AMOUNT;
  change = change - (numTens * TEN_AMOUNT);
  cout << " - ten-dollar bills: " << numTens << endl;
  // How many Fives?
  numFives = change / FIVE_AMOUNT;
  change = change - (numFives * FIVE_AMOUNT);
  cout << " - five-dollar bills: " << numFives << endl;
  // How many Ones?
  numOnes = change / ONE_AMOUNT;
  change = change - (numOnes * ONE_AMOUNT);
  cout << " - one-dollar bills: " << numOnes << endl;
  // How many Quarters?
  numQuarters = change / QUARTER_AMOUNT;
  change = change - (numQuarters * QUARTER_AMOUNT);
  cout << " - quaters: " << numQuarters << endl;
  // How many Dimes?
  numDimes = change / DIME_AMOUNT;
  change = change - (numDimes * DIME_AMOUNT);
  cout << " - dimes: " << numDimes << endl;
  // How many Nickels?
  numNickles = change / NICKLE_AMOUNT;
  change = change - (numNickles * NICKLE_AMOUNT);
  cout << " - nickels: " << numNickles << endl;
  // How many Pennies?
  numPennies = change / PENNY_AMOUNT;
  change = change - (numPennies * PENNY_AMOUNT);
  cout << " - pennies: " << numPennies << endl;
  // cout << "change: " << change << endl;

  return 0;
}
