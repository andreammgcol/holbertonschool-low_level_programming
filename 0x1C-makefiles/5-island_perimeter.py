#!/usr/bin/python3


def island_perimeter(grid):
    """
    Method island_perimeter:
    that returns the perimeter of the island described in grid
    """
    perim = 0
    for row in range(len(grid)):
        for colum in range(len(grid[row])):
            if grid[row][colum] == 1:
                if row == 0 or grid[row - 1][colum] == 0:
                    perim += 1
                if colum == 0 or grid[row][colum - 1] == 0:
                    perim += 1
                if row == len(grid) - 1 or grid[row + 1][colum] == 0:
                    perim += 1
                if colum == len(grid[row]) - 1 or grid[row][colum + 1] == 0:
                    perim += 1
    return perim
