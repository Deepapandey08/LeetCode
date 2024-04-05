#include<iostream>
using namespace std;

const int N = 4; // Assuming a 4x4 chessboard

bool check(int row, int column, int board[][N]) {
    int i, j;
    // Check if there is a queen in the same column
    for (i = row; i >= 0; i--) {
        if (board[i][column] == 1) {
            return false;
        }
    }
    // Check upper diagonal on left side
    for (i = row, j = column; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    // Check upper diagonal on right side
    for (i = row, j = column; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    return true;
}

bool placeQueen(int board[][N], int row) {
    // Base case: If all queens are placed, return true
    if (row == N) {
        return true;
    }
    for (int i = 0; i < N; i++) {
        // Check if the queen can be placed on board[row][i]
        if (check(row, i, board)) {
            // Place the queen
            board[row][i] = 1;
            // Recur to place rest of the queens
            if (placeQueen(board, row + 1)) {
                return true;
            }
            // If placing queen at board[row][i] doesn't lead to a solution, backtrack
            board[row][i] = 0;
        }
    }
    return false; // If queen can't be placed in any column in this row, return false
}

int main() {
    int board[N][N] = {0}; // Initialize board to 0
    if (placeQueen(board, 0)) {
        // Print the board
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Solution does not exist";
    }
    return 0;
}
