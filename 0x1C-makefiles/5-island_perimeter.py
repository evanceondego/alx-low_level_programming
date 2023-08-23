#!/usr/bin/python3

def island_perimeter(grid):
"""
Calculate the perimeter of the island described in the grid.

Args:
grid (List[List[int]]): The grid representing the island.

Returns:
int: The perimeter of the island.
"""
perimeter = 0

rows = len(grid)
cols = len(grid[0]) if rows > 0 else 0

for row in range(rows):
for col in range(cols):
if grid[row][col] == 1:
perimeter += 4  # Start with assuming all sides are exposed

#Check neighboring cells and reduce perimeter for adjacent land
if row > 0 and grid[row - 1][col] == 1:
perimeter -= 1
if row < rows - 1 and grid[row + 1][col] == 1:
perimeter -= 1
if col > 0 and grid[row][col - 1] == 1:
perimeter -= 1
if col < cols - 1 and grid[row][col + 1] == 1:
perimeter -= 1

return perimeter
