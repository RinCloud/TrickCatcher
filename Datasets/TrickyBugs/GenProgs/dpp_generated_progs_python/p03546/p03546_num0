import sys

def main():
    # Read input
    H, W = map(int, sys.stdin.readline().split())

    c = [list(map(int, sys.stdin.readline().split())) for _ in range(10)]
    A = [list(map(int, sys.stdin.readline().split())) for _ in range(H)]

    # Use Floyd-Warshall algorithm to find minimum cost to change each digit
    for k in range(10):
        for i in range(10):
            for j in range(10):
                c[i][j] = min(c[i][j], c[i][k] + c[k][j])

    # Find the minimum total amount of MP required
    total_mp = 0
    for i in range(H):
        for j in range(W):
            if A[i][j] != -1:
                total_mp += c[A[i][j]][1]

    # Print the minimum total amount of MP required
    print(total_mp)

if __name__ == "__main__":
    main()