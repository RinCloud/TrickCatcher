# program to find the minimum total cost of completing the tasks

# function to calculate the minimum total cost
def min_total_cost(tasks):
    # sort the tasks in ascending order
    sorted_tasks = sorted(tasks)

    # calculate the minimum cost
    min_cost = sorted_tasks[2] - sorted_tasks[0]

    return min_cost

# take input from user
input_str = input()
tasks = list(map(int, input_str.split()))

# calculate the minimum total cost
cost = min_total_cost(tasks)

# print the output
print(cost)