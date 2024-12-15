import sys

def is_possible(n, k, a):
    max_value = max(a)
    if max_value >= k and (max_value - k) % 2 == 0:
        return "POSSIBLE"
    else:
        return "IMPOSSIBLE"

def main():
    n, k = map(int, sys.stdin.readline().strip().split())
    a = list(map(int, sys.stdin.readline().strip().split()))
    result = is_possible(n, k, a)
    print(result)

if __name__ == "__main__":
    main()