import math

def is_prime(x):
    if x < 2:
        return False
    for i in range(2, int(math.sqrt(x))+1):
        if x % i == 0:
            return False
    return True

def max_operation(N):
    answer = 0
    i = 2
    while i * i <= N:
        t = 0
        while N % i == 0:
            N //= i
            t += 1
        answer += int((-1 + math.sqrt(1 + 8 * t)) / 2)
        i += 1
    if N > 1:
        answer += 1
    return answer

n = int(input())
print(max_operation(n))