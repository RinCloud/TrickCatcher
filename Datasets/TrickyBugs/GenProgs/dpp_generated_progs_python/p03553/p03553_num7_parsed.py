def main():
    # Read the input
    N = int(input())
    a = list(map(int, input().split()))

    # Initialize the maximum amount of money that can be earned
    max_earnings = 0

    # Iterate over all possible values of x
    for x in range(1, N+1):
        earnings = 0
        # Iterate over all gems and smash the ones labeled with multiples of x
        for i in range(N):
            if (i+1) % x == 0:
                earnings += a[i]
        # Update the maximum earnings if current earnings is greater
        max_earnings = max(max_earnings, earnings)

    # Print the maximum amount of money that can be earned
    print(max_earnings)


if __name__ == "__main__":
    main()