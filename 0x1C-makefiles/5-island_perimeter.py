#!/usr/bin/python3

"""Island Perimeter"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    Parameters:
    - grid: a 2D list representing the grid with 0s and 1s

    Returns:
    - an integer representing the perimeter of the island
    """
    p = 0



    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if i == 0:
                        p += 1
                    elif grid[i-1][j] == 0:
                        p = p + 1
                except IndexError:
                    p += 1
                try:
                    if grid[i+1][j] == 0:
                        p = p + 1
                except IndexError:
                    p += 1
                try:
                    if grid[i][j+1] == 0:
                        p = p + 1
                except IndexError:
                    p += 1
                try:
                    if j == 0:
                        p += 1
                    elif grid[i][j-1] == 0:
                        p = p + 1
                except IndexError:
                    p += 1
    return (p)
