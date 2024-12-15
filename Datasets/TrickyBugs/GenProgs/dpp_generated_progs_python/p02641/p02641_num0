import sys

def find_nearest_integer(X, arr):
    min_diff = float('inf')
    nearest = -1
    for i in range(1, 101):
        if i not in arr:
            diff = abs(X - i)
            if diff < min_diff or (diff == min_diff and i < nearest):
                min_diff = diff
                nearest = i
    return nearest

if __name__ == '__main__':
    X, N = map(int, input().split())
    arr = list(map(int, input().split()))
    result = find_nearest_integer(X, arr)
    print(result)
    sys.stdout.flush()