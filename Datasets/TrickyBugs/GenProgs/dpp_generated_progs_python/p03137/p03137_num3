N, M = map(int, input().split())
X = list(map(int, input().split()))

X.sort()
distances = []

for i in range(M-1):
    distances.append(abs(X[i] - X[i+1]))

distances.sort(reverse=True)

total_distance = sum(distances[:N-1])
print(total_distance)