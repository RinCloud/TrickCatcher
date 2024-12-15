from collections import defaultdict, deque, Counter
from heapq import heappush, heappop, heapify
import math
import bisect
import random
from itertools import accumulate, combinations, product
import sys
from bisect import bisect_left, bisect_right

sys.setrecursionlimit(2147483647)

def I(): return int(sys.stdin.readline())
def LI(): return list(map(int, sys.stdin.readline().split()))

MOD = 10**9+7

N = I()
H = LI()

dp = [0] * N # dp array to store the number of ways to paint the squares
dp[0] = 1

for i in range(1, N):
    dp[i] = (dp[i-1] * min(H[i-1], H[i]) * 2) % MOD

print(dp[N-1])
