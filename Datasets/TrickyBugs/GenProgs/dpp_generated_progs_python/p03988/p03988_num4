import sys

def solve(N, A):
    max_distance = [0] * N
    
    for i in range(N-1, 0, -1):
        max_distance[i] = max_distance[i+1] + A[i]
    
    if A[0] > max_distance[1]:
        return "Impossible"
    
    return "Possible"

def main():
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))
    result = solve(N, A)
    print(result)

if __name__ == "__main__":
    main()