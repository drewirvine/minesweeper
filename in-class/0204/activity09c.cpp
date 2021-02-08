#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int numRows;
  
//   cout << "Enter Number of Rows: ";
//   cin >> numRows;
//   for (int j = 1; j < numRows + 1; j++) {
//     for (int i = 1; i <= j; i++) {
//         cout << setw(3) << left;
//       cout << i << " ";
//     }
//     cout << endl;
//   }

string studentOne; 
string studentTwo;
string studentThree;
double quizOne;
double quizTwo;
double quizThree;
double average;

cout << "Enter name of student 1: ";
cin >> studentOne;
cout << "Enter score 1: ";
cin >> quizOne;
cout << "Enter score 2: ";
cin >> quizTwo;
cout << "enter score 3: ";
cin >> quizThree;

cout << "Name: " << studentOne << endl;
average = (quizOne + quizTwo + quizThree) / 3;
cout << "Average: " << setprecision(2) << fixed  << average << endl;

  return 0;
}
