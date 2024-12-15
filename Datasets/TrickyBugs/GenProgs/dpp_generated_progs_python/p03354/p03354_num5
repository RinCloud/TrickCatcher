from collections import defaultdict

def find_max_fixed_points(N, M, p, pairs):
    # creating a dictionary to store the current index of each number in p
    index_dict = {p[i]: i+1 for i in range(N)}

    # creating a list to check if a number is a fixed point or not
    fixed_point = [False] * (N+1)
    fixed_count = 0

    # iterating over each pair of numbers
    for x, y in pairs:
        # swapping the values in p
        p[x-1], p[y-1] = p[y-1], p[x-1]

        # updating the indices in index_dict
        index_dict[p[x-1]] = x
        index_dict[p[y-1]] = y

    # iterating over each number in p
    for i in range(1, N+1):
        # if the current number is in its correct position, increment fixed_count
        if i == index_dict[i]:
            fixed_count += 1

    return fixed_count

# taking inputs
N, M = map(int, input().split())
p = list(map(int, input().split()))
pairs = [tuple(map(int, input().split())) for _ in range(M)]

# finding the maximum possible number of fixed points
result = find_max_fixed_points(N, M, p, pairs)

# printing the result
print(result)