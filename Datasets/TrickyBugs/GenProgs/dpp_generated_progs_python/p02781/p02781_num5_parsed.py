def count_integers(N, K):
    count = 0
    for i in range(1, N+1):
        if str(i).count('0') == len(str(i)) - K:
            count += 1
    return count

N = int(input())
K = int(input())
print(count_integers(N, K))