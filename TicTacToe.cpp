#include <iostream>
using namespace std;

char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char currentPlayer = 'X';

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << "\n";
        if (i < 2) cout << "---+---+---\n";
    }
    cout << "\n";
}

bool isWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void resetBoard() {
    char num = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = num++;
    currentPlayer = 'X';
}

bool makeMove(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    if (board[row][col] == 'X' || board[row][col] == 'O')
        return false;
    board[row][col] = currentPlayer;
    return true;
}

int main() {
    char playAgain;
    do {
        resetBoard();
        bool gameEnd = false;
        while (!gameEnd) {
            displayBoard();
            int move;
            cout << "Player " << currentPlayer << " enter your move (1-9): ";
            cin >> move;
            if (move < 1 || move > 9 || !makeMove(move)) {
                cout << "Invalid move! Try again.\n";
                continue;
            }
            if (isWin()) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                gameEnd = true;
            } else if (isDraw()) {
                displayBoard();
                cout << "It's a draw!\n";
                gameEnd = true;
            } else {
                switchPlayer();
            }
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    return 0;
}
