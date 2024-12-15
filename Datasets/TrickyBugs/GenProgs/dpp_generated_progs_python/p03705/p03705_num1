def calculate_possible_sums(N, A, B):
    min_sum = A * (N - 1) + B
    max_sum = A + B * (N - 1)
    num_possible_sums = max_sum - min_sum + 1
    if num_possible_sums < 0:
        return 0
    return num_possible_sums

input_data = input().split()
N = int(input_data[0])
A = int(input_data[1])
B = int(input_data[2])

print(calculate_possible_sums(N, A, B))