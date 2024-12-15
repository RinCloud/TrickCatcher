# Reading the input
N = int(input())
d = []
for _ in range(N):
  d.append(int(input()))

# Sorting the mochi diameters in ascending order
d.sort()

# Counting the unique diameters
unique_diameters = set()
for i in range(N):
  unique_diameters.add(d[i])

# Printing the number of unique diameters
print(len(unique_diameters))