n = int(input())
A = list(map(int,input().split()))

A.sort(reverse=True)
E = [0,0]

j = 0
for i in range(n):
    if E[j] == A[i]:
        j += 1
        if j == 1:
            continue
        else:
            break
    E[j] = A[i]
    
print(E[0]*E[1])

# There is a bug in the code when the input sticks are sorted in decreasing order. In that case, the code should return the square of the largest side length.
# Let's add an additional condition in the code to handle this case.