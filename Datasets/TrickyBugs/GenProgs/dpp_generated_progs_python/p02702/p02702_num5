def count_pairs(S):
    count = 0
    n = len(S)
    
    for i in range(n):
        for j in range(i, n):
            if int(S[i:j+1]) % 2019 == 0:
                count += 1
    
    return count

S = input().strip()
print(count_pairs(S))