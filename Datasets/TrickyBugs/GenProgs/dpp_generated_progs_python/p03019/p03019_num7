import sys

def main():
    # Read inputs
    N, X = map(int, input().split())
    exams = []
    for _ in range(N):
        b, l, u = map(int, input().split())
        exams.append((b, l, u))
    
    # Sort exams by their importance (ascending)
    exams.sort(key=lambda x: x[1])
    
    # Initialize variables
    hours = 0
    total_A = 0
    total_B = 0
    
    # Calculate initial score for A and B
    for exam in exams:
        b, l, u = exam
        total_B += b * l
    
    # Check if A >= B
    if total_A >= total_B:
        print(hours)
        return
    
    # Increase score for A until A >= B or maximum score is reached
    for exam in exams:
        b, l, u = exam
        increase = min(X - l, b)
        hours += increase
        total_A += increase * l
        b -= increase
        total_B -= increase * l
        total_B += b * u
        
        # Check if A >= B
        if total_A >= total_B:
            print(hours)
            return
    
    # If A < B even after using all hours, print -1
    print(-1)

if __name__ == '__main__':
    main()