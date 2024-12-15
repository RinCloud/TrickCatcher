import sys

def min_distance(N, houses):
    houses.sort()
    start = houses[0]
    end = houses[-1]
    distance = end - start
    return distance

if __name__ == "__main__":
    N = int(input().strip())
    houses = list(map(int, input().strip().split()))
    print(min_distance(N, houses))