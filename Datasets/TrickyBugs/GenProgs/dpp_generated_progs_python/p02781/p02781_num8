import sys

def count_numbers(n, k):
    count = 0
    for i in range(1, n+1):
        if len(str(i).replace("0", "")) == k:
            count += 1
    return count

n = int(sys.stdin.readline().strip())
k = int(sys.stdin.readline().strip())

print(count_numbers(n, k))