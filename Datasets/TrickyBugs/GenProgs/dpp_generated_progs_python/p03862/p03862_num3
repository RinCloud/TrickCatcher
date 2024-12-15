import sys
import math

def min_operations(N, x, a):
    operations = 0
    
    for i in range(1, N):
        if a[i-1] + a[i] > x:
            diff = a[i-1] + a[i] - x
            operations += diff
            if a[i] >= diff:
                a[i] -= diff
            else:
                a[i-1] -= (diff - a[i])
                a[i] = 0
    
    return operations

if __name__ == "__main__":
    input_data = sys.stdin.read().splitlines()
    N, x = map(int, input_data[0].split())
    a = list(map(int, input_data[1].split()))

    print(min_operations(N, x, a))