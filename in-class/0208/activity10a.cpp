#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

  vector<int> quizScores = {8,6};
  vector<string> profNames(4);
  vector<double> homeworkAvg = {91.6 , 73.9 , 82.4};


  profNames.at(0) = "Carman";
  profNames.at(1) = "Foster";
  profNames.at(2) = "Duncan";
profNames.at(3) = profNames.at(1);
profNames.at(1) = profNames.at(0);
profNames.at(0) = "Aamodt";

// cout << profNames.at(3) << endl;

  cout << quizScores.size() << endl;
  cout << profNames.at(1) << endl;
  cout << (quizScores.at(0) + quizScores.at(1)) / 2 << endl;
  cout << "There are " << profNames.size() << " CS professors at WWU" << endl;
  cout << "Total number of quiz points: " << quizScores.size() * 10 << endl;
//   cout << profNames.at(profNames.size()) << endl;
  cout << profNames.at(profNames.size() - 1) << endl;

  return 0;
}