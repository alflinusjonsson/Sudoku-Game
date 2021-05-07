#include <iostream>
#include "sudoku_solver.h"

using namespace std;

bool solveSudoku(int sudoku[N][N]){
    int row, col;

    // Do we have any empty cells left?
    if (!findEmptyCell(sudoku, row, col))
        return true;

    for (int num = 1; num <= 9; num++)
    {
        // Can we place given number here?
        if (isPlacementValid(sudoku, row, col, num))
        {
            // We guess num could fit here
            sudoku[row][col] = num;

            // Return, if success
            if (solveSudoku(sudoku))
                return true;

            // Failed, our guess was wrong. Set cell back to 0 (empty) and start over again
            sudoku[row][col] = EMPTY_CELL;
        }
    }

    // Trigger backtracking!
    return false;
}

bool findEmptyCell(int sudoku[N][N],int& row, int& col){
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (sudoku[row][col] == EMPTY_CELL)
                return true;
    return false;
}

bool isUsedInRow(int sudoku[N][N], int row, int num){
    for (int col = 0; col < N; col++)
        if (sudoku[row][col] == num)
            return true;
    return false;
}

bool isUsedInCol(int sudoku[N][N], int col, int num){
    for (int row = 0; row < N; row++)
        if (sudoku[row][col] == num)
            return true;
    return false;
}

bool isUsedInBox(int sudoku[N][N], int boxStartRow, int boxStartCol, int num){
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (sudoku[row + boxStartRow] [col + boxStartCol] == num)
                return true;
    return false;
}

bool isPlacementValid(int sudoku[N][N], int row, int col, int num){
    return !isUsedInRow(sudoku, row, num) &&
            !isUsedInCol(sudoku, col, num) &&
            !isUsedInBox(sudoku, row - row % 3, col - col % 3, num)
            && sudoku[row][col] == EMPTY_CELL;
}

void fillTable(int table[N][N]){
    for(int col = 0; col < N; col++){
        for (int row = 0; row < N; row++){
            int input;
            cin >> input;
            table[col][row] = input;
        }
    }
}

void printSudoku(int sudoku[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (col == 3 || col == 6)
                cout << " | ";
            cout << sudoku[row][col] << " ";
        }
        if (row == 2 || row == 5) {
            cout << endl;
            for (int i = 0; i < N; i++)
                if (i == N - 1) {
                    break;
                }
                else {
                    cout << "---";
                }
        }
        cout << endl;
    }
}
