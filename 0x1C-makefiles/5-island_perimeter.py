def island_perimeter(grid):

    px = 0
    py = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i-1][j] == 0:
                        px = px + 1
                except IndexError:
                    pass
                try:
                    if grid[i+1][j] == 0:
                        px = px + 1
                except IndexError:
                    pass
                try:
                    if grid[i][j+1] == 0:
                        py = py + 1
                except IndexError:
                    pass
                try:
                    if grid[i][j-1] == 0:
                        py = py + 1
                except IndexError:
                    pass
    return(px + py)
