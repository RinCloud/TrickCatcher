'''
The total distance traveled by Takahashi will be the difference between the maximum coordinate on the right and the minimum coordinate on the left. 

1. Read the integer N from input, representing the number of segments.
2. Initialize two variables, min_left and max_right, with positive and negative infinity respectively.
3. Iterate N times with a loop:
	3.1 Read the integers L and R from input, representing the left and right coordinates of the segment respectively.
	3.2 Update min_left and max_right with the minimum and maximum of their current values and L and R respectively.
4. Print the difference between max_right and min_left.

'''


N = int(input())

min_left = float('inf')
max_right = float('-inf')

for _ in range(N):
    L, R = map(int, input().split())
    min_left = min(min_left, L)
    max_right = max(max_right, R)

print(max_right - min_left)