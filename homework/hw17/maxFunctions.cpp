/****************************************************************************
 * HW17: Functions for Max String Stream
 *
 * File Name:  maxFunctions.cpp
 * Name:       ?
 * Course:     CPTR 141
 */

#include "maxFunctions.h"
#include <sstream>
#include <string>
using namespace std;

int findMax(string maxFind) {
  int maxValue = 0;
  int i1 = -1;
  for (int i = 0; i < maxFind.size(); i++) {
    string temp;
    stringstream str(temp);
    int num;
    str >> num;
    if (maxValue < num) {
      maxValue = num;
      if (maxFind[i] == ' ') {
        i1 = i;
        temp = maxFind.substr(i1 + 1, i - i1 - 1);
        stringstream str(temp);
        int num;
        str >> num;
        if (maxValue < num) {
          maxValue = num;
        }
      }
    }
  }
  return maxValue;
}

string getSet(const int array[], int size) {
  string mainString = "{ ";
  for (int i = 0; i < size; i++) {
    mainString.append(to_string(array[i]));

    if (i == size - 1) {
      mainString.append(" }");
    } else {
      mainString.append(", ");
    }
  }
  return mainString;
}