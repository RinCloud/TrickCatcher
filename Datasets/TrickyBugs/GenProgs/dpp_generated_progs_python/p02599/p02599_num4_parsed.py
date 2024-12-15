'''
# to solve this problem we need to count the distinct colors within the given range [l, r]

# number of balls
N, Q = map(int, input().split())

# colors of balls in array
colors = list(map(int, input().split()))

# store the frequency of each color
freq = [0] * (N+1)

# count the frequency of the colors
for i in range(N):
    freq[colors[i]] += 1

# loop over the queries
for _ in range(Q):
    # input the range [l, r]
    l, r = map(int, input().split())
    
    # initialize the count to 0
    count = 0
    
    # loop over the colors within the range
    for i in range(l, r+1):
        # if the frequency of the color is not 0, add 1 to the count
        if freq[i] != 0:
            count += 1

    # output the count
    print(count)
'''