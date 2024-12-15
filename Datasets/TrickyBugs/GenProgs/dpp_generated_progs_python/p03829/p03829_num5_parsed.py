def calculate_fatigue(N, A, B, X):
    total_fatigue = 0
    
    for i in range(N-1):
        distance = X[i+1] - X[i]
        
        if distance * A <= B:
            total_fatigue += distance * A
        else:
            total_fatigue += B
    
    return total_fatigue

N, A, B = map(int, input().split())
X = list(map(int, input().split()))

print(calculate_fatigue(N, A, B, X))