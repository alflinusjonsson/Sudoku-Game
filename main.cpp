#include "sudoku_solver.h"
#include <iostream>
using namespace std;

int main()
{
    if (solveSudoku())
        printSolvedSudoku();
    else
        cout << "No solution exists";

    return 0;
}

