#!/usr/bin/python3
"""Island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    column = len(grid)

    if column != 0:
        line = len(grid[0])
        conetected_squares = 0
        square_faces = 0

        for i in range(column):
            for j in range(line):

                if grid[i][j] == 1:
                    square_faces += 1

                    if (i > 0 and grid[i - 1][j] == 1):
                        conetected_squares += 1

                    if (j > 0 and grid[i][j - 1] == 1):
                        conetected_squares += 1

        perimeter = (square_faces * 4) - (conetected_squares * 2)
        return perimeter
