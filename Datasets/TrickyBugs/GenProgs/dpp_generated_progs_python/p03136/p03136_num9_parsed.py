# take input
N = int(input())
L = list(map(int, input().split()))

# sort the lengths in descending order
L.sort(reverse=True)

# check if the longest side is shorter than the sum of the other sides
if L[0] < sum(L[1:]):
    print("Yes")
else:
    print("No")
