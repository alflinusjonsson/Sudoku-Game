cmake_minimum_required(VERSION 3.5)

project(SudokuGame LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SudokuGame main.cpp sudoku_solver.cpp sudoku_solver.h sudoku_boards.h)
