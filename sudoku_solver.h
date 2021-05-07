#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

// EMPTY CELL is used for unassigned
// cells i.e empty cells (0)
#define EMPTY_CELL 0

// N is used for the size of Sudoku grid.
// Size will be NxN
#define N 9

/* Takes a partially filled-in board and attempts
to assign values to all unassigned locations in
such a way to meet the Sudoku rules, i,e non-duplication across rows,
columns, and boxes.
*/
bool solveSudoku(int sudoku[N][N]);

/* Searches the table for empty cells, i.e cells market with 0.
If found, the function will store this location in row and col and true is returned.
If no empty cells are found, false is returned.
*/
bool findEmptyCell(int sudoku[N][N], int& row, int& col);

/* Returns a boolean which indicates whether
an given number in the specified row already exist or not.
*/
bool isUsedInRow(int sudoku[N][N], int row, int num);

/* Returns a boolean which indicates whether
an given number in the specified column already exist or not
*/
bool isUsedInCol(int sudoku[N][N], int col, int num);

/* Returns a boolean which indicates whether
an assigned number exists or not within a specified 3x3 box.
*/
bool isUsedInBox(int sudoku[N][N], int boxStartRow, int boxStartCol, int num);

/* Returns a boolean which indicates whether
it will be legal to place given number to the row, col location.
*/
bool isPlacementValid(int sudoku[N][N], int row, int col, int num);

/*
 * Prints given suduku table
*/
void printSudoku(int sudoku[N][N]);

/*
 * Fills empty table with user input
*/
void fillTable(int grid[N][N]);

#endif // SUDOKU_SOLVER_H
