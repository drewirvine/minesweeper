#include <iostream>
using namespace std;

// void printMessage() {
//   cout << "Welcome to C++." << endl;
//   cout << "Learn the power of functions!" << endl;
// }

void frogPrint() {
  cout << "   @..@  " << endl;
  cout << "  (----) " << endl;
  cout << " ( >__< ) " << endl;
  cout << " ^^ ~~ ^^ " << endl;
}

int main() {
  //   cout << "Hello Programmer!" << endl;
  //   printMessage();
  //   printMessage();
  for (int i = 0; i < 4; i++) {
    cout << "Frog " << i + 1 << "..." << endl;
    frogPrint();
    cout << endl;
  }
}