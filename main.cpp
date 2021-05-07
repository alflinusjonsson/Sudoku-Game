#include "sudoku_solver.h"
#include "sudoku_boards.h"
#include <iostream>
using namespace std;

int main()
{
    int option;
    cout <<  "Welcome to this Soduku game!" << endl;
    cout << "Choose option by typing in corresponding value." << endl;
    cout << "1. Solve worlds hardest sudoku." << endl;
    cout << "2. Type in your own sudoku and solve it." << endl;
    cin >> option;
    cout << "-------------------------\n" << endl;

    switch (option){
    case 1:
        cout << "Unsolved:" << endl;
        printSudoku(AIEscargot);
        cout << "\nSolved:" << endl;
        if(solveSudoku(AIEscargot))
            printSudoku(AIEscargot);
        break;
    case 2:
        cout << "Type in your sudoku row by row, empty cells should be marked with 0" << endl;
        fillTable(userSudoku);
        cout << "Unsolved:" << endl;
        printSudoku(userSudoku);
        cout << "\nSolved:" << endl;
        if(solveSudoku(userSudoku))
            printSudoku(userSudoku);
        break;
    default:
        cout << "Invalid input, please restart application!" << endl;
        break;
    }

    return 0;
}



