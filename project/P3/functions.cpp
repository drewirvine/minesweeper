#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

int boardSizeLength;
int amountOfMines;

const int MAX_SIDE = 12;
const int MAX_MINES = 40;
const int MOVING_SIZE = 104; // 12 x 12 = 104 - 40

bool isLoad = false;

/******************************
 *
 *
 *
 */
// function to check if the cell is valid
bool isValid(int row, int col) {
  // Returns true if number and column number check out
  return (row >= 0) && (row < boardSizeLength) && (col >= 0) &&
         (col < boardSizeLength);
}

/******************************
 *
 *
 *
 */

bool saveGame(char mineBoard[][MAX_SIDE], char userBoard[][MAX_SIDE],
              int boardSizeLength) {
  ofstream fout;
  fout.open("minesweeperGame.txt");
  if (!fout.is_open()) {
    cout << "The file could not be opened" << endl;
    return false;
  }

  for (int i = 0; i < boardSizeLength; i++) {
    for (int j = 0; j < boardSizeLength; j++) {
      fout << mineBoard[i][j];
    }
  }
  fout << endl;
  for (int i = 0; i < boardSizeLength; i++) {
    for (int j = 0; j < boardSizeLength; j++) {
      fout << userBoard[i][j];
    }
  }
  fout.close();
  return true;
}

bool loadGame(char mineBoard[][MAX_SIDE], char userBoard[][MAX_SIDE],
              int mines[0][2]) {
  ofstream fout;
  ifstream fin;
  fin.open("minesweeperGame.txt");
  if (!fin.is_open()) {
    cout << "The file could not be opened" << endl;
    return false;
  }
  string input;
  fin >> input;
  boardSizeLength = sqrt(input.size());
  // count number of mines
  amountOfMines = 0;
  for (int i = 0; i < input.size(); i++) {
    if (input[i] == '@') {
      mines[amountOfMines][0] = i / boardSizeLength;
      mines[amountOfMines][1] = i % boardSizeLength;
      amountOfMines++;
    }
  }
  for (int i = 0; i < boardSizeLength; i++) {
    for (int j = 0; j < boardSizeLength; j++) {
      mineBoard[i][j] = input[i * boardSizeLength + j];
      //   cout << "(" << i << ", " << "(" << j << ") " << input[(i *
      //   (boardSizeLength - 1)) + j] << endl;
    }
  }
  fin >> input;
  for (int i = 0; i < boardSizeLength; i++) {
    for (int j = 0; j < boardSizeLength; j++) {
      userBoard[i][j] = input[i * boardSizeLength + j];
    }
  }
  isLoad = true;
  return true;
}

/******************************
 *
 *
 *
 */

/******************************
 *
 *
 *
 */
// function to check for a mine
bool isMine(int row, int col, char board[][MAX_SIDE]) {
  if (board[row][col] == '@') {
    return (true);
  } else {
    return (false);
  }
}

string whyQuit;
/******************************
 *
 *
 *
 */

bool wayMaker(int &x, int &y, char mineBoard[][MAX_SIDE],
              char userBoard[][MAX_SIDE]) {
  cout << "------------------" << endl;
  cout << "Get ready to Move!" << endl;
  cout << "------------------" << endl;
  cout << "Press '0' to quit and save" << endl;
  cout << "Press '-1' to quit without saving" << endl;
  cout << endl;
  cout << "Row Number: ";
  cin >> x;
  if (x == 0) {
    saveGame(mineBoard, userBoard, boardSizeLength);
    // cout << "Game Saved" << endl;
    whyQuit = "Game Saved";
    return false;
  }
  if (x == -1) {
    //   cout << "User quit" << endl;
      whyQuit = "User Quit";
      return false;
  }
    cout << "Column Number: ";
  cin >> y;
  x = x - 1;
  y = y - 1;
  return true;
}

/******************************
 *
 *
 *
 */

int welcome(char mineBoard[][MAX_SIDE], char userBoard[][MAX_SIDE]) {
  const int NEW_GAME = 1;
  const int LOAD_GAME = 2;
  int welcomeChoice;
  bool isValid = true;
  cout << "Hello and Welcome to Mine Sweeper!" << endl;
  cout << "==================================" << endl;
  cout << "Would you like to start a new game" << endl;
  cout << "or load an existing one?" << endl;
  cout << "----------------------------------" << endl;
  cout
      << "Enter the number 1 for new game. Enter the number 2 to load a game: ";
  cin >> welcomeChoice;
  cout << endl;

  if (welcomeChoice == 1) {
    cout << "Awesome! New game coming right up!" << endl;
  } else if (welcomeChoice == 2) {
    cout << "Awesome! Loading old game." << endl;
  } else {
    cout << endl;
    cout << "=================================================================="
            "====="
         << endl;
    cout << "Uh oh! It looks like you entered an invalid number, restarting "
            "program."
         << endl;
    cout << "=================================================================="
            "====="
         << endl;
    cout << endl;
  }
  return welcomeChoice;
}

/*********************************************
 *
 *
 *
 */

bool chooseBoardSize() { // function to choose the board size

  //   int boardSize; // User's choice of Board size entered in by one number

  cout << "-----------------------" << endl;
  cout << "Choose your Board size!" << endl;
  cout << "-----------------------" << endl;
  cout << "Recommended Sizes" << endl;
  cout << "(Easy = 8x8)" << endl;
  cout << "(Hard = 12x12)" << endl;
  cout << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "NOTE: board sizes must be between 6 and 12." << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << endl;
  //   cout << "Becuase of the challenging code, please enter one number that we
  //   "
  //           "will use to make a square. "
  //        << endl;
  cout << endl;
  do {
    cout << "Board Size: ";
    cin >> boardSizeLength;
    cout << endl;
    if (boardSizeLength <= 8 && boardSizeLength >= 6) {
      amountOfMines = 10;
    } else if (boardSizeLength > 8 && boardSizeLength <= 12) {
      amountOfMines = 40;
      // } else if (boardSizeLength > 12 && boardSizeLength <= 16) {
      //   amountOfMines = 99;
    } else { // Checking for the min and max allowed size
      cout << endl;
      cout << "================================================================"
              "=="
              "====="
           << endl;
      cout << "Uh oh! It looks like you entered an invalid number, restarting "
              "checkpoint."
           << endl;
      cout << "================================================================"
              "=="
              "====="
           << endl;
      cout << endl;
      return false;
    }
  } while (boardSizeLength <= 4 && boardSizeLength >= 20);
  // DEBUGGER CODE
  cout << "Mines Present: " << amountOfMines << endl;
  return true;
}
// int main() {
//   cout << "Function Test Call: " << endl;
//   cout << welcome() << endl;
//   chooseBoardSize();
//   return 0;
//}
/*********************************************
 *
 *
 *
 */

void resetGame(char mineBoard[][MAX_SIDE],
               char userBoard[][MAX_SIDE]) { // randomize the game and set all
                                             // cells to blank
  // mineBoard is the board that stores the locations of the mines
  // userBoard is the board that the user sees whie playing the game
  srand(time(0));

  // Assign all the cells as mine-free
  for (int i = 0; i < boardSizeLength; i++) {
    for (int j = 0; j < boardSizeLength; j++) {
      mineBoard[i][j] = userBoard[i][j] = '-';
    }
  }

  return;
}
/*********************************************
 *
 *
 *
 */
// This function replaces the mine if the user picks the spot it's on as their
// first move
void mineReplace(int row, int col, char board[][MAX_SIDE]) {
  for (int i = 0; i < boardSizeLength; i++) {
    for (int j = 0; j < boardSizeLength; j++) {
      if (board[i][j] != '@') {
        board[i][j] = '@';
        board[row][col] = '-';
        return;
      }
    }
  }
  return;
}

/*********************************************
 *
 *
 *
 */
void placeMines(int mines[MAX_MINES][2], char mineBoard[][MAX_SIDE]) {
  bool indicator[MAX_SIDE * MAX_SIDE];

  memset(indicator, false, sizeof(indicator));

  for (int i = 0; i < amountOfMines;) {
    int random = rand() % (boardSizeLength * boardSizeLength);
    int x = random / boardSizeLength;
    int y = random % boardSizeLength;

    if (indicator[random] == false) {
      mines[i][0] = x;
      mines[i][1] = y;

      // Placement
      mineBoard[mines[i][0]][mines[i][1]] = '@';
      indicator[random] = true;
      i++;
    }
  }
}

/*********************************************
 *
 *
 *
 */
// This is a function to count how many cells away the bombs are from the
// already uncovered spaces.
int neighborMines(int row, int col, int mines[][2],
                  char mineBoard[][MAX_SIDE]) {

  int count = 0;

  // North cell
  if (isValid(row - 1, col) == true) {
    if (isMine(row - 1, col, mineBoard) == true) {
      count++;
    }
  }

  // East Cell
  if (isValid(row, col + 1) == true) {
    if (isMine(row, col + 1, mineBoard) == true) {
      count++;
    }
  }

  // South Cell
  if (isValid(row + 1, col) == true) {
    if (isMine(row + 1, col, mineBoard) == true) {
      count++;
    }
  }

  // West Cell
  if (isValid(row, col + 1) == true) {
    if (isMine(row, col - 1, mineBoard) == true) {
      count++;
    }
  }

  // NorthEast Cell
  if (isValid(row - 1, col + 1) == true) {
    if (isMine(row - 1, col + 1, mineBoard) == true) {
      count++;
    }
  }

  // NorthWest Cell
  if (isValid(row - 1, col - 1) == true) {
    if (isMine(row - 1, col - 1, mineBoard) == true) {
      count++;
    }
  }

  // SouthEast Cell
  if (isValid(row + 1, col + 1) == true) {
    if (isMine(row + 1, col + 1, mineBoard) == true) {
      count++;
    }
  }

  // SouthWest Cell
  if (isValid(row + 1, col - 1) == true) {
    if (isMine(row + 1, col - 1, mineBoard) == true) {
      count++;
    }
  }

  return count;
}

/*********************************************
 *
 *
 *
 */

void printUserBoard(char userBoard[][MAX_SIDE]) {

  for (int i = -1; i < boardSizeLength; i++) {
    for (int j = -1; j < boardSizeLength; j++) {
      if (i == -1 && j == -1) {
        cout << "    ";
      } else if (i == -1) {
        cout << j + 1 << "   ";
      } else if (j == -1) {
        cout << i + 1 << "   ";
      } else {
        cout << userBoard[i][j] << "   ";
      }
    }
    cout << endl << endl;
  }
  cout << endl;
}

/******************************
 *
 *
 *
 */

bool gameTime(char userBoard[][MAX_SIDE], char mineBoard[][MAX_SIDE],
              int mines[0][2], int row, int col, int &movesRemaining) {

  if (userBoard[row][col] != '-') {
    return (false); // get out
  }
  // User Clicks Mine
  if (mineBoard[row][col] == '@') {
    userBoard[row][col] = '@';

    cout << "amountOfMines: " << amountOfMines << endl;
    for (int i = 0; i < amountOfMines; i++) {
      userBoard[mines[i][0]][mines[i][1]] = '@';
    }
    printUserBoard(userBoard);
    cout << "KABOOM YOU LOSE";
    cout << endl;
    return (true);

  } else {
    int count = neighborMines(row, col, mines, mineBoard);
    movesRemaining--;

    userBoard[row][col] = count + '0';

    if (!count) {

      // North Cell
      if (isValid(row - 1, col) == true) {
        if (isMine(row - 1, col, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row - 1, col, movesRemaining);
        }
      }

      // EastCell
      if (isValid(row, col + 1) == true) {
        if (isMine(row, col + 1, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row, col + 1, movesRemaining);
        }
      }

      // SouthCell
      if (isValid(row + 1, col) == true) {
        if (isMine(row + 1, col, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row + 1, col, movesRemaining);
        }
      }

      // WestCell
      if (isValid(row, col - 1) == true) {
        if (isMine(row, col - 1, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row, col - 1, movesRemaining);
        }
      }

      // NorthEastCell

      if (isValid(row - 1, col + 1) == true) {
        if (isMine(row - 1, col + 1, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row - 1, col + 1,
                   movesRemaining);
        }
      }

      // NorthWestCell
      if (isValid(row - 1, col - 1) == true) {
        if (isMine(row - 1, col - 1, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row - 1, col - 1,
                   movesRemaining);
        }
      }

      // SouthEastCell
      if (isValid(row + 1, col) == true) {
        if (isMine(row + 1, col, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row + 1, col + 1,
                   movesRemaining);
        }
      }

      // SouthWestCell
      if (isValid(row + 1, col - 1) == true) {
        if (isMine(row + 1, col - 1, mineBoard) == true) {
          gameTime(userBoard, mineBoard, mines, row + 1, col - 1,
                   movesRemaining);
        }
      }
    }
    return false;
  }
  return false;
}

int main() {
  bool gameOver = false;
  char mineBoard[MAX_SIDE][MAX_SIDE];
  char userBoard[MAX_SIDE][MAX_SIDE];
  int movesRemaining = boardSizeLength * boardSizeLength - amountOfMines;
  int x;
  int y;
  int mines[MAX_MINES][2];

  int welcomeChoice = welcome(mineBoard, userBoard);

  if (welcomeChoice == 2) {
    loadGame(mineBoard, userBoard, mines);
  } else {
    while (!chooseBoardSize())
      ;

    resetGame(mineBoard, userBoard);

    placeMines(mines, mineBoard);

    // if you wanna cheat comment out the function below
    // cheater(mineBoard);
  }

  int currentMoveSpot = 0;
  while (gameOver == false) {
    cout << endl;
    cout << "Here's what the board looks like: " << endl;
    cout << "----------------------------------" << endl;
    printUserBoard(userBoard);
    if (!wayMaker(x, y, mineBoard, userBoard)) {
      cout << "Game over" << " -- " << whyQuit << endl;
      return 0;
    }

    if (currentMoveSpot == 0) {
      if (isMine(x, y, mineBoard) == true) {
        if (isLoad == false) {
          mineReplace(x, y, mineBoard);
        }
      }
    }
    currentMoveSpot++;

    gameOver = gameTime(userBoard, mineBoard, mines, x, y, movesRemaining);

    if ((gameOver == false) && (movesRemaining == 0)) {
      cout << "YEEHAWWWW YOU WON" << endl;
      gameOver = true;
    }
  }
  int userDone;
  do {
    cout << "Would you like to play again? Press 1 for yes, 2 for no.";
    cin >> userDone;
    if (userDone == 1) {
      return main();
    } else if (userDone == 2) {
      cout << "Goodbye! Have a nice day! :)" << endl;
      return 0;
    }
  } while (userDone != 1 || userDone != 2);
  return 0;
}

// Sources Cited
// https://www.geeksforgeeks.org/cpp-implementation-minesweeper-game/
// stackoverflow.com
// cplusplus.com
// zybooks.com

// Notes
// overall this game took me 18 hours in total to program over the last 3 days
// and brought me much pain and I believe it works as it's supposed to.