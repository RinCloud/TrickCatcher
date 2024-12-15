def count_triangle_combinations(N, sticks):
    count = 0
    for i in range(N):
        for j in range(i+1, N):
            for k in range(j+1, N):
                if sticks[i] != sticks[j] and sticks[j] != sticks[k] and sticks[k] != sticks[i]:
                    if sticks[i] + sticks[j] > sticks[k] and sticks[j] + sticks[k] > sticks[i] and sticks[k] + sticks[i] > sticks[j]:
                        count += 1
    return count

N = int(input())
sticks = list(map(int, input().split()))
result = count_triangle_combinations(N, sticks)
print(result)