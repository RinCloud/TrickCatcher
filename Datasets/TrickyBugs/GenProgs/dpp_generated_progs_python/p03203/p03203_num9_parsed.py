# Start of code
H, W, N = map(int, input().split())
X = []
Y = []
for _ in range(N):
    x, y = map(int, input().split())
    X.append(x)
    Y.append(y)

actions = 0
for i in range(N):
    if i == 0:
        actions += X[i] - 1 + Y[i] - 1
    else:
        actions += max(X[i] - X[i-1], Y[i] - Y[i-1])

# Output the result
print(actions)
# End of code