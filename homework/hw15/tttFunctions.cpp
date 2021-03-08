/*************************************************************************
 *
 * HW15: Using 2D arrays to implement a tic-tac-toe game
 *
 * File Name:  tttFunctions.cpp
 * Course:     CPTR 141
 *
 */

#include "tttFunctions.h"
#include <iostream>
using namespace std;

char getWinner(char board[][NUM_COLS], int NUM_ROWS) {
  for (int i = 0; i < 3; i++) { // Horizontal Loop
    if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
      return 'X';
    }
    if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
      return 'O';
    }
  }
  for (int j = 0; j < 3; j++) { // Vertical Loop
    if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X') {
      return 'X';
    }
    if (board[0][j] == 'O' && board[1][j] == 'O' && board[2][j] == 'O') {
      return 'O';
    }
  }
  // Diaginol Loop for X
  if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
      (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
    return 'X';
  }
  // diaginol Loop for o
  if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
      (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
    return 'O';
  }
  bool isFull = true;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] == ' ') {
        isFull = false;
      }
    }
  }
  return isFull ? '-' : ' ';
}