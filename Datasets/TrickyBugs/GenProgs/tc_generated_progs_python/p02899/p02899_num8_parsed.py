n = int(input())
a = list(map(int, input().split()))

student_order = [0] * n
for i in range(n):
    student_order[a[i] - 1] = i + 1

print(*student_order)
