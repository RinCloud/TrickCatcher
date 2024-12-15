import sys

def main():
    # Read input
    N, X = map(int, input().split())
    exams = []
    for _ in range(N):
        b, l, u = map(int, input().split())
        exams.append((b, l, u))

    # Sort exams by their contribution to Aoki's score
    sorted_exams = sorted(exams, key=lambda x: x[0], reverse=True)

    # Calculate initial scores A and B
    A = 0
    B = 0
    for b, l, u in exams:
        A += b * l
        B += b * u

    # Check if Takahashi already wins
    if A >= B:
        print(0)
        return

    # Calculate the number of additional study hours required for Takahashi to win
    remaining_hours = X * N
    for b, l, u in sorted_exams:
        A += b * (X - l)
        B += b * (X - u)
        if A >= B:
            study_hours = remaining_hours - (b * X)
            print(study_hours)
            return
        remaining_hours -= (b * (X - l))

    print(-1)  # No amount of study can make Takahashi win

if __name__ == "__main__":
    main()