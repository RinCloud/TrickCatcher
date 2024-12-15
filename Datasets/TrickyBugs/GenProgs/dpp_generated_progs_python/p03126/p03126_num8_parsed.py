def count_foods(N, M, answers):
    food_count = [0] * M
    for ans in answers:
        for food in ans[1:]:
            food_count[food-1] += 1
    
    liked_by_all = 0
    for count in food_count:
        if count == N:
            liked_by_all += 1
    
    return liked_by_all


if __name__ == '__main__':
    N, M = map(int, input().split())
    answers = []
    for _ in range(N):
        answers.append(list(map(int, input().split())))
    
    result = count_foods(N, M, answers)
    print(result)
