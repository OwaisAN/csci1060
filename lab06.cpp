//TIC-TAC-TOE [game]
//For some reason the computer will rather block user than win

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 3;

int generateComputerMove(string b[][SIZE], int& row, int& col);
void displayBoard(string b[][SIZE]);
bool userFirst();
bool currentPlayerWon(string b[][SIZE], string symbol);

int main() {
  //construct board
  string board[SIZE][SIZE];

  int position_id = 1;
  for (int i=0; i< SIZE; i++) {
    for (int j=0; j < SIZE; j++) {
        board[i][j] = to_string(position_id);
      /*  stringstream ss;
        ss << position_id;
        board[i][j] = ss.str();
        */position_id++;
    }
  }

  //Initial game output
  cout << "Welcome to Tic-Tac-Toe" << endl;

  bool userTurn = userFirst();
  if (userTurn == true) {
    cout << "Player goes first!" << endl;
  } else {
    cout << "Computer goes first!" << endl;
  }

  //Loop for turn taking in game
  int positionsRemaining = SIZE * SIZE;
  cout << "postionramining" << positionsRemaining << endl;
  bool userWon = false;
  bool computerWon = false;

  while ((positionsRemaining > 0)
        && (!userWon) && (!computerWon)) {
      displayBoard(board);

      //User's turn
      if (userTurn) {
        bool validMove = false;
        while (!validMove) {
          int position_id;
          cout << "Enter a position: ";
          cin >> position_id;
          if ((position_id <= (SIZE*SIZE))
              && (position_id > 0)) {
            int row = (position_id-1)/SIZE;
            int col = (position_id-1)%SIZE;
            cout << "row = " << row << " col = " << col << endl;
            if ((board[row][col] != "X")
                && (board[row][col] != "O")) {
                  board[row][col] = "X";
                  validMove = true;
            } else {
              cout << "Position already used. Try again." << endl;
            }

          } else {
            cout << "Position invalid. Try again." << endl;
          }
        }
        positionsRemaining--;
        userWon = currentPlayerWon(board, "X");
        userTurn = false;
      }

      //Computer's turn
      else {
        int row, col;
        generateComputerMove(board, row, col);
        board[row][col] = "O";
        positionsRemaining--;
        computerWon = currentPlayerWon(board, "O");
        userTurn = true;
      }
  }

  //Display game result
  displayBoard(board);
  if (userWon) {
    cout << "Congratulations! You have won!" << endl;
  } else if (computerWon) {
    cout << "The computer has won. Try again." << endl;
  } else {
    cout << "Out of moves. Try again." << endl;
  }
  return 0;
}

int generateComputerMove(string b[][SIZE], int& row, int& col){
    bool validMove = false;
        while (!validMove) {
            row;
            col;
            //Horizontal win/block
            //Loop through each row and check if there are 2 of the same symbol
            for (int i=0; i < SIZE; i++) {
                int userX = 0;
                int compO = 0;    
                //Check all positions in row and see if they are the same symbol
                for (int j = 0; j < SIZE; j++) {
                    if (b[i][j] == "X") {
                        userX++;
                    }
                    if (b[i][j] == "O") {
                        compO++;
                    }    
                }
                //if there are 2 O in the same row, comp places piece at the remaining postion to win
                if (compO == 2){
                    for (int j = 0; j < SIZE; j++){
                        if (b[i][j] != "X" && b[i][j] != "O"){
                            row = i;
                            col = j;
                            return row, col;
                        }        
                    }
                //if there are 2 X in the same row, comp places piece at the remaining postion to block win       
                } else if (userX == 2){
                    for (int j = 0; j < SIZE; j++){
                        if (b[i][j] != "X" && b[i][j] != "O"){
                            row = i;
                            col = j;
                            return row, col;
                            }    
                        }
                    }
                }
            //Vertical win/block
            //Loop through each row and check if there are 2 of the same symbol
            for (int i=0; i < SIZE; i++) {
                int userX = 0;
                int compO = 0;    
                //Check all positions in row and see if they are the same symbol
                for (int j = 0; j < SIZE; j++) {
                    if (b[j][i] == "X") {
                        userX++;
                    }
                    if (b[j][i] == "O") {
                        compO++;
                    }    
                }
                //if there are 2 O in the same column, comp places piece at the remaining postion to win
                if (compO == 2){
                    for (int j = 0; j < SIZE; j++){
                        if (b[j][i] != "X" && b[j][i] != "O"){
                            row = j;
                            col = i;
                            return row, col;
                        }        
                    }
                //if there are 2 X in the same column, comp places piece at the remaining postion to block win       
                } else if (userX == 2){
                    for (int j = 0; j < SIZE; j++){
                        if (b[j][i] != "X" && b[j][i] != "O"){
                            row = j;
                            col = i;
                            return row, col;
                            }    
                        }
                    }
                }
            //Diagonal win/block    



            //if no patterns are recognized then random    
            srand(time(NULL));
            row = rand()%SIZE;
            col = rand()%SIZE;
            if ((b[row][col] != "X")
                && (b[row][col] != "O")) {
                  return row,col;
                  validMove = true;
            }
                    
                

                
            
            
            
        }
    
    
    return row, col;
}

void displayBoard(string b[][SIZE]) {
  cout << "Tic-tac-toe board:" << endl << endl;
  for (int i=0; i< SIZE; i++) {
    for (int j=0; j < SIZE; j++) {
        cout << b[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
}

bool userFirst() {
  //set seed for random number generation
  srand(time(NULL));

  //generate a random number
  //0 for computer
  //1 for user
  int num = rand()%2;
  if (num == 0) {
    return false;
  }
  return true;
}

//Return true if player/computer with symbol (X or O) has won
bool currentPlayerWon(string b[][SIZE], string symbol) {
  //Horizontal case
  //Loop through each row
  for (int i=0; i < SIZE; i++) {
    bool rowWinDetected = true;
    //Check all positions in row and see if they are the same symbol
    for (int j = 0; j < SIZE; j++) {
      if (b[i][j] != symbol) {
        rowWinDetected = false;
      }
    }
    if (rowWinDetected) {
      return true;
    }
  }

  //Vertical case
  //Loop through each column
  for (int i=0; i < SIZE; i++) {
    bool colWinDetected = true;
    //Check all positions in column and see if they are the same symbol
    for (int j = 0; j < SIZE; j++) {
      if (b[j][i] != symbol) {
        colWinDetected = false;
      }
    }
    if (colWinDetected) {
      return true;
    }
  }

  //Diagonal case #1
  bool diagonal1WinDetected = true;
  for (int i=0; i < SIZE; i++) {
    if (b[i][i] != symbol) {
      diagonal1WinDetected = false;
    }
  }
  if (diagonal1WinDetected) {
    return true;
  }

  //Diagonal case #2
  bool diagonal2WinDetected = true;
  for (int i=0; i < SIZE; i++) {
    if (b[(SIZE-1)-i][i] != symbol) {
      diagonal2WinDetected = false;
    }
  }
  if (diagonal2WinDetected) {
    return true;
  }

  //otherwise win not diagonal2WinDetected
  return false;

}