def max_total_score(N, K, R, S, P, T):
    score = 0
    last_K_rounds = [''] * K
    
    for i in range(N):
        if i >= K and T[i] == last_K_rounds[i % K]:
            last_K_rounds[i % K] = ''
            continue
        
        if T[i] == 'r':
            score += R
        elif T[i] == 'p':
            score += P
        elif T[i] == 's':
            score += S
        
        last_K_rounds[i % K] = T[i]
    
    return score


# Read input
N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input().strip()

# Calculate and print the maximum total score
print(max_total_score(N, K, R, S, P, T))