import sys

def min_spells_required(N, colors):
    spells = 0
    for i in range(1, N):
        if colors[i] == colors[i-1]:
            spells += 1
            colors[i] = N # change color of slime to a new color
    return spells

# read input from Standard Input
N = int(sys.stdin.readline().strip())
colors = list(map(int, sys.stdin.readline().strip().split()))

# call the function and print the result
print(min_spells_required(N, colors))