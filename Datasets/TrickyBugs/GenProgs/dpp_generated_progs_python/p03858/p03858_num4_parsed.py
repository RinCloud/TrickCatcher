# Implementation of the program to solve the given problem

import sys

def main():
    # Read the input from standard input
    n, a, b = map(int, input().split())
    pinholes = []
    for _ in range(n):
        x, y = map(int, input().split())
        pinholes.append((x, y))
    
    # Find the number of pairs of pinholes that can be pointed by the compass
    count = 0
    for i in range(n):
        for j in range(i + 1, n):
            px, py = pinholes[i]
            qx, qy = pinholes[j]
            # Calculate the Manhattan distance between the current pair
            d_pq = abs(px - qx) + abs(py - qy)
            # Check if the compass can point at this pair
            if (d_pq == abs(px - pinholes[a-1][0]) + abs(py - pinholes[b-1][1])) or \
                    (d_pq == abs(px - pinholes[b-1][0]) + abs(py - pinholes[a-1][1])):
                count += 1
    
    # Print the output
    print(count)

if __name__ == "__main__":
    main()