# Program

def min_operations(A, B):
    n = len(A)
    ans = float('inf')

    for i in range(n):
        if B[i] == '1':
            A_temp = list(A)
            
            for j in range(i, i + n):
                if B[j % n] == '1':
                    A_temp[j % n] = str(1 - int(A_temp[j % n]))
            
            if ''.join(A_temp) == B:
                ans = min(ans, n - i)
    
    if ans == float('inf'):
        return -1
    else:
        return ans

# Driver code
A = input()
B = input()
print(min_operations(A, B))