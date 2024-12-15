# Program

def count_min_new_stones(S):
    n = len(S)
    count = 0
    
    if S[0] == "B" and S[-1] == "W":
        count += 1
    
    for i in range(n-1):
        if S[i] != S[i+1]:
            count += 1
            
    return count

S = input()
result = count_min_new_stones(S)
print(result)