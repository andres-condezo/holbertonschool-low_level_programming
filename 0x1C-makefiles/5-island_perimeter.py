#!/usr/bin/python3
"""Island_perimeter module"""


def island_perimeter(grid):
    """That returns the perimeter of the island described in grid"""

    count = 0

    for row in grid:
        for column in row:
            if column == 1:
                count += 1

    if count == 0:
        perimeter = 0
    else:
        perimeter = 2 * (count + 1)

    return perimeter
