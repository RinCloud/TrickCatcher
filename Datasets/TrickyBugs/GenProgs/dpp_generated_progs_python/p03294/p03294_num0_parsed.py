import sys

def max_f(N, a):
    max_val = 0
    for m in range(max(a), max(a)*2):
        f = sum(m % ai for ai in a)
        max_val = max(max_val, f)
    return max_val

if __name__ == "__main__":
    N = int(input())
    a = list(map(int, input().split()))

    print(max_f(N, a))
    sys.stdout.flush()