# program

import sys

def min_travel_distance(N, houses):
    return max(houses) - min(houses)

if __name__ == "__main__":
    N = int(input())
    houses = list(map(int, input().split()))
    print(min_travel_distance(N, houses))

