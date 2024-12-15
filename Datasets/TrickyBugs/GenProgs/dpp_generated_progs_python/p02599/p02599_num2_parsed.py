# Given constraints
N, Q = map(int, input().split())
c = list(map(int, input().split()))

# Creating a dictionary to keep track of the occurrence of each color
color_count = {}

# Counting the occurrence of each color using a sliding window
for i in range(Q):
    l, r = map(int, input().split())
    colors_in_range = set(c[l-1:r])
    print(len(colors_in_range))