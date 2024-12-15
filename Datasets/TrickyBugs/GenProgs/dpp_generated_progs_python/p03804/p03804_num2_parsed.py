n, m = map(int, input().split())
A = [input() for _ in range(n)]
B = [input() for _ in range(m)]

for i in range(n - m + 1):
    for j in range(n - m + 1):
        match = True
        for k in range(m):
            for l in range(m):
                if A[i+k][j+l] != B[k][l]:
                    match = False
                    break
            if not match:
                break
        if match:
            print("Yes")
            exit()

print("No")