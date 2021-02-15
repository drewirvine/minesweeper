#include <ctime>
#include <iostream>
using namespace std;

// Print celebratory rocket

void printRocket() {
  cout << "Blast-off!" << endl;
  cout << "  ^" << endl;
  cout << " /*\\" << endl;
  cout << "/***\\" << endl;
  cout << "|***|" << endl;
  cout << "|***|" << endl;
  cout << "|#|#|" << endl;
}

// give problem and check answer
bool giveProblem(int num1, int num2) {
  int studentAns;
  int correctAns = num1 + num2;
  cout << num1 << "+" << num2 << "=";
  cin >> studentAns;
  return studentAns == correctAns;
}

int main() {
  srand(time(0)); // seed random num
  int numCorrect = 0;
  for (int i = 0; i < 5; i++) {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    if (giveProblem(num1, num2)) {
      cout << "Correct!" << endl;
      numCorrect++;
    } else {
      cout << "Incorrect! It is " << (num1 + num2) << endl;
    }
  }
  if (numCorrect == 5) {
    cout << "Congratulations! You got all 5 correct." << endl;
  } else {
    cout << "You got " << numCorrect << " correct." << endl;
  }
}