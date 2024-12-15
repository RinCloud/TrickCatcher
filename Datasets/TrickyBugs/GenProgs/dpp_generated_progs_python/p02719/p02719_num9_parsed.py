# program to find the minimum possible value of N after applying the operation

N, K = map(int, input().split())

# if K is equal to 1, minimum possible value of N will be 0
if K == 1:
    print(0)
    exit()

# apply the operation until N becomes less than K
while N >= K:
    N = N % K # replace N with the absolute difference of N and K

print(N)