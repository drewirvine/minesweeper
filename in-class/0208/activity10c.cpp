#include <iostream>
#include <vector>
using namespace std;

int main() {

//   vector<int> myVec = {25,12,73,19,42};

  // First set of commands
//   myVec.pop_back();
//   myVec.insert(myVec.begin()+2,55);
//   myVec.erase(myVec.begin()+1);

  // Second set of commands
//   myVec.resize(7);
//   myVec.at(5) = 31;
//   myVec.insert(myVec.end()-3,90);
//   myVec.push_back(27);

  // print out final fector
//   for (int i = 0; i < myVec.size(); i++) {
//       cout << myVec.at(i) <<  " ";
//   }

vector<char> myVec = {'x', 'A', 'c', 'Y', 'w'};

// myVec.erase(myVec.begin());
// myVec.insert(myVec.begin() + 3, 'n');
// myVec.push_back('V');
// myVec.erase(myVec.begin() + 2);
// myVec.insert(myVec.begin() +1, 'h');

// myVec.erase(myVec.begin() + 2);
// myVec.erase(myVec.begin() + 2);
// myVec.push_back('Z');



  for (int i = 0; i < myVec.size(); i++) {
      cout << myVec.at(i) <<  " ";
  }




  cout << endl;



  return 0;
}