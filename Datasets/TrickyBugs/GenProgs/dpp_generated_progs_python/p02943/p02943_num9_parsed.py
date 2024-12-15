N, K = map(int, input().split())
S = input()

T = S[::-1]
U = S + T

min_str = U
for i in range(K):
    for j in range(N):
        new_str = U[j:j+N]
        if new_str < min_str:
            min_str = new_str
    
    U = U + U
    
print(min_str)