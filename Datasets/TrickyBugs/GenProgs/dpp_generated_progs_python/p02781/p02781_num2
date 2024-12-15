# Program to find the number of integers between 1 and N (inclusive) that contains exactly K non-zero digits when written in base ten

def count_integers(N, K):
    count = 0
    
    for num in range(1, N+1):
        if len(str(num).replace("0","")) == K:
            count += 1
    
    return count

N = int(input())
K = int(input())

print(count_integers(N, K))