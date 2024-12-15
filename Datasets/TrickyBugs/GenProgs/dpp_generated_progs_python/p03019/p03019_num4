def minimum_study_hours(N, X, exams):
    total_c = 0 # total importance of all exams
    max_deficit = 0 # maximum negative difference between lowest possible score and Aoki's score
    max_excess = 0 # maximum positive difference between highest possible score and Aoki's score
    
    for exam in exams:
        bi = exam[0] # Aoki's score
        li = exam[1] # lower bound of importance
        ui = exam[2] # upper bound of importance
        
        total_c += ui # adding maximum importance to the total
        deficit = bi - ui # difference between Aoki's score and maximum possible score
        excess = bi - li # difference between Aoki's score and minimum possible score
        
        max_deficit = max(max_deficit, deficit)
        max_excess = max(max_excess, excess)
    
    if X >= max_deficit:
        study_hours = X - max_deficit
    else:
        study_hours = 0
        
    study_hours += total_c
    
    if study_hours >= X + max_excess:
        return study_hours
    else:
        return -1

# Taking input
N, X = map(int, input().split())
exams = []
for _ in range(N):
    bi, li, ui = map(int, input().split())
    exams.append((bi, li, ui))

# Calling the function and printing the output
print(minimum_study_hours(N, X, exams))