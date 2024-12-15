n = int(input())
A = list(map(int,input().split()))

A.sort(reverse=True)
E = [0,0]

j = 0
for i in range(n):
    if E[j] != A[i]: #FIX: if the elements are different
        E[j] = A[i] 
        j += 1
        if j == 2: #FIX: break the loop once the second element is found
            break
    
print(E[0]*E[1])