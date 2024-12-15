import sys

# Read the input
N = int(input())
L = list(map(int, input().split()))

# Sort the lengths in descending order
L.sort(reverse=True)

# Check if the longest side is shorter than the sum of the other sides
if L[0] < sum(L[1:]):
    print("Yes")
else:
    print("No")