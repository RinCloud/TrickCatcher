N = int(input())
a = list(map(int, input().split()))

max_earnings = 0

def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    i = 3
    while i * i <= n:
        if n % i == 0:
            return False
        i += 2
    return True

for i in range(2, N+1):
    if is_prime(i):
        for j in range(i, N+1, i):
            a[j-1] = 0

for earnings in a:
    max_earnings += max(0, earnings)

print(max_earnings)