def max_nutrition(N, C, sushi):
    l = [0] * N
    r = [0] * N

    l[0] = sushi[0][1] - sushi[0][0]
    r[N-1] = sushi[N-1][1] - (C - sushi[N-1][0])

    for i in range(1, N):
        l[i] = l[i-1] + sushi[i][1] - (sushi[i][0] - sushi[i-1][0])
    
    for i in range(N-2, -1, -1):
        r[i] = r[i+1] + sushi[i][1] - (sushi[i+1][0] - sushi[i][0])

    ans = max(max(l), max(r), 0)

    for i in range(1, N-1):
        ans = max(ans, l[i] + r[i+1] - sushi[i][0])

    return ans

N, C = map(int, input().split())
sushi = [list(map(int, input().split())) for _ in range(N)]

print(max_nutrition(N, C, sushi))