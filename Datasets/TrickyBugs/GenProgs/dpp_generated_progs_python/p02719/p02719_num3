import sys

def min_possible_value(N, K):
    while N >= K:
        N = abs(N - K)
    return N

if __name__ == "__main__":
    N, K = map(int, sys.stdin.readline().split())
    print(min_possible_value(N, K))