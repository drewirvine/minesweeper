/****************************************************************************
 *
 * Asgn.14:  A library of array functions
 *
 * File Name: functions.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Date:      6 March 2018
 *
 */

#include "arrayfun.h"
#include <iostream>

using namespace std;

double mean(int a[], int size) { // average = sum / count
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += a[i];
  }
  return sum / (double)size;
}

double median(int a[], int size) { // Middle value

  int indexSmallest = 0;
  int temp = 0; // Temporary variable for swap

  for (int i = 0; i < size - 1; ++i) {

    // Find index of smallest remaining element
    indexSmallest = i;
    for (int j = i + 1; j < size; ++j) {

      if (a[j] < a[indexSmallest]) {
        indexSmallest = j;
      }
    }

    // Swap numbers[i] and numbers[indexSmallest]
    temp = a[i];
    a[i] = a[indexSmallest];
    a[indexSmallest] = temp;
  }
  int index = ((size + 1) / 2) - 1; // make it zero index
  return a[index];
}

// void SelectionSort(int numbers[], int numbersSize) {
//   int indexSmallest = 0;
//   int temp = 0; // Temporary variable for swap

//   for (int i = 0; i < numbersSize - 1; ++i) {

//     // Find index of smallest remaining element
//     indexSmallest = i;
//     for (int j = i + 1; j < numbersSize; ++j) {

//       if (numbers[j] < numbers[indexSmallest]) {
//         indexSmallest = j;
//       }
//     }

// // Swap numbers[i] and numbers[indexSmallest]
// temp = numbers[i];
// numbers[i] = numbers[indexSmallest];
// numbers[indexSmallest] = temp;
// }
// }

// int main2() {
//    int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11 };
//    const NUMBERS_SIZE = 8;

//    void print("UNSORTED: ");
//    for ( i = 0; i < NUMBERS_SIZE; ++i) {
//       print(numbers[i] + " ");
//    }
//    void printLine();

//    SelectionSort(numbers, NUMBERS_SIZE);

//    print("SORTED: ");
//    for ( i = 0; i < NUMBERS_SIZE; ++i) {
//       print(numbers[i] + " ");
//    }
//    printLine();
// }

// int main() {
//   int a[]{8,77,5,24,15};
//   cout << "The average is: " << mean(a, 6);
//   cout << endl;

//   cout << "The median is: " << median(a, 6);
//   cout << endl;
// }
