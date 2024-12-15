import sys

def main():
    # Reading the input
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))

    # Calculating the total number of stones
    total_stones = sum(a)

    # Checking if there is only one pile
    if n == 1:
        print(-1)
        return

    # Checking if the sum of all piles is odd
    if total_stones % 2 != 0:
        print(-1)
        return

    # Checking if there is a pile with more stones than the sum of all other piles
    max_stones = max(a)
    if max_stones > total_stones - max_stones:
        print(-1)
        return

    # Calculating the minimum number of stones to move to guarantee Takahashi's win
    diff = (total_stones - max_stones) // 2
    if a[0] >= diff:
        print(1)
    else:
        print(-1)


if __name__ == '__main__':
    main()