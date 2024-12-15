def count_numbers(N, K):
    count = 0
    for i in range(1, N+1):
        if sum(int(digit) != 0 for digit in str(i)) == K:
            count += 1
    return count

N = int(input())
K = int(input())

result = count_numbers(N, K)
print(result)