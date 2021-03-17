/****************************************************************************
 * HW17: Functions for Max String Stream
 *
 * File Name:  maxFunctions.cpp
 * Name:       ?
 * Course:     CPTR 141
 */

#include "maxFunctions.h"
#include <sstream>
using namespace std;

int findMax(string maxFind) {
  int maxValue = 0;
  for (int i = 0; i < maxFind.size(); i++) {
    string temp(1, maxFind[i]);

    stringstream str(temp);
    int num;
    str >> num;
    if (maxValue < num) {
      maxValue = num;
    }
  }
  return maxValue;
}

string getSet(const int array[], int num) {
  string mainString = "{ ";
  for (int i = 0; i < sizeof(array); i++) {
    string mainString += num;
  }
}