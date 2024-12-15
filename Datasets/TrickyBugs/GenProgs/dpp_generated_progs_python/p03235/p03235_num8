from collections import deque

def find_good_string(N, P):
    P = [p-1 for p in P]  # 0-indexing permutation
    S = [0] * N         # initialize the string with all zeros

    for p in P:
        S[p] = 1       # set corresponding position to 1 in the string
    
    X = []            # Initialize sequence X
    Y = deque()       # Initialize sequence Y

    for i in range(N):
        if S[i] == 0:
            X.append(P[i] + 1)
        else:
            Y.appendleft(P[i] + 1)
    
    if len(X) != len(Y):     # Check if X and Y have the same number of high elements
        return -1           # If not, good string does not exist
    
    good_string = ['0'] * N    # Initialize the good string as all zeros

    for i in range(N):
        if not X or not Y:    # If either X or Y is empty, we cannot form a sequence and break
            break
        
        if X[0] < Y[0]:       # Compare the first elements of X and Y
            good_string[P[i]] = '0'      # Set corresponding position in the good string as 0
            X.pop(0)        # Remove the element from X
        else:
            good_string[P[i]] = '1'      # Set corresponding position in the good string as 1
            Y.popleft()     # Remove the element from Y

    return ''.join(good_string)

N = int(input())
P = list(map(int, input().split()))

result = find_good_string(N, P)
print(result)