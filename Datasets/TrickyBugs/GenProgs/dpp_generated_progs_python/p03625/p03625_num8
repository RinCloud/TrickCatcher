def max_rectangle_area(N, A):
    A.sort(reverse=True)
    areas = []
    
    for i in range(N-3):
        for j in range(i+1, N-2):
            for k in range(j+1, N-1):
                for l in range(k+1, N):
                    if A[i] == A[j] == A[k] == A[l]:
                        areas.append(A[i] * A[j])
                    elif A[i] == A[j] and A[k] == A[l]:
                        areas.append(A[i] * A[k])
                    elif A[i] == A[k] and A[j] == A[l]:
                        areas.append(A[i] * A[j])
                    elif A[i] == A[l] and A[j] == A[k]:
                        areas.append(A[i] * A[j])
                        
    if len(areas) > 0:
        return max(areas)
    else:
        return 0

# Read the input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the maximum possible area of the rectangle
print(max_rectangle_area(N, A))