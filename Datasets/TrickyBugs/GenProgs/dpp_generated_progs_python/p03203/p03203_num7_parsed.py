from collections import defaultdict

def play_game(H, W, N, obstacles):
    # create a defaultdict to keep track of the obstacles
    grid = defaultdict(lambda: False)

    # iterate through the obstacles and mark them as True in the grid
    for obstacle in obstacles:
        x, y = obstacle
        grid[(x, y)] = True

    # initialize the position of the piece and the number of actions
    x, y = 1, 1
    actions = 0

    # iterate until the piece does not move twice in a row
    while True:
        # check if the piece can move to the adjacent cell
        if grid[(x + 1, y)] == False:
            # move the piece to the adjacent cell
            x += 1
            actions += 1
        else:
            # the piece cannot move, game ends
            break

        # check if the piece can move to the adjacent cell
        if grid[(x, y + 1)] == False:
            # move the piece to the adjacent cell
            y += 1
            actions += 1
        else:
            # the piece cannot move, game ends
            break

    return actions

# parse the input
H, W, N = map(int, input().split())
obstacles = [tuple(map(int, input().split())) for _ in range(N)]

# play the game and print the result
result = play_game(H, W, N, obstacles)
print(result)