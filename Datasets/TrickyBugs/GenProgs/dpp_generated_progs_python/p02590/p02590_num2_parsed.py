# Program:

def sum_of_modulo(N, A):
    P = 200003
    result = 0
    for i in range(N):
        for j in range(i + 1, N):
            result += (A[i] * A[j]) % P
    return result

N = int(input())
A = list(map(int, input().split()))

output = sum_of_modulo(N, A)
print(output)