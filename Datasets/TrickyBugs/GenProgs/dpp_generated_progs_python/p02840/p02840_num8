# Read the input
N, X, D = map(int, input().split())

# Calculate the number of possible values of S - T
if D == 0:
    if X == 0:
        print(1)
    else:
        print(N + 1)
else:
    count = set()
    for k in range(N + 1):
        for i in range(N + 1):
            a = X + D * k
            b = X + D * i
            s = (k * (k - 1)) // 2 + (N - i) * (N - i + 1) // 2
            t = (i * (i - 1)) // 2 + (N - k) * (N - k + 1) // 2
            count.add(s - t)
    print(len(count))