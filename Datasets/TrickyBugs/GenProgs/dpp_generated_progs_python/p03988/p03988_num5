from collections import Counter

def construct_tree(N, a):
    freq = Counter(a)

    # Check if the frequencies of all distances are valid
    for i in range(1, N+1):
        if freq[i] > i:
            return "Impossible"

    # Check if the sum of distances is equal to N-1
    if sum(a) != 2 * (N - 1):
        return "Impossible"

    return "Possible"


# Read input
N = int(input())
a = list(map(int, input().split()))

# Call the function and print the result
print(construct_tree(N, a))