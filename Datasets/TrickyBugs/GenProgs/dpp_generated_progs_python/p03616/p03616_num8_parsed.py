X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())

# calculate the amount of sand in each bulb at each time t
sand_A = []
sand_B = []
t = 0
sand_A.append(t)
sand_B.append(X)
for i in range(K):
    t += r[i] - t
    sand_A.append(t)
    sand_B.append(X - sand_A[i+1])

# find the amount of sand in bulb A at each query time
for _ in range(Q):
    ti, ai = map(int, input().split())
    if ai >= sand_A[-1]:
        print(X - sand_B[-1])
    else:
        i = 0
        while sand_A[i] <= ai:
            i += 1
        print(X - sand_B[i])