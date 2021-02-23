/****************************************************************************
 *
 * hw10: A basic dungeon crawler adventure game
 *
 * File Name: dungeonCrawl.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <cstdlib>  // for random number generator
#include <iostream> // for cout and cin
using namespace std;

/*--------------------------------------------------------------------
 * Precodition: None
 * Postcondition:
 *   Prompts the user for a valid direction (n,s,e,w, or r for random)
 *   and loops with error message until one is given.
 */
char getValidDirection();

/*--------------------------------------------------------------------
 * Precondition: None
 * Postcondition:
 *   Randomly picks a direction to move, returning n,s,e, or w
 */
char randomDirection();

/*--------------------------------------------------------------------
 * Precondition: room is an int from 1-9, direction is n,s,e,w, or r
 * Postcondition:
 *   Move from a starting room in an indicated direction.  If we run
 *   into a wall, we will stay in the same room.  Return new room #.
 */
int move(int room, char direction);

/*--------------------------------------------------------------------
 * Precondition: player and dragon are integers between 1 and 9.
 * Postcondition:
 *   Print an ASCII map starting with room 1 in the top left corner
 *   with room numbers layed out as shown.
 *   Indicating empty rooms with a '.',         1 2 3
 *   player's room with a 'P', and the          4 5 6
 *   dragon's room with a 'D'.                  7 8 9
 */
void printMap(int player, int dragon);

// The main program
int main() {
  // starting room for player and dragon and random seed
  int player, dragon, seed, score = 0;

  // seed random number generator with input
  cout << "Enter random seed: ";
  cin >> seed;
  srand(seed);

  // pick different random starting points for the player and dragon
  do {
    player = rand() % 9 + 1;
    dragon = rand() % 9 + 1;
  } while (player == dragon);

  // print out welcome message
  cout << "You have become trapped in a 3 x 3 dungeon with a hungry dragon!"
       << endl;

  // game loop runs until the dragon catches us
  while (player != dragon) {
    printMap(player, dragon);
    player = move(player, getValidDirection());
    dragon = move(dragon, randomDirection());
    score++;
  }

  // the dragon wins
  cout << "The hungry dragon has devoured you." << endl;
  cout << "But on the bright side, you survived " << score << " rounds!"
       << endl;

  return 0;
}

// define functions

char getValidDirection() {
  char directionInfo;
  bool isValid = false;
  while (isValid == false) {
    cout << "Whence will you flee? (n)orth, (s)outh, (e)ast, (w)est, or "
            "(r)andom: ";
    cin >> directionInfo;
    if (directionInfo != 'n' && directionInfo != 's' && directionInfo != 'e' &&
        directionInfo != 'w' && directionInfo != 'r') {
      cout << "Invalid entry. ";
    } else {
      isValid = true;
    }
  }
  return directionInfo;
  // Return the directionInfo character.
}

int move(int room, char direction) {
  if (direction == 'r') {
    direction = randomDirection();
  }
  switch (direction) {

  case 110:
    if (room >= 4) { // want to move north
      return room - 3;
    } else {
      return room;
    }
    break;
  case 115:
    if (room <= 6) { // want to move south
      return room + 3;
    } else {
      return room;
    }
    break;
  case 119:
    if ((room - 1) % 3 != 0) { // want to move west
      return room - 1;
    } else {
      return room;
    }
    break;
  case 101:
    if ((room) % 3 != 0) { // want to move east
      return room + 1;
    } else {
      return room;
    }
  }
}

void printMap(int player, int dragon) {
  for (int i = 0; i < 3; i++) {
    for (int j = 1; j < 4; j++) {
      if (((3 * i)) + j == player) {
        cout << "P";
      } else if (((3 * i)) + j == dragon) {
        cout << "D";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }
}

char randomDirection() {
  int dir = rand() % 4 + 1;
  if (dir == 4)
    return 'n';
  else if (dir == 3)
    return 's';
  else if (dir == 2)
    return 'e';
  else
    return 'w';
}
