import sys

def count_integers(N, K):
    count = 0
    for num in range(1, N+1):
        if len(str(num).replace("0", "")) == K:
            count += 1
    return count

N = int(sys.stdin.readline().strip())
K = int(sys.stdin.readline().strip())

print(count_integers(N, K))