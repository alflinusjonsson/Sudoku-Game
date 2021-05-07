# Sudoku-game
Can solve any given Sudoku, see example boards and input in example_boards.txt

This sudoku solver uses backtracking to assigning numbers one by one to empty cells. Before assigning a number, we check whether if the placement if valid or not by looking for  
the same number in the current row, current column and current 3X3 subgrid. After checking if the placement is valid we assign the number and recursively check whether this assignment leads to a solution or not (more or less we are guessing). If the placement doesn’t lead to a solution we set back this cell to 0 (empty) and try again with a different number... repeat until done!

![Backtracking](https://github.com/alflinusjonsson/Sudoku-game/blob/master/backtracking.png)
