import math

def maximum_doughnuts(N, X, doughnut_ingredients):
    min_doughnuts = math.ceil(X / sum(doughnut_ingredients))
    max_doughnuts = min_doughnuts + N - 1
    return max_doughnuts

N, X = map(int, input().split())
doughnut_ingredients = []
for _ in range(N):
    doughnut_ingredients.append(int(input()))

result = maximum_doughnuts(N, X, doughnut_ingredients)
print(result)