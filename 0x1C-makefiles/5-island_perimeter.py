#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of an island described in grid.
    
    Args:
        grid (list of list of int): The grid representing the island.
    
    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                # Start with a perimeter of 4 for each land cell
                perimeter += 4
                
                # Check the cell above
                if r > 0 and grid[r-1][c] == 1:
                    perimeter -= 2
                
                # Check the cell to the left
                if c > 0 and grid[r][c-1] == 1:
                    perimeter -= 2

    return perimeter
