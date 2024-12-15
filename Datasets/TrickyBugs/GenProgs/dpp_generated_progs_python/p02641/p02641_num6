import sys

def find_nearest_integer(X, N, p):
    min_diff = sys.maxsize
    nearest_integer = None
    for i in range(1, X+1):
        if i not in p:
            diff = abs(X - i)
            if diff < min_diff or (diff == min_diff and i < nearest_integer):
                min_diff = diff
                nearest_integer = i
    return nearest_integer

X, N = map(int, input().split())
p = list(map(int, input().split()))

result = find_nearest_integer(X, N, p)
print(result)