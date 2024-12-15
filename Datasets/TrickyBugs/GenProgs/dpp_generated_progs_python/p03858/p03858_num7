import sys

def main():
    # Read input
    n, a, b = map(int, input().split())
    pinholes = [tuple(map(int, input().split())) for _ in range(n)]

    # Initialize count
    count = 0

    # Iterate through all pairs of pinholes
    for i in range(n):
        for j in range(i + 1, n):
            pi, pj = pinholes[i], pinholes[j]
            # Calculate Manhattan distance between a and b
            d_ab = abs(pi[0] - pj[0]) + abs(pi[1] - pj[1])
            # Calculate Manhattan distance between a and i
            d_ai = abs(pi[0] - pinholes[a - 1][0]) + abs(pi[1] - pinholes[a - 1][1])
            # Calculate Manhattan distance between a and j
            d_aj = abs(pi[0] - pinholes[b - 1][0]) + abs(pi[1] - pinholes[b - 1][1])
            # Check if the compass can point from b to i or j
            if d_ai == d_ab or d_aj == d_ab:
                count += 1

    # Output the result
    print(count)

if __name__ == "__main__":
    main()