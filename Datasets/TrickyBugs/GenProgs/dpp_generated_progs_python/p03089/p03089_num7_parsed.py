N = int(input())
b = list(map(int, input().split()))

a = [0] * N

for j in range(N):
    for i in range(j, 0, -1):
        if a[i-1] == 0 and b[j] == j+1:
            a[i-1] = j+1
            break
    else:
        print(-1)
        exit()

for num in a:
    print(num)