import string

def shortest_string_not_subsequence_of_A(A):
    n = len(A)
    ans = ""
    
    for i in range(26):
        c = chr(ord('a') + i)
        if c not in A:
            return c
    
    for i in range(26):
        for j in range(26):
            c1 = chr(ord('a') + i)
            c2 = chr(ord('a') + j)
            candidate = ans + c2
            
            if candidate not in A:
                return candidate
            
            candidate = ans + c1 + c2
            
            if candidate not in A:
                return candidate
            
    return ans

A = input()
print(shortest_string_not_subsequence_of_A(A))
