X, N = map(int, input().split())
p = set(map(int, input().split()))

# Initialize the nearest value to X
nearest = X

# Check for the integer nearest to X
for i in range(1, 101):
    if i not in p and abs(i - X) < abs(nearest - X):
        nearest = i

print(nearest)
