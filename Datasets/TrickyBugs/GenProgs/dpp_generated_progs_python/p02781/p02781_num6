import sys

def count_integers(N, K):
    count = 0
    for i in range(1, N+1):
        if str(i).count('0') + str(i).count('0') <= K:
            count += 1
    return count

N = int(sys.stdin.readline().strip())
K = int(sys.stdin.readline().strip())

result = count_integers(N, K)
print(result)