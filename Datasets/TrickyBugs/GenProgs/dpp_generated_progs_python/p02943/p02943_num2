# Program:

N, K = map(int, input().split())
S = input()

T = S[::-1]
U = S + T

min_string = U

for i in range(K):
    for j in range(N):
        new_string = U[j:j+N]
        if new_string < min_string:
            min_string = new_string

print(min_string)