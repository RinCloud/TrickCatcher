import sys

def distribute_candies(a, b, c):
    total_candies = a + b + c
    if total_candies % 2 != 0:
        return "No"
    half_candies = total_candies // 2
    candy_combinations = [(a, b, c), (b, a, c), (c, a, b), (a, c, b), (b, c, a), (c, b, a)]
    for combination in candy_combinations:
        if combination[0] <= half_candies and combination[1] <= half_candies and combination[2] <= half_candies:
            return "Yes"
    return "No"

if __name__ == "__main__":
    a, b, c = map(int, input().split())
    result = distribute_candies(a, b, c)
    print(result)