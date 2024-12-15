# Program

def solve(N, A):
    # create a list to store the maximum values for each K
    max_values = []

    # iterate over values from 1 to 2^N-1
    for K in range(1, 2**N):
        # initialize maximum value to 0
        max_value = 0

        # iterate over all possible pairs (i,j)
        for i in range(K):
            for j in range(i + 1, K + 1):
                # calculate the value of A[i] + A[j]
                total = A[i] + A[j]

                # update the maximum value if necessary
                if total > max_value:
                    max_value = total

        # add the maximum value for current K to the list
        max_values.append(max_value)

    # print the maximum values for each K
    for value in max_values:
        print(value)


# get input values
N = int(input())
A = list(map(int, input().split()))

# solve the problem
solve(N, A)