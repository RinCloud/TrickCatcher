# Function to check if objective is achievable with given cost limit
def is_objective_achievable(N, M, X, C, A):
    cost = 0
    skills = [0] * M

    # Iterate through all books
    for i in range(N):
        cost += C[i]
        for j in range(M):
            skills[j] += A[i][j]
    
    # Check if all required skills are achieved and cost is within limit
    for i in range(M):
        if skills[i] < X or cost > X:
            return False
    
    return True

# Read input from Standard Input
N, M, X = map(int, input().split())
C = []
A = []

for _ in range(N):
    c, *a = map(int, input().split())
    C.append(c)
    A.append(a)

# Check if objective is achievable
if is_objective_achievable(N, M, X, C, A):
    print(sum(C))
else:
    print(-1)