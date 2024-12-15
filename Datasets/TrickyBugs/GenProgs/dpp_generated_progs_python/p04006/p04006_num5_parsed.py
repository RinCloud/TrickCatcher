import sys

def min_time_for_slimes(N, x, a):
    total_time = sum(a)
    min_time = total_time
    for i in range(N):
        current_time = i * x + total_time
        min_time = min(min_time, current_time)
    return min_time

if __name__ == "__main__":
    input_data = sys.stdin.readline().strip().split()
    N = int(input_data[0])
    x = int(input_data[1])
    a = list(map(int, sys.stdin.readline().strip().split()))
    result = min_time_for_slimes(N, x, a)
    print(result)