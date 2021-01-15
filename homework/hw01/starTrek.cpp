/*************************************************************************
 *
 * hw01: A mad-libs introduction to StarTrek
 *
 * File Name: starTrek.cpp
 * Name:      Drew Irvine
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string> // included for cin and cout processing
using namespace std;

int main() {
  // define your variables below
  string userNounOne;
  string userNounTwo;
  string userNumber;
  string userTime;
  string userAdjective;
  string userAdjectiveTwo;
  string userVerb;

  // gather user input using cin << variableName
  cout << "Enter a noun: "; 
  cin >> userNounOne; 
  cout << "Enter a second noun: "; 
  cin >> userNounTwo;
  cout << "Enter a number: ";
  cin >> userNumber;
  cout << "Enter a measure of time: ";
  cin >> userTime;
  cout << "Enter an adjective: ";
  cin >> userAdjective;
  cout << "Enter a second adjective: ";
  cin >> userAdjectiveTwo;
  cout << "Enter a verb: ";
  cin >> userVerb;

  // print out the intro
  cout << endl;
  cout << userNounOne << ", the final frontier" << endl;
  cout << "These are the voyages of the " << userNounTwo << " Enterprise."
       << endl;
  cout << "Its " << userNumber << " " << userTime << " mission" << endl;
  cout << "To explore " << userAdjective << " new worlds" << endl;
  cout << "To seek out " << userAdjectiveTwo << " life" << endl;
  cout << "And " << userAdjectiveTwo << " civilizations" << endl;
  cout << "To boldly " << userVerb << " where no one has gone before" << endl;

  return 0;
}
