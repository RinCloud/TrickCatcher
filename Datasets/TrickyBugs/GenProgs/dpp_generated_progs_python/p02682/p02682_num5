import sys

A, B, C, K = map(int, sys.stdin.readline().split())

# Choose all cards with -1
sum = C * -1

# Choose cards with 0 until B runs out or the sum is greater than or equal to K
if sum >= K:
    print(sum)
    sys.exit()
else:
    K -= sum
    sum = 0

# Choose cards with 1 until A runs out or the sum is greater than or equal to K
if K <= A:
    sum += K
    print(sum)
    sys.exit()
else:
    sum += A
    K -= A

# Choose remaining cards with 0 until B runs out or the sum is greater than or equal to K
if K <= B:
    print(sum)
    sys.exit()
else:
    sum -= K - B
    print(sum)