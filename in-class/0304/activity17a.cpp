#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string sport;
  ifstream fin;
  int count = 1;
  string game;
  string userInput;


cout << "Enter in Disired txt file: (alternatives.txt or sports.txt): ";
cin >> userInput;
  fin.open(userInput);
  if (!fin.is_open()) {
    cout << "Could not open file" << endl;
    return 1;
  }

  while (getline(fin, game)) {
    game.at(0) = toupper(game.at(0));
    cout << "Game " << count 
         << ": " << game << endl;
    count++;
  }

  
  fin.close();
}