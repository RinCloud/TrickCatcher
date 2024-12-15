# Program:

N = int(input())
heights = list(map(int, input().split()))

stools = [0] * N

# Loop through each person from the back
for i in range(N-1, -1, -1):
    # Set the height of the stool for the current person
    stools[i] = max(0, heights[i] - max(0, stools[i+1]-1))

print(sum(stools))