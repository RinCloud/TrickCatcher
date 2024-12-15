import sys

def trailing_zeros(n):
    count = 0
    while n % 10 == 0:
        count += 1
        n = n // 10
    return count

def f(N):
    if N < 2:
        return 1
    else:
        return N * f(N-2)

N = int(sys.stdin.readline().strip())
result = trailing_zeros(f(N))
sys.stdout.write(str(result))