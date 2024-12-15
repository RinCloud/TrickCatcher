import sys


def solve(n, stones):
    total_stones = sum(stones)
    
    if total_stones % 2 == 1:
        return -1
    
    max_stones = max(stones)
    
    if max_stones > total_stones - max_stones:
        return -1
    
    return (total_stones - max_stones) // 2


def main():
    n = int(sys.stdin.readline().strip())
    stones = list(map(int, sys.stdin.readline().strip().split()))
    
    result = solve(n, stones)
    print(result)


if __name__ == "__main__":
    main()