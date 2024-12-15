def min_study_hours(N, X, exams):
    hours = [0] * N
    aoki_scores = [exam[0] for exam in exams]
    takahashi_scores = [X for _ in range(N)]
    study_hours = 0

    while True:
        takahashi_total = sum([exams[i][1] * takahashi_scores[i] for i in range(N)])
        aoki_total = sum([exams[i][1] * aoki_scores[i] for i in range(N)])

        if takahashi_total >= aoki_total:
            break
        
        max_diff = -1
        max_diff_idx = -1

        for i in range(N):
            diff = exams[i][2] - takahashi_scores[i]

            if diff > max_diff:
                max_diff = diff
                max_diff_idx = i

        if max_diff == 0:
            break

        hours[max_diff_idx] += 1
        takahashi_scores[max_diff_idx] += 1
        study_hours += 1

    return study_hours

N, X = map(int, input().split())
exams = []

for _ in range(N):
    b, l, u = map(int, input().split())
    exams.append((b, l, u))

result = min_study_hours(N, X, exams)
print(result)