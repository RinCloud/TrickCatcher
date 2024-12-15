import sys

def min_flight_time(P, Q, R):
    return min(P + Q, Q + R, R + P)

if __name__ == "__main__":
    P, Q, R = map(int, sys.stdin.readline().strip().split())
    print(min_flight_time(P, Q, R))