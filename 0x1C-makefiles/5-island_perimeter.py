#!/usr/bin/python3
"""
A module to calculate island perimeter
"""


def island_perimeter(grid):
    """Returns perimeter of an island
    Argument:
        grid - list
    """
    perimeter = 0
    left_top = 0
    for row in range(0, len(grid)):
        for column in range(0, len(grid[0])):
            if grid[row][column] == 1:
                perimeter += 4
                if row != 0 and grid[row - 1][column] == 1:
                    left_top += 1
                if column != 0 and grid[row][column - 1] == 1:
                    left_top += 1
    return perimeter - (left_top*2)
