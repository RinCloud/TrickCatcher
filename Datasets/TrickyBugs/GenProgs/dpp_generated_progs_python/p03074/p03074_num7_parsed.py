def max_consecutive_hands(N, K, S):
    max_hands = 0
    consecutive_hands = 0
    
    for i in range(N):
        if S[i] == '1':
            consecutive_hands += 1
        else:
            max_hands = max(max_hands, consecutive_hands)
            consecutive_hands = 0
    
    max_hands = max(max_hands, consecutive_hands)
    
    flip_count = min(K, max_hands)
    
    for i in range(N):
        if S[i] == '1':
            consecutive_hands -= 1
        else:
            max_hands = max(max_hands, consecutive_hands + flip_count)
            flip_count = min(K, consecutive_hands + flip_count + 1)
            consecutive_hands = 0
    
    max_hands = max(max_hands, consecutive_hands + flip_count)
    
    return max_hands

N, K = map(int, input().split())
S = input().strip()
print(max_consecutive_hands(N, K, S))
