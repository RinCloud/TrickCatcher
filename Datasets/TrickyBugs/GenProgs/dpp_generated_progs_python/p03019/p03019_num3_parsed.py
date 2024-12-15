import sys

def main():
    # Read input from stdin
    n, x = map(int, sys.stdin.readline().split())
    b = []
    l = []
    u = []
    for _ in range(n):
        bi, li, ui = map(int, sys.stdin.readline().split())
        b.append(bi)
        l.append(li)
        u.append(ui)
    
    # Calculate the minimum number of study hours required for Takahashi to win
    left = 1
    right = 10**9
    while left < right:
        mid = (left + right) // 2
        score = 0
        for i in range(n):
            diff = max(0, l[i] * mid - b[i])
            score += u[i] * diff

        if score >= x * mid:
            right = mid
        else:
            left = mid + 1
    
    # Print the minimum number of study hours required
    print(left)

if __name__ == "__main__":
    main()