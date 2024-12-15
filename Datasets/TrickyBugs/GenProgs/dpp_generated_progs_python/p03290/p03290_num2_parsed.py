import sys

def solve(D, G, scores, bonuses):
    min_problems = float('inf')
    
    for mask in range(1 << D):
        solved_problems = 0
        current_score = 0
        additional_problems = 0
        
        for i in range(D):
            if mask & (1 << i):
                solved_problems += scores[i]
                current_score += (i + 1) * scores[i] * 100 + bonuses[i]
            else:
                additional_problems = i
        
        if current_score >= G:
            min_problems = min(min_problems, solved_problems)
        else:
            problems_left = G - current_score
            score = (additional_problems + 1) * 100
            
            if problems_left <= score * (scores[additional_problems] - 1):
                solved_problems += (problems_left + score - 1) // score
                min_problems = min(min_problems, solved_problems)
    
    return min_problems

def main():
    D, G = map(int, input().split())
    scores = []
    bonuses = []
    
    for _ in range(D):
        p, c = map(int, input().split())
        scores.append(p)
        bonuses.append(c)
    
    result = solve(D, G, scores, bonuses)
    print(result)

main()