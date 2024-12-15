from heapq import heappop, heappush

def minimum_coins(T, testcases):
    for testcase in testcases:
        N, A, B, C, D = testcase
        inf = float('inf')
        dp = [inf] * (N+1)
        dp[0] = 0
        heap = [(0, 0)]
        while heap:
            coins, num = heappop(heap)
            if dp[num] < coins:
                continue
            if num == N:
                break
            if num < N:
                for d in [-1, 1]:
                    new_num = num + d
                    new_coins = coins + D
                    if dp[new_num] > new_coins:
                        dp[new_num] = new_coins
                        heappush(heap, (new_coins, new_num))
                if num * 2 <= N:
                    new_num = num * 2
                    new_coins = coins + A
                    if dp[new_num] > new_coins:
                        dp[new_num] = new_coins
                        heappush(heap, (new_coins, new_num))
                if num * 3 <= N:
                    new_num = num * 3
                    new_coins = coins + B
                    if dp[new_num] > new_coins:
                        dp[new_num] = new_coins
                        heappush(heap, (new_coins, new_num))
                if num * 5 <= N:
                    new_num = num * 5
                    new_coins = coins + C
                    if dp[new_num] > new_coins:
                        dp[new_num] = new_coins
                        heappush(heap, (new_coins, new_num))
        print(dp[N])

T = int(input())
testcases = []
for _ in range(T):
    testcase = list(map(int, input().split()))
    testcases.append(testcase)

minimum_coins(T, testcases)