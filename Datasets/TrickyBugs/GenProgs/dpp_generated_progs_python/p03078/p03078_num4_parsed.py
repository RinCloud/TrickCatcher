import heapq

def solve():
    # Read input
    X, Y, Z, K = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    C = list(map(int, input().split()))

    # Sort the deliciousness of the cakes in descending order
    A.sort(reverse=True)
    B.sort(reverse=True)
    C.sort(reverse=True)

    # Generate all possible sums of deliciousness
    sums = []
    for a in A:
        for b in B:
            for c in C:
                sums.append(a + b + c)

    # Apply heap sort to the sums
    heapq.heapify(sums)
    largest_sums = heapq.nlargest(K, sums)

    # Print the largest sums
    for sum_ in largest_sums:
        print(sum_)

solve()