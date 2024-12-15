import sys

def max_rectangle_area(N, sticks):
    sticks.sort()
    max_area = 0
    for i in range(N - 3):
        if sticks[i] == sticks[i + 1] == sticks[i + 2] == sticks[i + 3]:
            area = sticks[i] * sticks[i + 2]
            max_area = max(max_area, area)
    return max_area

if __name__ == "__main__":
    N = int(sys.stdin.readline().strip())
    sticks = list(map(int, sys.stdin.readline().strip().split()))
    print(max_rectangle_area(N, sticks))