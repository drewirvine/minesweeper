/****************************************************************************
 *
 * Hw11: Supporting functions for a program to print out the calendar
 *       for a given month and year.
 *
 * File Name:  calendarFunctions.cpp
 * Course:     CPTR 141
 *
 */

#include "calendarFunctions.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

string nameOfMonth(int month) {
  string str;
  switch (month) {
  case 1:
    str = "January";
    break;
  case 2:
    str = "February";
    break;
  case 3:
    str = "March";
    break;
  case 4:
    str = "April";
    break;
  case 5:
    str = "May";
    break;
  case 6:
    str = "June";
    break;
  case 7:
    str = "July";
    break;
  case 8:
    str = "August";
    break;
  case 9:
    str = "September";
    break;
  case 10:
    str = "October";
    break;
  case 11:
    str = "November";
    break;
  case 12:
    str = "December";
    break;
  }
  return str;
}

bool isLeapYear(int year) {
  bool leapYear = false;
  if ((year % 100 == 0) && !(year % 400 == 0)) {
    leapYear = false;
  } else if (year % 4 == 0) {
    leapYear = true;
  }

  return leapYear;
}

int daysInMonthAndYear(int month, int year) {
  int days = 0;
  if ((month == 1) || (month == 3) || (month == 5) || (month == 7) ||
      (month == 8) || (month == 10) || (month == 12)) {
    days = 31;
  } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
    days = 30;
  } else if (month == 2) {
    if (isLeapYear(year)) {
      days = 29;
    } else {
      days = 28;
    }
  }

  return days;
}

// implement your functions here