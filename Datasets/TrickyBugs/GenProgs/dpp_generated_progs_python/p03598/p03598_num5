# Given N balls on the xy-plane with coordinates (x_i, i)
# Type A robot is placed at coordinates (0, i)
# Type B robot is placed at coordinates (K, i)
# Type A robot moves to the position of the ball on line y = a, collects the ball and returns to its original position
# Type B robot moves to the position of the ball on line y = b, collects the ball and returns to its original position
# Find the minimum possible total distance covered by all the robots

import sys

N = int(input())
K = int(input())
balls = list(map(int, input().split()))

total_distance = 0

for i in range(N):
    distance_a = abs(balls[i] - 0)  # Distance between type A robot and ball on line y = i
    distance_b = abs(balls[i] - K)  # Distance between type B robot and ball on line y = i
    total_distance += min(distance_a, distance_b) * 2  # Robot goes from its original position to the ball and returns

print(total_distance)