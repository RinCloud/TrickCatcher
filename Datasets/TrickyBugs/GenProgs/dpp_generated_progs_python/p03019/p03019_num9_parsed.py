import sys

def takahashi_wins(N, X, exams):
    hours = 0
    while True:
        a_sum = 0
        for i in range(N):
            a_sum += exams[i][0] * exams[i][1]
        
        b_sum = 0
        for i in range(N):
            b_sum += exams[i][0] * exams[i][2]
        
        if a_sum >= b_sum:
            break
        
        max_increase = -1
        max_increase_idx = -1
        for i in range(N):
            if exams[i][1] < exams[i][2]:
                increase = (exams[i][2] - exams[i][1]) * exams[i][0]
                if increase > max_increase:
                    max_increase = increase
                    max_increase_idx = i
        
        if max_increase_idx == -1:
            break
        
        if exams[max_increase_idx][1] + 1 > X:
            break
        
        exams[max_increase_idx][1] += 1
        hours += 1
    
    return hours


if __name__ == "__main__":
    N, X = map(int, input().strip().split())
    exams = []
    for _ in range(N):
        b, l, u = map(int, input().strip().split())
        exams.append([b, l, u])
    
    print(takahashi_wins(N, X, exams))
    sys.stdout.flush()