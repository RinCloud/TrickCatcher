# Program

def check_image_contains_template(N, M, A, B):
    for i in range(N-M+1):
        for j in range(N-M+1):
            contains_template = True
            for k in range(M):
                for l in range(M):
                    if A[i+k][j+l] != B[k][l]:
                        contains_template = False
                        break
                if not contains_template:
                    break
            if contains_template:
                return "Yes"
    return "No"

N, M = map(int, input().split())
A = [input() for _ in range(N)]
B = [input() for _ in range(M)]

result = check_image_contains_template(N, M, A, B)
print(result)