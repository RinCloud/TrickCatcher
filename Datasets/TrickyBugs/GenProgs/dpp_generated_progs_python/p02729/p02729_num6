# Program to count the number of ways to choose two balls such that the sum of their numbers is even

# Read the values of N and M from input
N, M = map(int, input().split())

# If N is 0 or M is 0, there are no balls to choose from, so the answer is 0
if N == 0 or M == 0:
    print(0)
else:
    # If N is odd and M is even, the answer is N * M
    if N % 2 == 1 and M % 2 == 0:
        print(N * M)
    # If N is even and M is odd, the answer is N * M
    elif N % 2 == 0 and M % 2 == 1:
        print(N * M)
    # If both N and M are odd, the answer is (N-1) * (M-1)
    elif N % 2 == 1 and M % 2 == 1:
        print((N-1) * (M-1))
    # If both N and M are even, the answer is N * M - 1
    else:
        print(N * M - 1)