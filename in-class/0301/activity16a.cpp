#include <iostream>
#include <string>
#include <vector>
using namespace std;

// int main() {
//   string homeworkNames[5] = {"Variables", "If-Else", "Loops", "Vectors",
//   "Arrays"}; int pointsPossible[5] = {25, 35, 15, 20, 30}; int numStudents =
//   40;

//   for (int i = 0; i < 5; i++) {
//     cout << homeworkNames[i] << ": " << pointsPossible[i] << endl;
//   }
//   cout << pointsPossible[5] << endl;
// }

// int main() {
//   string names[100];
//   string tmpName;
//   for (int i = 0; i < 100; i++) {
//     cout << "Name " << (i + 1) << ": ";
//     cin >> names[i];
//   }
//   cout << names[45] << endl;
// }

// int table[2][1] = {{1}, {2}};
// int table [1][0] = {{0}};

// char tableTwo[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

// A B C 
// D E F 
// G H I 

int main() {
    char value;
    char tableTwo [3][3] = {{'A' ,'B','C'}, {'D','E','F'}, {'G','H','I'}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tableTwo[j] << endl;
        }
        cout << tableTwo [i] << endl;
    }
    return 0;
}