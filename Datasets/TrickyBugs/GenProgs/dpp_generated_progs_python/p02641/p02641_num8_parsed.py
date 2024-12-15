import sys

def find_nearest_integer(X, seq):
    min_diff = sys.maxsize
    nearest_int = None

    for i in range(1, 101):
        if i not in seq:
            diff = abs(X - i)
            if diff < min_diff:
                min_diff = diff
                nearest_int = i

    return nearest_int

def main():
    X, N = map(int, input().split())
    seq = list(map(int, input().split()))

    answer = find_nearest_integer(X, seq)

    print(answer)

if __name__ == "__main__":
    main()