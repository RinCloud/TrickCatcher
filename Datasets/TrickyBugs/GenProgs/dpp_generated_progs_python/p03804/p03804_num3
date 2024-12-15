def is_template_contained(A, B):
    N = len(A)
    M = len(B)
    
    # iterate over rows of A
    for i in range(N - M + 1):
        # iterate over columns of A
        for j in range(N - M + 1):
            # check if B is contained in A starting from (i, j)
            is_contained = True
            
            # iterate over rows of B
            for r in range(M):
                # iterate over columns of B
                for c in range(M):
                    # check if corresponding pixel in A and B are different
                    if A[i + r][j + c] != B[r][c]:
                        is_contained = False
                        break
                if not is_contained:
                    break
            
            # return True if B is contained in A
            if is_contained:
                return True
    
    # return False if B is not contained in any position of A
    return False

# get input values
N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]

# check if B is contained in A
if is_template_contained(A, B):
    print('Yes')
else:
    print('No')