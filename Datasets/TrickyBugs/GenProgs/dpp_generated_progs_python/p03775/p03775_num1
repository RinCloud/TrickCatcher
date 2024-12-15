import math

def find_min_f(n):
    min_f = math.inf
    for i in range(1, int(math.sqrt(n))+1):
        if n % i == 0:
            f = max(len(str(i)), len(str(n // i)))
            min_f = min(min_f, f)
    return min_f

n = int(input())
min_f = find_min_f(n)
print(min_f)