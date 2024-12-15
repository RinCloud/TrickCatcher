def min_total_stamina(N, X):
    min_stamina = float('inf')
    for P in range(1, 101):
        total_stamina = sum([(x - P) ** 2 for x in X])
        min_stamina = min(min_stamina, total_stamina)
    return min_stamina

N = int(input())
X = list(map(int, input().split()))
print(min_total_stamina(N, X))