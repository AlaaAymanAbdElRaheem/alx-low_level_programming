#!/usr/bin/python3
"""defining island_perimeter"""


def island_perimeter(grid):
    """that returns the perimeter of the island described in grid"""
    perimeter = 0
    row = len(grid)
    column = len(grid[0])

    for i in range(row):
        for j in range(column):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == row - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == column - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
