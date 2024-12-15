'''
# Plan
1. Initialize a variable `min_time` to store the minimum time required to have slimes in all colors, which is initialized as the sum of all a_i.
2. Iterate through the colors (i=1 to N) and:
    a. Check if the current color has less time than the minimum time `min_time`.
    b. If yes, update the minimum time `min_time` with the current color time.
3. Calculate the time to cast a spell by multiplying the number of available colors (N) with the time required for each spell (x).
4. Add the spell time to the minimum time `min_time`.
5. Print the minimum time required to have slimes in all colors.

# Implementation
'''
N, x = map(int, input().split())
a = list(map(int, input().split()))

min_time = sum(a)
for i in range(1, N):
    color_time = a[i - 1] + x * i
    if color_time < min_time:
        min_time = color_time

print(min_time)