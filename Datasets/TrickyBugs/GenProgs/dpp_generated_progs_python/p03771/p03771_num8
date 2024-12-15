import sys

def is_possible(n, v, x):
    possible = [False] * n

    min_x = min(x)
    max_x = max(x)

    # Check if camel is able to reach every oasis starting from leftmost oasis
    for i in range(n - 1):
        if x[i] + v < x[i + 1]:
            possible[i] = True

    # Check if camel is able to reach every oasis starting from rightmost oasis
    for i in range(n - 1, 0, -1):
        if x[i] - v > x[i - 1]:
            possible[i] = True

    # Check specific cases where camel can reach the oasis by jumping
    if x[0] - v > min_x:
        possible[0] = True
    if x[n - 1] + v < max_x:
        possible[n - 1] = True

    return possible

def main():
    n, v = map(int, input().split())
    x = list(map(int, input().split()))

    possible = is_possible(n, v, x)

    for p in possible:
        if p:
            print("Possible")
        else:
            print("Impossible")

if __name__ == "__main__":
    main()