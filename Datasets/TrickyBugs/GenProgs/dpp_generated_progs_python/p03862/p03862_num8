import sys

def min_operations(n, x, candies):
    operations = 0
    
    for i in range(n - 1):
        total = candies[i] + candies[i + 1]
        if total > x:
            eat = total - x
            if eat <= candies[i + 1]:
                candies[i + 1] -= eat
            else:
                candies[i] -= eat - candies[i + 1]
                candies[i + 1] = 0
            operations += eat
    
    return operations

if __name__ == "__main__":
    # Read input from standard input
    n, x = map(int, sys.stdin.readline().strip().split())
    candies = list(map(int, sys.stdin.readline().strip().split()))
    
    # Print the minimum number of operations required to achieve the objective
    print(min_operations(n, x, candies))