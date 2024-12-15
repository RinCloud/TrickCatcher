def min_study_hours(N, X, exams):
    min_hours = 0
    for exam in exams:
        b, l, u = exam
        min_hours += max(0, b - (u * X))
    return min_hours

# Get input
N, X = map(int, input().split())
exams = []
for _ in range(N):
    b, l, u = map(int, input().split())
    exams.append((b, l, u))

# Call function and print result
result = min_study_hours(N, X, exams)
print(result)