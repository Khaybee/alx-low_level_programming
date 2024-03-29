#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    Args:
         grid (List[List[int]]): A list of lists representing the grid.
    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
            if row > 0 and grid[row - 1][col] == 1:
                perimeter -= 2 
            if (col > 0 and grid[row][col - 1] == 1):
                perimeter -= 2

            return perimeter
