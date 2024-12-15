# Read the number of mochi

n = int(input())

# Create a set to store unique mochi diameters

mochi_diameters = set()

# Read the diameters and add them to the set

for _ in range(n):
    mochi_diameters.add(int(input()))

# Print the number of unique mochi diameters

print(len(mochi_diameters))