# Program

def calculate_health_points(N, takoyaki):
    sum_of_health_points = 0
    for i in range(N):
        for j in range(i+1, N):
            health_points = takoyaki[i] * takoyaki[j]
            sum_of_health_points += health_points
    return sum_of_health_points

N = int(input())
takoyaki = list(map(int, input().split()))

result = calculate_health_points(N, takoyaki)
print(result)