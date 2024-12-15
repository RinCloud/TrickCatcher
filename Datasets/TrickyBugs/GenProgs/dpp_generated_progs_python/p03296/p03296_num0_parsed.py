# Takahashi Slime 


def change_slime_colors(N, slimes):
    spells_required = 0
    for i in range(1, N):
        if slimes[i] == slimes[i-1]:
            spells_required += 1
            slimes[i] = slimes[i-1] + 1
    return spells_required

# Read input
N = int(input())
slimes = list(map(int, input().split()))

# Call function and print result
print(change_slime_colors(N, slimes))