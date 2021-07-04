#!/usr/bin/python3
"""Island_perimeter module"""


def island_perimeter(grid):
    """That returns the perimeter of the island described in grid"""

    height = 0
    idxs = []

    for row in grid:
        count = 0

        for index, value in enumerate(row):
            if value == 1:
                idxs.append(index)
                count += 1

        if count != 0:
            height += 1

    base = len(set(idxs))
    perimeter = 2 * (base + height)

    return perimeter
