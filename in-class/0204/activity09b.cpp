#include <iostream>
using namespace std;

int main() {

  int rows = 8, cols = 10;
   
   int x = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << ++x << " ";
    }
    cout << endl;
    x = 1;
  }

  return 0;
}