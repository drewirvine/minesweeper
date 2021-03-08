#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string input(string prompt);

int main() {
    char userDone;
  ofstream fout;
  fout.open("studentInfo.txt", ofstream::app);

do {
  string firstName = input("Enter first name: ");
  string lastName = input("Enter last name: ");
  string studentID = input("Enter student ID: ");

  fout << "Name: " << firstName << " " << lastName << endl;
  fout << "Student ID: " << studentID << endl;
  fout << endl;

  cout << "Do you wish to enter another name? (y/n): ";
  cin >> userDone;
} while (userDone != 'n');
  fout.close();
   
  cout << "Done! Data is saved in file: studentInfo.txt" << endl;
}

string input(string prompt) {
  string temp;
  cout << prompt;
  cin >> temp;
  return temp;
}
