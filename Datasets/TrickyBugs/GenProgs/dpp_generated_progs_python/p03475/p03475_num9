from heapq import heappush, heappop

def solve(N, trains):
    ans = []
    for i in range(N):
        t = 0
        for j in range(i, N-1):
            c, s, f = trains[j]
            if t < s:
                t = s
            else:
                t = (t + f - 1) // f * f
            t += c
        ans.append(t)
    return ans

N = int(input())
trains = []
for _ in range(N-1):
    c, s, f = map(int, input().split())
    trains.append((c, s, f))

ans = solve(N, trains)
for a in ans:
    print(a)