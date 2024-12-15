import sys

def main():
    # Read the input
    N = int(input())
    A = list(map(int, input().split()))

    # Calculate the total cost of travel for all spots
    total_cost = sum(abs(A[i] - A[i-1]) for i in range(1, N))

    # Calculate the cost of travel when each spot is cancelled
    for i in range(N):
        if i == 0:
            # If the first spot is cancelled, the cost is the total cost minus the absolute difference between the first and last spot
            cost = total_cost - abs(A[0] - A[N-1])
        else:
            # If any other spot is cancelled, the cost is the total cost minus the absolute difference between the current spot and the previous spot
            cost = total_cost - abs(A[i] - A[i-1])

        print(cost)

if __name__ == '__main__':
    main()