# Taking input from user
N = int(input())
slimes = list(map(int, input().split()))

# Initialize the count of spells required
spells = 0

# Loop through each slime color
for i in range(N-1):
    # If two adjacent slimes are of the same color, increase the spell count and change the color of the second slime
    if slimes[i] == slimes[i+1]:
        spells += 1
        slimes[i+1] = (slimes[i+1] % N) + 1

# Print the minimum number of spells required
print(spells)