import sys

def maximize_happy_children(N, x, a):
    a.sort()
    ans = 0
    for i in range(N):
        if x >= a[i]:
            x -= a[i]
            ans += 1
        else:
            break
    if x > 0 and ans == N:
        ans -= 1
    return ans

def main():
    # Read input
    N, x = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    
    # Calculate and print the maximum possible number of happy children
    ans = maximize_happy_children(N, x, a)
    print(ans)

if __name__ == "__main__":
    main()