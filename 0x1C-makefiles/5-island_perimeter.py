#!/usr/bin/python3
"""Module containing perimeter calculation function"""


def island_perimeter(grid):
    """
    Calculates the perimetef of the island in grid
    args: grid
    Returns: number
    """
    perimeter = 0
    is_wall = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1 and (i == 0 or j == 0 or perimeter == 0):
                perimeter += 3
                is_wall += 1
            elif grid[i][j] == 1:
                perimeter += 2
            else:
                continue
    if is_wall == 4:
        perimeter = perimeter - 2
    if is_wall == 3:
        perimeter = perimeter - 1
    if perimeter > 0:
        perimeter += 1
    return perimeter
