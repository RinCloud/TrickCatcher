# Getting the input
N, M = map(int, input().split())
answers = []
for _ in range(N):
    answers.append(list(map(int, input().split())))

# Counting the number of foods liked by all the N people
liked_by_all = 0
for food in range(1, M+1):
    found_in_all = True
    for i in range(N):
        if food not in answers[i][1:]:
            found_in_all = False
            break
    if found_in_all:
        liked_by_all += 1

# Printing the output
print(liked_by_all)