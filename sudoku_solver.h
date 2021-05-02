#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

/*
*Check if number is present in given coloum
*/
bool isPresentInCol(int col, int num);

/*
*Check if number is present in given row
*/
bool isPresentInRow(int row, int num);

/*
*Check if number is present given 3x3 box
*/
bool isPresentInBox(int boxStartRow, int boxStartCol, int num);

/*
*Find empty cell marked as zero (0)
*/
bool findEmptyCell(int& row, int& col);

/*
*Check if placement is allowed in given row, coloum and 3x3 box
*/
bool isPlacementAllowed(int row, int col, int num);

/*
*Solves given Sudoku board using recursion
*/
bool solveSudoku();

/*
*Printing solved Sudoku grid
*/
void printSolvedSudoku();

#endif // SUDOKU_SOLVER_H
