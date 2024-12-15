# Fetching inputs
N, X = list(map(int, input().split()))
m = []
for _ in range(N):
    m.append(int(input()))

# Sorting the m in non-decreasing order
m.sort()

# Calculating the number of doughnuts that can be made
doughnuts = 0
for i in range(N):
    X -= m[i]
    if X >= 0:
        doughnuts += 1
    else:
        break

# Adding additional doughnuts for each kind
for i in range(doughnuts, N):
    if X >= m[i]:
        doughnuts += 1
        X -= m[i]
    else:
        break

# Printing the maximum number of doughnuts that can be made
print(doughnuts)