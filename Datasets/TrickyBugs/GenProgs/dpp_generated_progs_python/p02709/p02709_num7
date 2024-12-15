from itertools import permutations
import sys

def main():
    # Read input
    n = int(input())
    a = list(map(int, input().split()))

    # Calculate total happiness points for each permutation
    max_happiness = -sys.maxsize
    for p in permutations(a):
        happiness = 0
        for i in range(n):
            happiness += p[i] * abs(i - (n // 2))
        max_happiness = max(max_happiness, happiness)

    # Print the maximum total happiness points
    print(max_happiness)


if __name__ == "__main__":
    main()