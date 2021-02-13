#include <iostream>
using namespace std;

void drawBoard( string board[3][3]) {
    for (int i = 0; i < 3; i++) {
       cout << "  " << board[i][0] << "  " << "|" << "  " << board[i][1] << "  " << "|" << "  " << board[i][2] << "  " << endl;
       if (i < 2) 
       cout << "  -------------" << endl;
    }
}

int main()
{
    bool gameEnded = false;
    string boardGame[3][3];
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        boardGame[i][j] = " ";
    }
    }
    bool xTurn = true;
    while (gameEnded == false) {
    bool posEntered;
    int row;
    int col;
    do {
        cout << "enter row: " << endl;
        cin >> row;
        cout << "enter column: " << endl;
        cin >> col;
        if (row < 3 && row >= 0 && col < 3 && col >= 0 && boardGame[row][col] == " ") {
            posEntered = true;
        } else {
            cout << "Incorrect Position" << endl;
            posEntered = false;
        }
    }
    while(posEntered == false);
    if (xTurn == true) {
    boardGame[row][col] = "X";
    xTurn = false;
    } else {
    boardGame[row][col] = "O";
    xTurn = true;
    }
    drawBoard(boardGame);
    }
    return 0;
}