#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): A list of list of integers. Each element represents a cell
                     in the grid, where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the input grid is not rectangular or if it contains
                    values other than 0 and 1.
    """

    # Check if the grid is rectangular and contains only 0s and 1s
    width = len(grid[0])
    for row in grid:
        if len(row) != width:
            raise ValueError("Grid is not rectangular")
        for cell in row:
            if cell not in (0, 1):
                raise ValueError("Grid contains invalid values")

    # Calculate the perimeter by counting the number of sides that are
    # adjacent to water or the edge of the grid
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
