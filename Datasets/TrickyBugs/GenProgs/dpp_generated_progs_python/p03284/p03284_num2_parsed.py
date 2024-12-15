# Program:

N, K = map(int, input().split())
remainder = N % K
print(min(remainder, K-remainder))