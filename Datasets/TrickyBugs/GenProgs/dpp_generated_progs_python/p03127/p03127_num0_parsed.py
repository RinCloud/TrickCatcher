# Plan:
# 1. Find the minimum element in the list of healths.
# 2. Subtract the minimum element from all the healths.
# 3. Repeat steps 1 and 2 until only one element is left.
# 4. Return the final remaining element as the minimum possible final health.

import sys

def main():
    n = int(sys.stdin.readline())
    healths = list(map(int, sys.stdin.readline().split()))

    while len(healths) > 1:
        min_health = min(healths)
        healths = [h - min_health for h in healths if h - min_health > 0]

    print(healths[0])

if __name__ == '__main__':
    main()