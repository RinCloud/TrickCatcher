def main():
    # Read the input values
    N = int(input())
    B = list(map(int, input().split()))

    # Calculate the maximum possible sum of the elements of A
    A = [0] * (N + 1)
    A[0] = B[0]
    for i in range(1, N):
        A[i] = min(B[i-1], B[i])
    A[N] = B[N-1]

    max_sum = sum(A)

    # Print the maximum possible sum of the elements of A
    print(max_sum)

if __name__ == '__main__':
    main()