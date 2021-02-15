#include <iostream>
#include <string>
using namespace std;


string getMessage(int userNum, int compNum) {
    string finalMessage;
    if(userNum < compNum) {
        finalMessage = "Sorry, the computer value is larger than yours haha.";
    }
    else if (userNum > compNum) {
        finalMessage = "Congrats, you win.";
    }
    else {
        finalMessage = "Your number is the same the computer chose.";
    }  
    return finalMessage;
}


int main() {
  int userNum, compNum;
  char tryAgain;
  srand(time(0));
  do {
    do {
      cout << "Enter a number from 1 to 5: ";
      cin >> userNum;
      if (userNum < 1 || userNum > 5) {
        cout << "Invalid Number!" << endl;
      }
    } while (userNum < 1 || userNum > 5);
    compNum = rand() % 5 + 1;
    cout << "Computer number: "
         << compNum << endl;
    cout << "Your number: " 
         << userNum << endl;
    cout << getMessage(userNum, compNum) << endl;
    cout << "Try again (y/n)? ";
    cin >> tryAgain;
  } while (tryAgain == 'y');
}