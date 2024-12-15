# Python program to solve the problem

# Function to check if objective is achievable
def check_objective(N, M, X, C, A):
    
    min_cost = float('inf')
    
    # Loop through all possible combinations of books
    for i in range(1, 2**N):
        cost = 0
        skills = [0] * M
        
        # Calculate the cost and skills for current combination
        for j in range(N):
            if i & (1 << j):
                cost += C[j]
                for k in range(M):
                    skills[k] += A[j][k]
        
        # Check if current combination satisfies the objective
        if all(skill >= X for skill in skills):
            min_cost = min(min_cost, cost)
    
    # Return the minimum cost if objective is achievable, else -1
    return min_cost if min_cost != float('inf') else -1

# Read the input values
N, M, X = map(int, input().split())
C = []
A = []
for _ in range(N):
    c, *a = map(int, input().split())
    C.append(c)
    A.append(a)

# Check if objective is achievable and print the result
result = check_objective(N, M, X, C, A)
print(result)