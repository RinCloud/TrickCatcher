import sys

def count_ways(N, M):
    # calculate the number of ways to choose two balls with even sum
    ways = (N * (N-1) + M * (M-1)) // 2
    return ways

# read input from standard input
input_line = sys.stdin.readline().strip()
N, M = map(int, input_line.split())

# calculate the answer
answer = count_ways(N, M)

# print the answer
print(answer)