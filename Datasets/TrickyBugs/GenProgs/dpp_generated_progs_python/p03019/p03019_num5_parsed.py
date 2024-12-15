import sys

def main():
    N, X = map(int, sys.stdin.readline().split())
    hours_needed = []
    for _ in range(N):
        b, l, u = map(int, sys.stdin.readline().split())
        if b >= X:
            hours_needed.append(0)
        else:
            hours_needed.append((X - b + l - 1) // l)
    print(sum(hours_needed))

if __name__ == '__main__':
    main()