import sys

def min_study_hours(N, X, exams):
    min_hours = float('inf')
    
    for i in range(N):
        b, l, u = exams[i]
        if b >= X:
            min_hours = min(min_hours, 0)
        else:
            hours = (X - b) // (u - 1)
            hours += 1 if (X - b) % (u - 1) != 0 else 0
            min_hours = min(min_hours, hours)
    
    return min_hours

if __name__ == "__main__":
    N, X = map(int, input().split())
    exams = []
    for _ in range(N):
        b, l, u = map(int, input().split())
        exams.append((b, l, u))
    
    hours = min_study_hours(N, X, exams)
    print(hours)