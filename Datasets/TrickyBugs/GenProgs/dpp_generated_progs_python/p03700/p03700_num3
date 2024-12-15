def solve():
    N, A, B = map(int, input().split())
    h = []
    
    for _ in range(N):
        h.append(int(input()))
        
    result = 0
    
    for i in range(N):
        h[i] -= A
        result += 1
        
        if h[i] > 0:
            result += h[i] // (A - B)
            if h[i] % (A - B) > 0:
                result += 1
                
    print(result)
    
solve()