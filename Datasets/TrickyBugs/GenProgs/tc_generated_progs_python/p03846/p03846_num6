n = int(input())
l = list(map(int, input().split()))
mod = 10**9+7

# If there is only one person, return 1
if n == 1:
    print(1)

# If there is an even number of people and all the differences are unique and equal to n//2, return 2^(n//2) modulo 10^9+7
elif n % 2 == 0 and len(set(l)) == n//2 and all(diff == n//2 for diff in l):
    print(pow(2, n//2, mod))

# If there is an odd number of people and there is only one difference which is 0, return 2^((n-1)//2) modulo 10^9+7
elif n % 2 != 0 and l.count(0) == 1 and all(diff == 1 for diff in l if diff != 0):
    print(pow(2, (n-1)//2, mod))

# Otherwise, return 0
else:
    print(0)