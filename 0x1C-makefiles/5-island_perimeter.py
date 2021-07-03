#!/usr/bin/python3
"""Island_perimeter module"""


def island_perimeter(grid):
    """That returns the perimeter of the island described in grid"""

    # count = 0
    base_actual = 0
    base_max = 0
    altura = 0

    for row in grid:
        base_actual = 0
        for column in row:
            if column == 1:
                base_actual += 1
                if base_actual > base_max:
                    base_max = base_actual
        if base_actual != 0:
            altura += 1

    perimeter = 2 * (base_max + altura)

    return perimeter
