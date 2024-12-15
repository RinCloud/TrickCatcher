# Akaki will make as many doughnuts as possible while still satisfying the condition of taste difference among guests.
# To do this, she will start by making the maximum possible number of Doughnut 1 (assuming D = 0).
# Then, she will iterate from Doughnut 2 to Doughnut N, adjusting the number of doughnuts made for each type based on the condition.
# She will make a binary search to find the maximum number of doughnuts she can make for each type while still satisfying the condition.
# Finally, she will return the total number of doughnuts made.

import sys

def main():
    # Read the input values
    N, X, D = map(int, sys.stdin.readline().split())
    m = [0] * (N + 1)
    p = [0] * (N + 1)
    for i in range(1, N + 1):
        m[i] = int(sys.stdin.readline())
        p[i], = map(int, sys.stdin.readline().split())

    # Initialize variables
    ans = 0
    C = [0] * (N + 1)

    # Make the maximum possible number of Doughnut 1
    C[1] = X // m[1]
    ans += C[1]

    # Iterate from Doughnut 2 to Doughnut N
    for i in range(2, N + 1):
        # Binary search to find the maximum number of doughnuts for each type
        left, right = C[p[i]], C[p[i]] + D
        while left < right:
            mid = (left + right + 1) // 2
            if mid * m[i] <= X:
                left = mid
            else:
                right = mid - 1
        # Update the number of doughnuts made for this type
        C[i] = left
        ans += C[i]

    # Print the maximum number of doughnuts made
    print(ans)

if __name__ == "__main__":
    main()