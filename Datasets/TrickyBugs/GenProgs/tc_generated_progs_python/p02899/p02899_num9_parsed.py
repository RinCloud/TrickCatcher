**Repaired code**:

n = int(input())
a = list(map(int, input().split()))

student_order = {}

for i, m in enumerate(a):
    student_order[m] = i + 1

output = []
for i in student_order.values():
    output.append(str(i))

print(' '.join(output))