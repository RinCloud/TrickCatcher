N = int(input())
A = list(map(int, input().split()))
student_order = [0] * N
for i, a in enumerate(A):
    student_order[a-1] = i+1

print(*student_order)
