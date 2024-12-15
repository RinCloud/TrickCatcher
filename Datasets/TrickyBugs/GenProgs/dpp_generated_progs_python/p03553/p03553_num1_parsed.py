def gemstones(N, gems):
    max_earnings = 0
    for x in range(1, N+1):
        earnings = 0
        for i in range(1, N+1):
            if i % x != 0:
                earnings += gems[i-1]
        max_earnings = max(max_earnings, earnings)
    return max_earnings

N = int(input())
gems = list(map(int, input().split()))

print(gemstones(N, gems))
