/****************************************************************************
 *
 * hw17: Read a file of Scrabble letter values, a file of words (based on a
 * filename provided on the command line), and output  each word and its
 * points to another file.
 *
 * File Name: scrabble.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 3) {
    cerr << "ERROR: You must supply two file names on the command line" << endl;
    return 1;
  }
  ifstream fin;
  fin.open("letters.txt");
  vector<int> letterPoints;
  string trash;
  string point;
  for (int i = 0; i < 26; i++) {
    getline(fin, trash, ' ');
    getline(fin, point, '\n');
    letterPoints.push_back(static_cast<int>(point[0]) - 48);
  }

  fin.close();
  ofstream fout;
  fout.open(argv[2]);
  fin.open(argv[1]);
  while (!fin.eof()) {
    string word;
    getline(fin, word, '\n');
    int sum = 0;
    for (int i = 0; i < word.size(); i++) {
      sum += letterPoints.at(word[i] - 97);
    }
    fout << word << ' ' << sum << endl;
  }
  return 0;
}
