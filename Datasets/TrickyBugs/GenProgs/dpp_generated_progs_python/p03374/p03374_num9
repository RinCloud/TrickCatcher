def max_nutrition(N, C, sushi):
    ans = 0
    left_sum = 0
    right_sum = sum([s[1] for s in sushi])
    for i in range(N):
        left_sum += sushi[i][1]
        right_sum -= sushi[i][1]
        ans = max(ans, left_sum - sushi[i][0])
        ans = max(ans, right_sum - (C - sushi[i][0]))
    return ans
  
N, C = map(int, input().split())
sushi = [list(map(int, input().split())) for _ in range(N)]

print(max_nutrition(N, C, sushi))