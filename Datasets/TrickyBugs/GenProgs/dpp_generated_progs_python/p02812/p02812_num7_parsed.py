def count_contiguous_abc(N, S):
    count = 0
    for i in range(N-2):
        if S[i:i+3] == 'ABC':
            count += 1
    return count

N = int(input())
S = input()

result = count_contiguous_abc(N, S)
print(result)