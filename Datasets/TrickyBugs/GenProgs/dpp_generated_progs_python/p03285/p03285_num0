def is_possible(N):
    available_cakes = N // 4
    available_doughnuts = N // 7

    for cake_count in range(available_cakes, -1, -1):
        for doughnut_count in range(available_doughnuts, -1, -1):
            total_cost = cake_count * 4 + doughnut_count * 7

            if total_cost == N:
                return "Yes"

    return "No"


N = int(input())
print(is_possible(N))