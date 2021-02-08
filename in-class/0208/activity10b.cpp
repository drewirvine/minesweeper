#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // put first 100 powers of two in x
  //   vector<double> x(100);
  //   for (int i = 0; i < x.size(); i++) {
  //     x.at(i) = pow(2,i);
  //   }

  //   // define scores
  //   vector<int> y = {95, 68, 82, 75, 84, 79, 73, 91};

  //   // sum the elements of scores
  //   int sum = 0;
  //   for (int i = 0; i < y.size(); i++) {
  //       sum += y.at(i);
  //   }

  // vector<int> data = {5,26,13,12,37,15,16,4,1,3};
  // int accumulator = 0;
  // for (int i = 0; i < data.size(); i++) {
  //     if (data.at(i) % 2 == 1 && i + 1 < data.size()) {
  //         data.at(i) *= -1;
  //         accumulator += data.at(i+1);
  //     }
  //     cout << data.at(i) << " " <<  accumulator << endl;
  // }

  vector<double> a;
  vector<double> b;
  vector<double> myMax;

  for (int i = 0; i < a.size(); i++) {
    if (a.at(i) > b.at(i)) {
      myMax.at(i) = a.at(i);
    } else {
      myMax.at(i) = b.at(i);
    }
  }
return 0;
}