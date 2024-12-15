'''
def min_shopping_time(N, L, shopping_centres, shopping_times):

    # Calculate the time taken to reach each shopping centre
    time_to_reach = []
    current_time = 0
    for i in range(N):
        time_to_reach.append(shopping_centres[i] - current_time)
        current_time += time_to_reach[i]
        time_to_reach.append(0)

    # Calculate the time taken to return home
    time_to_return = []
    current_time = L
    for i in range(N, 0, -1):
        time_to_return.insert(0, current_time - shopping_centres[i - 1])
        current_time -= time_to_return[0]
        time_to_return.insert(0, 0)

    # Calculate the total time taken
    total_time = sum(shopping_times) + sum(time_to_reach) + sum(time_to_return)
    
    return total_time

N, L = map(int, input().split())
shopping_centres = list(map(int, input().split()))
shopping_times = list(map(int, input().split()))

print(min_shopping_time(N, L, shopping_centres, shopping_times))
'''