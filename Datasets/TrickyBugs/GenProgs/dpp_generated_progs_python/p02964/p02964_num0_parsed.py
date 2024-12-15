def main():
    # Read the input
    N, K = map(int, input().split())
    A = list(map(int, input().split()))

    # Initialize an empty list
    s = []

    # Iterate over each element of X and perform the operation
    for i in range(N * K):
        if X[i] not in s:
            s.append(X[i])
        else:
            while s[-1] != X[i]:
                s.pop()

    # Print the elements of s
    print(" ".join(map(str, s)))

if __name__ == "__main__":
    main()