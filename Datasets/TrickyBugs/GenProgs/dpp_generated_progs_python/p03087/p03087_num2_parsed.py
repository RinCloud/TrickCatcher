# read input
N, Q = map(int, input().split())
S = input().strip()

# process each query
for _ in range(Q):
    # read query
    l, r = map(int, input().split())

    # count the occurrences of 'AC' in the given substring
    count = S[l-1:r].count('AC')

    # print the result
    print(count)
